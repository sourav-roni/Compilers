/*
Name : Sourav Pal
Roll No.: 14CS10062
Assignment No.: 6
Date : 10/11/2016
*/
# include "ass6_14CS10062_translator.h"
# include "y.tab.h"
# include <cstdio>
#include <vector>
# include <cstdlib>
# include <cstring>
#include <fstream>

using namespace std;

extern int yyparse();
extern int yydebug;


void reduce_quads();
void global_symbol_table_add();
void string_literal_print();
void logical_without_goto(row_loc_quad r,char *s,op_type op_code);
void cleanup(symbol_table * t);
void adding_quad();
void convert_goto2_label();
void logical_with_goto(row_of_quad r1,row_loc_quad r,char *s,op_type op_code);
void symbol_table_update();
void upgrad_quads();
void target_translator();
int  size_of_local_data(symbol_table *r);
void print_parameter(row_loc_quad r,row_of_quad r1,char *regis,char* regis1);
void optimise(symbol_table *t );
void print_unused();

void cleanup(symbol_table * t)
{
	if(t!=NULL)
	{
		t->table[global_optimize].nested_symbol_table = NULL;
	}
	return;
}


void symbol_table_update()
{
	int i,j;
  	vector<symbol_table*> sym_tabs;
  	//global variables need seperate treatment
	i = 0;
	while(i<=global->last_index)
	{
		if((global->table[i]).nested_symbol_table==NULL)
		{
			(global->table[i]).global_indication = 1;
		}
		else
		{
			sym_tabs.push_back((global->table[i]).nested_symbol_table);
		}
		i++;
	}
	sym_tabs.push_back(global);
  	//below the offsets are updated
	i = 0;
	while(i<sym_tabs.size())
	{
		symbol_table * temp = sym_tabs[i];
		int return_ind = -1, a = 8, b = 0, nparam = 0;
		j = 0;
		while(j<=temp->last_index)
		{
			if(strcmp((temp->table[j]).name,"RETURN") == 0)
		    {
		       return_ind = j;
		    }
			j++;
		}
		j = 0;
		nparam = 0;
		while(j<= temp->last_index)
		{
			if(j < return_ind && nparam >= 4)
		    {
				(temp->table[j]).offset = a;
		       	a  = a + (temp->table[j]).size;
		    }
		    else if(j < return_ind && nparam < 4)
		    {
		     	b = b -(temp->table[j]).size;
		       	(temp->table[j]).offset = b;  
		    }
		    else if(j > return_ind)
		    {
		        b = b -(temp->table[j]).size;
		        (temp->table[j]).offset = b;
		    }
			j++;
			nparam++;
		}
		i++;
	}
}

 //printing global information

void print_global_information()
{
    row_of_symbol_table * temporary = global->table;
    int i;
	i = 0;
	while(i<=global->last_index)
	{
		if(((temporary[i]).nested_symbol_table)==NULL)
       	{
          if((temporary[i].initial_value)!=NULL)
          {
			int init_val;
             if((temporary[i].type)->type != int_type)
             {
				init_val = (int)(*((char *)(temporary[i].initial_value)));
                printf("\t.globl\t%s\n",temporary[i].name);
                printf("\t.data\n");
                printf("\t.type\t%s, @object\n",temporary[i].name);
                printf("\t.size\t%s, %d\n",temporary[i].name,temporary[i].size);
                printf("%s:\n",temporary[i].name);
                printf("\t.byte\t%d\n",init_val);
             }
             else
             { 
                init_val = *((int *)(temporary[i].initial_value));
                printf("\t.globl\t%s\n",temporary[i].name);
                printf("\t.data\n");
                printf("\t.align 4\n");
                printf("\t.type\t%s, @object\n",temporary[i].name);
                printf("\t.size\t%s, %d\n",temporary[i].name,temporary[i].size);
                printf("%s:\n",temporary[i].name);
                printf("\t.long\t%d\n",init_val);
             }
          }
          else
          {
             printf("\t.comm\t%s,%d,%d\n",temporary[i].name,temporary[i].size,temporary[i].size);
          }
     	}
		i++;
	}
}

void reduce_quads()
{
	row_of_quad * t;
	t = (row_of_quad *)malloc(MAX_SIZE*sizeof(row_of_quad));
	int i = 0;
	for(i = 0; i<10; i++)
	{
		i++;
	}
	return;
}

void update_pointer_size()
{	
	int i ;
	vector<symbol_table*> sym_tab;

	i = 0;
	while(i<=global->last_index)
	{
		if((global->table[i]).nested_symbol_table!=NULL)
		{
			sym_tab.push_back((global->table[i]).nested_symbol_table);
		}
		i++;
	}
	sym_tab.push_back(global);
	
	i = 0;
	
	while(i<sym_tab.size())
	{
		symbol_table * temp = sym_tab[i];
		int j = 0;
		while(j<temp->last_index)
		{
			if((temp->table[j]).type->type == pointer_type)
		    {
		       (temp->table[j]).size = 8;
		    }
			j++;	
		}
		i++;
	}
}

void string_literal_print()
{
	int i;
    if(newstrings_count>0)
	{
    	printf("\t.section\t.rodata\n");
	}
	i = 0;
	while(i<newstrings_count)
	{
		printf(".LFE%d:\n",i);
     	printf("\t.string\t%s\n",newstrings[i]);
		i++;
	}
}

void adding_quad()
{
	row_of_quad x(0,0,0,no_op);
	lone_array[global_optimize] = x;
	return;
}

int size_of_local_data(symbol_table *r)
{
   int size = 0;
   int return_index = -1;
   int i,j = 0;
	while(j<=r->last_index)
	{
		if(strcmp((r->table[j]).name , "RETURN") == 0)
        {
         	return_index = j;
        }
		j++;
	}
   if(return_index != -1)
   {
     i = return_index + 1;
     while(i <= r->last_index)
     {
        size = size + (r->table[i]).size;
        ++i;
     }
   }
   return size;
}

void convert_goto2_label()
{
   int label_number = 0,i; 
    for(i =0 ;i < next_instr; i++)
    {
       row_of_quad temp = quad_array[i];
       if(temp.op_code == less_than_gop || 
          temp.op_code == less_than_or_equal_to_gop || 
          temp.op_code == greater_than_gop || 
          temp.op_code == greater_than_or_equal_to_gop || 
          temp.op_code == equal_to_gop || 
          temp.op_code == not_equal_to_gop || 
          temp.op_code == if_yes_goto_op || 
          temp.op_code == if_no_goto_op || 
          temp.op_code == goto_op)
          {
             int num = atoi(temp.res);
             if(!label[num])
             {
                label[num] = new char[10];
                sprintf(label[num],".L%d",label_number);
                label_number++;
             }
          }
    }
}

void upgrad_quads()
{
	int i= 0;
	while(i<global_optimize)
	{
		lone_array[i].res = 0;
	}
	return;
}	

void global_symbol_table_add()
{
   //adding prints
   
   string var1 = "s";
   char* var2 = convert2char_star(var1);
   type_expression *k = new_expression(pointer_type,-1);
   type_expression *k1 = new_expression(char_type,-1);
   k->next = k1;
   symbol_table * new_tempo = new symbol_table(2);
   row_of_symbol_table x1(var2,k,4,0,0,0);
   new_tempo->add(x1);
   var1 = "RETURN";
   var2 = convert2char_star(var1);
   k = new_expression(int_type,-1);
   row_of_symbol_table x2(var2,k,4,4,0,0);
   new_tempo->add(x2);
   
   var1 = "prints";
   var2 = convert2char_star(var1);
   k = new_expression(function_type,-1);
   row_of_symbol_table x3(var2,k,0,-1,0,new_tempo);
   global->add(x3);

   string s((global->table[global->last_index]).name);
   s = s + " SYMBOL TABLE";
   (global->table[global->last_index]).name_of_nested_symbol_table = convert2char_star(s);
   
   //adding printi  

   var1 = "i";
   var2 = convert2char_star(var1);
   k = new_expression(int_type,-1);
   new_tempo = new symbol_table(2);
   row_of_symbol_table x4(var2,k,4,0,0,0);
   new_tempo->add(x4);
   var1 = "RETURN";
   var2 = convert2char_star(var1);
   k = new_expression(int_type,-1);
   row_of_symbol_table x5(var2,k,4,4,0,0);
   new_tempo->add(x5);
   
   var1 = "printi";
   var2 = convert2char_star(var1);
   k = new_expression(function_type,-1);
   row_of_symbol_table x6(var2,k,0,-1,0,new_tempo);
   global->add(x6);

   s = (global->table[global->last_index]).name;
   s = s + " SYMBOL TABLE";
   (global->table[global->last_index]).name_of_nested_symbol_table = convert2char_star(s);

   //adding readi
   
   var1 = "ep";
   var2 = convert2char_star(var1);
   k = new_expression(pointer_type,-1);
   k1 = new_expression(int_type,-1);
   k->next = k1;
   new_tempo = new symbol_table(2);
   row_of_symbol_table x7(var2,k,4,0,0,0);
   new_tempo->add(x7);
   var1 = "RETURN";
   var2 = convert2char_star(var1);
   k = new_expression(int_type,-1);
   row_of_symbol_table x8(var2,k,4,4,0,0);
   new_tempo->add(x8);
   
   var1 = "readi";
   var2 = convert2char_star(var1);
   k = new_expression(function_type,-1);
   row_of_symbol_table x9(var2,k,0,-1,0,new_tempo);
   global->add(x9);

   s = (global->table[global->last_index]).name;
   s = s + " SYMBOL TABLE";
   (global->table[global->last_index]).name_of_nested_symbol_table = convert2char_star(s);
 

   printf("%d\n",global->last_index);
}

void target_translator()
{
   int i,size;
   char * name;
   row_of_quad * temp_quad = quad_array;
   row_loc_quad * tem_quad_loc = quad_array_loc;
   int global_ind;
   int offs;
   i = 0;
   while(i < next_instr)
   {
	switch(temp_quad[i].op_code)
	{
	case addition_op:
       //if(temp_quad[i].op_code == addition_op)
	       {
		  if(label[i]!=NULL)
		  {
			printf("%s:\n",label[i]);
		  }
		  global_ind = (tem_quad_loc[i].arg1)->global_indication;
		  offs = (tem_quad_loc[i].arg1)->offset;
		  if(global_ind != 1)
			{
				printf("\tmovl\t%d(%%rbp), %%eax\n",offs);
			}
		  else
			{
				printf("\tmovl\t%s(%%rip), %%eax\n",(tem_quad_loc[i].arg1)->name); 
			}
		                    
		  global_ind = (tem_quad_loc[i].arg2)->global_indication;
		  offs = (tem_quad_loc[i].arg2)->offset;
		  if(global_ind != 1)
			{
				printf("\tmovl\t%d(%%rbp), %%edx\n",offs);
			}
		  else 
			{
				printf("\tmovl\t%s(%%rip), %%edx\n",(tem_quad_loc[i].arg2)->name);
			}
		  printf("\taddl\t%%edx, %%eax\n");
		  global_ind = (tem_quad_loc[i].res)->global_indication;
		  offs = (tem_quad_loc[i].res)->offset;
		  
		  if(global_ind != 1)
			{
				printf("\tmovl\t%%eax, %d(%%rbp)\n",offs);
			}
		  else
			{
				printf("\tmovl\t%%eax, %s(%%rip)\n",(tem_quad_loc[i].res)->name); 
			}
	       }
		break;
	case subtraction_op:
       //else if(temp_quad[i].op_code == subtraction_op)
	       {
		  if(label[i]!=NULL)
			{
				printf("%s:\n",label[i]);
			}
		  
		  global_ind = (tem_quad_loc[i].arg1)->global_indication;
		  offs = (tem_quad_loc[i].arg1)->offset;
		  if(global_ind != 1)
			{
				printf("\tmovl\t%d(%%rbp), %%eax\n",offs);
			}
		  else 
			{
				printf("\tmovl\t%s(%%rip), %%eax\n",(tem_quad_loc[i].arg1)->name);
			}
		                    
		  global_ind = (tem_quad_loc[i].arg2)->global_indication;
		  offs = (tem_quad_loc[i].arg2)->offset;
		  if(global_ind != 1)
			{
				printf("\tmovl\t%d(%%rbp), %%edx\n",offs);
			}
		  else 
			{
				printf("\tmovl\t%s(%%rip), %%edx\n",(tem_quad_loc[i].arg2)->name);
			}
		  printf("\tsubl\t%%edx, %%eax\n");
		  global_ind = (tem_quad_loc[i].res)->global_indication;
		  offs = (tem_quad_loc[i].res)->offset;
		  
		  if(global_ind != 1)
			{
				printf("\tmovl\t%%eax, %d(%%rbp)\n",offs);
			}
		  else 
			{
				printf("\tmovl\t%%eax, %s(%%rip)\n",(tem_quad_loc[i].res)->name);
			}
	       }
		break;
	case multiplication_op:
       //else if(temp_quad[i].op_code == multiplication_op)
	       {
		  if(label[i]!=NULL)printf("%s:\n",label[i]);
		  
		  global_ind = (tem_quad_loc[i].arg1)->global_indication;
		  offs = (tem_quad_loc[i].arg1)->offset;
		  if(global_ind != 1)printf("\tmovl\t%d(%%rbp), %%eax\n",offs);
		  else printf("\tmovl\t%s(%%rip), %%eax\n",(tem_quad_loc[i].arg1)->name);
		  
		  global_ind = (tem_quad_loc[i].arg2)->global_indication;
		  offs = (tem_quad_loc[i].arg2)->offset;
		  if(global_ind != 1)printf("\timull\t%d(%%rbp), %%eax\n",offs);
		  else printf("\timull\t%s(%%rip), %%eax\n",(tem_quad_loc[i].arg2)->name);
		                
		  global_ind = (tem_quad_loc[i].res)->global_indication;
		  offs = (tem_quad_loc[i].res)->offset;
		  if(global_ind != 1)printf("\tmovl\t%%eax, %d(%%rbp)\n",offs);
		  else printf("\tmovl\t%%eax, %s(%%rip)\n",(tem_quad_loc[i].res)->name);
	       }
		break;
	case division_op:
       		//else if(temp_quad[i].op_code == division_op)
	       {
		    if(label[i]!=NULL)printf("%s:\n",label[i]);
		  
		    global_ind = (tem_quad_loc[i].arg1)->global_indication;
		    offs = (tem_quad_loc[i].arg1)->offset;
		    if(global_ind != 1)printf("\tmovl\t%d(%%rbp), %%eax\n",offs);
		    else printf("\tmovl\t%s(%%rip), %%eax\n",(tem_quad_loc[i].arg1)->name);
		    printf("\tcltd\n");
		       
		    global_ind = (tem_quad_loc[i].arg2)->global_indication;
		    offs = (tem_quad_loc[i].arg2)->offset;
		    if(global_ind != 1)printf("\tidivl\t%d(%%rbp)\n",offs);
		    else printf("\tidivl\t%s(%%rip)\n",(tem_quad_loc[i].arg2)->name);
		                
		    global_ind = (tem_quad_loc[i].res)->global_indication;
		    offs = (tem_quad_loc[i].res)->offset;
		    if(global_ind != 1)printf("\tmovl\t%%eax, %d(%%rbp)\n",offs);
		    else printf("\tmovl\t%%eax, %s(%%rip)\n",(tem_quad_loc[i].res)->name);


	       }
		break;
	case mod_op:
	       //else if(temp_quad[i].op_code == mod_op)
	       {

		     if(label[i]!=NULL)printf("%s:\n",label[i]);
		  
		     global_ind = (tem_quad_loc[i].arg1)->global_indication;
		     offs = (tem_quad_loc[i].arg1)->offset;
		     if(global_ind != 1)printf("\tmovl\t%d(%%rbp), %%eax\n",offs);
		     else printf("\tmovl\t%s(%%rip), %%eax\n",(tem_quad_loc[i].arg1)->name);
		     printf("\tcltd\n");
		               
		     global_ind = (tem_quad_loc[i].arg2)->global_indication;
		     offs = (tem_quad_loc[i].arg2)->offset;
		     if(global_ind != 1)printf("\tidivl\t%d(%%rbp)\n",offs);
		     else printf("\tidivl\t%s(%%rip)\n",(tem_quad_loc[i].arg2)->name);
		                
		     global_ind = (tem_quad_loc[i].res)->global_indication;
		     offs = (tem_quad_loc[i].res)->offset;
		     if(global_ind != 1)printf("\tmovl\t%%edx, %d(%%rbp)\n",offs);
		     else printf("\tmovl\t%%edx, %s(%%rip)\n",(tem_quad_loc[i].res)->name);

	       }
		break;
	case assign_op:
	       //else if(temp_quad[i].op_code == assign_op)
	       {
		     if(label[i]!=NULL)printf("%s:\n",label[i]);
		     if(!(tem_quad_loc[i].arg1))printf("\tmovl\t$%s, %%eax\n",temp_quad[i].arg1);
		     else
		     {
		         if((tem_quad_loc[i].arg1)->type->type != array_type)
		         {
		             global_ind = (tem_quad_loc[i].arg1)->global_indication;
		             offs = (tem_quad_loc[i].arg1)->offset;
		             if(global_ind != 1)printf("\tmovl\t%d(%%rbp), %%eax\n",offs);
		             else printf("\tmovl\t%s(%%rip), %%eax\n",(tem_quad_loc[i].arg1)->name);
		         }
		         else
		         {
			     global_ind = (tem_quad_loc[i].arg1)->global_indication;
		             offs = (tem_quad_loc[i].arg1)->offset;
		             if(global_ind != 1)printf("\tleaq\t%d(%%rbp), %%rax\n",offs);
		             else printf("\tleaq\t%s(%%rip), %%rax\n",(tem_quad_loc[i].arg1)->name);
		         } 
		      }
		     global_ind = (tem_quad_loc[i].res)->global_indication;
		     offs = (tem_quad_loc[i].res)->offset;
		     if(global_ind != 1)printf("\tmovl\t%%eax, %d(%%rbp)\n",offs);
		     else printf("\tmovl\t%%eax, %s(%%rip)\n",(tem_quad_loc[i].res)->name);
		}
  		break;
	case left_brace_op:
		//else if(temp_quad[i].op_code == left_brace_op)
		{
		    if(label[i]!=NULL)printf("%s:\n",label[i]);
		                       
		     global_ind = (tem_quad_loc[i].arg2)->global_indication;
		     offs = (tem_quad_loc[i].arg2)->offset;
		     if(global_ind != 1)printf("\tmovl\t%d(%%rbp), %%eax\n",offs);
		     else printf("\tmovl\t%s(%%rip), %%eax\n",(tem_quad_loc[i].arg2)->name);
		     printf("\tmovslq\t%%eax, %%rax\n");
		                       
		     global_ind = (tem_quad_loc[i].arg1)->global_indication;
		     offs = (tem_quad_loc[i].arg1)->offset;
		     if((tem_quad_loc[i].arg1)->type->type != pointer_type)
		     {
			if(global_ind != 1)printf("\tleaq\t%d(%%rbp), %%rdx\n",offs);
		        else printf("\tleaq\t%s(%%rip), %%rdx\n",(tem_quad_loc[i].arg1)->name);
		     }
		     else
		     {
			if(global_ind != 1)printf("\tmovq\t%d(%%rbp), %%rdx\n",offs);
		        else printf("\tmovq\t%s(%%rip), %%rdx\n",(tem_quad_loc[i].arg1)->name);
		     }
		     
		     printf("\taddq\t%%rdx, %%rax\n");
		     
		     global_ind = (tem_quad_loc[i].res)->global_indication;
		     offs = (tem_quad_loc[i].res)->offset;
		     if(global_ind != 1)printf("\tmovl\t%d(%%rbp), %%edx\n",offs);
		     else printf("\tmovl\t%s(%%rip), %%edx\n",(tem_quad_loc[i].res)->name);
		     printf("\tmovl\t%%edx, (%%rax)\n");
		}
		break;
	case right_brace_op:
		//else if(temp_quad[i].op_code == right_brace_op)
		{
		     if(label[i]!=NULL)printf("%s:\n",label[i]);
		     
		     global_ind = (tem_quad_loc[i].arg2)->global_indication;
		     offs = (tem_quad_loc[i].arg2)->offset;
		     if(global_ind != 1)printf("\tmovl\t%d(%%rbp), %%eax\n",offs);
		     else printf("\tmovl\t%s(%%rip), %%eax\n",(tem_quad_loc[i].arg2)->name);
		     printf("\tmovslq\t%%eax, %%rax\n");
		                         
		     global_ind = (tem_quad_loc[i].arg1)->global_indication;
		     offs = (tem_quad_loc[i].arg1)->offset;
		     if((tem_quad_loc[i].arg1)->type->type != pointer_type)
		     {
	    		if(global_ind != 1)printf("\tleaq\t%d(%%rbp), %%rdx\n",offs);             
		         else printf("\tleaq\t%s(%%rip), %%rdx\n",(tem_quad_loc[i].arg1)->name);
		     }
		     else
		     {
		         if(global_ind != 1)printf("\tmovq\t%d(%%rbp), %%rdx\n",offs);
		         else printf("\tmovq\t%s(%%rip), %%rdx\n",(tem_quad_loc[i].arg1)->name);
		     }
		     printf("\taddq\t%%rdx, %%rax\n");
		     printf("\tmovl\t(%%rax), %%eax\n");
		                         
		     global_ind = (tem_quad_loc[i].res)->global_indication;
		     offs = (tem_quad_loc[i].res)->offset;
		     if(global_ind != 1)printf("\tmovl\t%%eax, %d(%%rbp)\n",offs);
		     else printf("\tmovl\t%%eax, %s(%%rip)\n",(tem_quad_loc[i].res)->name);
		 }
	   	break;
	case less_than_op:
		logical_without_goto(tem_quad_loc[i],label[i],temp_quad[i].op_code);
		break;
	case less_than_or_equal_to_op:
		logical_without_goto(tem_quad_loc[i],label[i],temp_quad[i].op_code);
		break;
         case greater_than_op:
		logical_without_goto(tem_quad_loc[i],label[i],temp_quad[i].op_code);
		break;
         case greater_than_or_equal_to_op:
		logical_without_goto(tem_quad_loc[i],label[i],temp_quad[i].op_code);
		break;
         case equal_to_op:
		logical_without_goto(tem_quad_loc[i],label[i],temp_quad[i].op_code);
		break;
         case not_equal_to_op:
		logical_without_goto(tem_quad_loc[i],label[i],temp_quad[i].op_code);
		break;
   
	 case less_than_gop:
		logical_with_goto(temp_quad[i],tem_quad_loc[i],label[i],temp_quad[i].op_code);
		break;
	case less_than_or_equal_to_gop:
		logical_with_goto(temp_quad[i],tem_quad_loc[i],label[i],temp_quad[i].op_code);
		break;
         case greater_than_gop:
		logical_with_goto(temp_quad[i],tem_quad_loc[i],label[i],temp_quad[i].op_code);
		break;
         case greater_than_or_equal_to_gop:
		logical_with_goto(temp_quad[i],tem_quad_loc[i],label[i],temp_quad[i].op_code);
		break;
         case equal_to_gop:
		logical_with_goto(temp_quad[i],tem_quad_loc[i],label[i],temp_quad[i].op_code);
		break;
         case not_equal_to_gop:
		logical_with_goto(temp_quad[i],tem_quad_loc[i],label[i],temp_quad[i].op_code);
		break;
                  
	case if_yes_goto_op:
		 //else if(temp_quad[i].op_code == if_yes_goto_op)
		 {
		    if(label[i]!=NULL)printf("%s:\n",label[i]);
		                                
		    global_ind = (tem_quad_loc[i].arg1)->global_indication;
		    offs = (tem_quad_loc[i].arg1)->offset;
		    if(global_ind != 1)printf("\tcmpl\t$0, %d(%%rbp)\n",offs);
		    else printf("\tcmpl\t$0, %s(%%rip)\n",(tem_quad_loc[i].arg1)->name);
		    printf("\tjne\t%s\n",label[atoi(temp_quad[i].res)]);
		 }
		break;
	case if_no_goto_op:
		 //else if(temp_quad[i].op_code == if_no_goto_op)
		 {
		    if(label[i]!=NULL)printf("%s:\n",label[i]);
		                                
		    global_ind = (tem_quad_loc[i].arg1)->global_indication;
		    offs = (tem_quad_loc[i].arg1)->offset;
		    if(global_ind != 1)printf("\tcmpl\t$0, %d(%%rbp)\n",offs);
		    else printf("\tcmpl\t$0, %s(%%rip)\n",(tem_quad_loc[i].arg1)->name);
		    printf("\tjne\t%s\n",label[atoi(temp_quad[i].res)]);
		 }
		break;
	case unary_plus_op: 
		 //else if(temp_quad[i].op_code == unary_plus_op)
		 { 
		    if(label[i]!=NULL)printf("%s:\n",label[i]);
		                                  
		    global_ind = (tem_quad_loc[i].arg1)->global_indication;
		    offs = (tem_quad_loc[i].arg1)->offset;
		    if(global_ind != 1)printf("\tmovl\t%d(%%rbp), %%eax\n",offs); 
		    else printf("\tmovl\t%s(%%rip), %%eax\n",(tem_quad_loc[i].arg1)->name);
		    
		    global_ind = (tem_quad_loc[i].res)->global_indication;
		    offs = (tem_quad_loc[i].res)->offset;
		    if(global_ind != 1)printf("\tmovl\t%%eax, %d(%%rbp)\n",offs);
		    else printf("\tmovl\t%%eax, %s(%%rip)\n",(tem_quad_loc[i].res)->name);
		 }
		 break;
	case unary_minus_op:
		 //else if(temp_quad[i].op_code == unary_minus_op)
		 {
		     if(label[i]!=NULL)printf("%s:\n",label[i]);
		                               
		    global_ind = (tem_quad_loc[i].arg1)->global_indication;
		    offs = (tem_quad_loc[i].arg1)->offset;
		    if(global_ind != 1)printf("\tmovl\t%d(%%rbp), %%eax\n",offs);
		    else printf("\tmovl\t%s(%%rip), %%eax\n",(tem_quad_loc[i].arg1)->name);
		     
		     printf("\tnegl\t%%eax\n"); 

		     global_ind = (tem_quad_loc[i].res)->global_indication;
		     offs = (tem_quad_loc[i].res)->offset;
		     if(global_ind != 1)printf("\tmovl\t%%eax, %d(%%rbp)\n",offs);
		     else printf("\tmovl\t%%eax, %s(%%rip)\n",(tem_quad_loc[i].res)->name);

		 }
	         break;
	case unary_negation_op:
		 //else if(temp_quad[i].op_code == unary_negation_op)
		 {
		    if(label[i]!=NULL)printf("%s:\n",label[i]);
		                                    
		    global_ind = (tem_quad_loc[i].arg1)->global_indication;
		    offs = (tem_quad_loc[i].arg1)->offset;
		    if(global_ind != 1)printf("\tcmpl\t$0, %d(%%rbp)\n",offs);
		    else printf("\tcmpl\t$0, %s(%%rip)\n",(tem_quad_loc[i].arg1)->name);
		                                  
		    printf("\tsete\t%%al\n");
		    printf("\tmovzbl\t%%al, %%eax\n");
		                                  
		     global_ind = (tem_quad_loc[i].res)->global_indication;
		     offs = (tem_quad_loc[i].res)->offset;
		     if(global_ind != 1)printf("\tmovl\t%%eax, %d(%%rbp)\n",offs); 
		     else printf("\tmovl\t%%eax, %s(%%rip)\n",(tem_quad_loc[i].res)->name);

		 }
      		break;
	case unary_address_op:
		 //else if(temp_quad[i].op_code == unary_address_op)
		 {
		     if(label[i]!=NULL)printf("%s:\n",label[i]);
		                                        
		     global_ind = (tem_quad_loc[i].arg1)->global_indication;
		     offs = (tem_quad_loc[i].arg1)->offset;
		     
		     if(global_ind != 1)printf("\tleaq\t%d(%%rbp), %%rax\n",offs);
		     else printf("\tleaq\t%s(%%rip), %%rax\n",(tem_quad_loc[i].arg1)->name);
		    
		     global_ind = (tem_quad_loc[i].res)->global_indication;
		     offs = (tem_quad_loc[i].res)->offset;
		     if(global_ind != 1)printf("\tmovq\t%%rax, %d(%%rbp)\n",offs);
		     else printf("\tmovq\t%%rax, %s(%%rip)\n",(tem_quad_loc[i].res)->name);

		 }
		break;
	case unary_star_op:
		 //else if(temp_quad[i].op_code == unary_star_op)
		 {
		     if(label[i]!=NULL)printf("%s:\n",label[i]);
		       
		     global_ind = (tem_quad_loc[i].arg1)->global_indication;
		     offs = (tem_quad_loc[i].arg1)->offset;
		     if(global_ind != 1)printf("\tmovl\t%d(%%rbp), %%eax\n",offs);
		     else printf("\tmovl\t%s(%%rip), %%eax\n",(tem_quad_loc[i].arg1)->name);
		     printf("\tmovl\t(%%eax), %%eax\n");

		     global_ind = (tem_quad_loc[i].res)->global_indication;
		     offs = (tem_quad_loc[i].res)->offset;
		     if(global_ind != 1)printf("\tmovl\t%%eax, %d(%%rbp)\n",offs);
		     else printf("\tmovl\t%%eax, %s(%%rip)\n",(tem_quad_loc[i].res)->name);

		 }
		break;
	case pointer_star_op:
		 //else if(temp_quad[i].op_code == pointer_star_op)
		 {
		     if(label[i]!=NULL)printf("%s:\n",label[i]);
		     
		     global_ind = (tem_quad_loc[i].res)->global_indication;
		     offs = (tem_quad_loc[i].res)->offset;
		     if(global_ind != 1)printf("\tmovq\t%d(%%rbp), %%rax\n",offs);
		     else printf("\tmovq\t%s(%%rip), %%rax\n",(tem_quad_loc[i].res)->name);
		                                      
		     global_ind = (tem_quad_loc[i].arg1)->global_indication;
		     offs = (tem_quad_loc[i].arg1)->offset;
		     if(global_ind != 1)printf("\tmovl\t%d(%%rbp), %%edx\n",offs);
		     else printf("\tmovl\t%s(%%rip), %%edx\n",(tem_quad_loc[i].arg1)->name);
		     printf("\tmovl\t%%edx, (%%rax)\n");
		 }
		 break;
	case call_op:
		 //else if(temp_quad[i].op_code == call_op)
		 {  
		     if(label[i]!=NULL)printf("%s:\n",label[i]);
		     printf("\tcall\t%s\n",temp_quad[i].arg1);
		 }
		break;
	case call_value_op:
		 //else if(temp_quad[i].op_code == call_value_op)
		 {
		     if(label[i]!=NULL)printf("%s:\n",label[i]);
		                                   
		     printf("\tcall\t%s\n",temp_quad[i].arg1);
		                                  
		     global_ind = (tem_quad_loc[i].res)->global_indication;
		     offs = (tem_quad_loc[i].res)->offset;
		     if(global_ind != 1)printf("\tmovl\t%%eax, %d(%%rbp)\n",offs);
		     else printf("\tmovl\t%%eax, %s(%%rip)\n",(tem_quad_loc[i].res)->name);
		 }
		 break;
	case goto_op:
		 //else if(temp_quad[i].op_code == goto_op)
		 {
		    if(label[i]!=NULL)printf("%s:\n",label[i]);
		    
		    printf("\tjmp\t%s\n",label[atoi(temp_quad[i].res)]);

		 }
		break;
	case param_op:
		 //else if(temp_quad[i].op_code == param_op)
		 {
		     if(label[i]!=NULL)printf("%s:\n",label[i]);
		     int j = i;
		                                   
		     while(1)
		     {
		          if(temp_quad[j].op_code == call_value_op || temp_quad[j].op_code == call_op)break;
		          j++;
		     }
		     j--;
		     int last_param_quad_number = j;
		     int parameter_num = j - i + 1;
		     int forf = 0;
		     while(j>=i)
		     {
		        global_ind = (tem_quad_loc[j].arg1)->global_indication;
		        offs = (tem_quad_loc[j].arg1)->offset;

		        if(parameter_num == 1)
		        {
		           string s("%rdi");
		           char *registre = convert2char_star(s);
		           s = "%edi";
		           char *registre1 = convert2char_star(s);
		           print_parameter(tem_quad_loc[j],temp_quad[j],registre,registre1);
		           i = last_param_quad_number;
		           break;

		        }

		        else if(parameter_num == 2)
		        {
		           int kkk = j - 1;
		           string s("%rdi");
		           char *registre = convert2char_star(s);
		           s = "%edi";
		           char *registre1 = convert2char_star(s);
		           print_parameter(tem_quad_loc[kkk],temp_quad[kkk],registre,registre1);
		            
		           s = "%rsi";
		           registre = convert2char_star(s);
		           s = "%esi";
		           registre1 = convert2char_star(s);
		           print_parameter(tem_quad_loc[j],temp_quad[j],registre,registre1);
		            i = last_param_quad_number;
		           break;
		        }

		        else if(parameter_num == 3)
		        {
		           int kkk = j - 2;
		           string s("%rdi");
		           char *registre = convert2char_star(s);
		           s = "%edi";
		           char *registre1 = convert2char_star(s);
		           print_parameter(tem_quad_loc[kkk],temp_quad[kkk],registre,registre1);
		            
		           kkk = j-1;
		           s = "%rsi";
		           registre = convert2char_star(s);
		           s = "%esi";
		           registre1 = convert2char_star(s);
		           print_parameter(tem_quad_loc[kkk],temp_quad[kkk],registre,registre1);

		           s = "%rdx";
		           registre = convert2char_star(s);
		           s = "%edx";
		           registre1 = convert2char_star(s);
		           print_parameter(tem_quad_loc[j],temp_quad[j],registre,registre1);
		            i = last_param_quad_number;
		           break;
		        }

		        else if(parameter_num == 4)
		        {
		           int kkk = j - 3;
		           string s("%rdi");
		           char *registre = convert2char_star(s);
		           s = "%edi";
		           char *registre1 = convert2char_star(s);
		           print_parameter(tem_quad_loc[kkk],temp_quad[kkk],registre,registre1);
		            
		           kkk = j-2;
		           s = "%rsi";
		           registre = convert2char_star(s);
		           s = "%esi";
		           registre1 = convert2char_star(s);
		           print_parameter(tem_quad_loc[kkk],temp_quad[kkk],registre,registre1);

		           kkk = j-1;
		           s = "%rdx";
		           registre = convert2char_star(s);
		           s = "%edx";
		           registre1 = convert2char_star(s);
		           print_parameter(tem_quad_loc[kkk],temp_quad[kkk],registre,registre1);

		           s = "%rcx";
		           registre = convert2char_star(s);
		           s = "%ecx";
		           registre1 = convert2char_star(s);
		           print_parameter(tem_quad_loc[j],temp_quad[j],registre,registre1);
		            i = last_param_quad_number;
		           break;
		        }
		        
		        else
		        {
		           if(forf == 0)
		           {int kkk = j - (parameter_num -1 );
		           string s("%rdi");
		           char *registre = convert2char_star(s);
		           s = "%edi";
		           char *registre1 = convert2char_star(s);
		           print_parameter(tem_quad_loc[kkk],temp_quad[kkk],registre,registre1);
		            
		           kkk = j-(parameter_num -2 );
		           s = "%rsi";
		           registre = convert2char_star(s);
		           s = "%esi";
		           registre1 = convert2char_star(s);
		           print_parameter(tem_quad_loc[kkk],temp_quad[kkk],registre,registre1);

		           kkk = j-(parameter_num -3 );
		           s = "%rdx";
		           registre = convert2char_star(s);
		           s = "%edx";
		           registre1 = convert2char_star(s);
		           print_parameter(tem_quad_loc[kkk],temp_quad[kkk],registre,registre1);

		           kkk = j - (parameter_num - 4);
		           s = "%rcx";
		           registre = convert2char_star(s);
		           s = "%ecx";
		           registre1 = convert2char_star(s);
		           print_parameter(tem_quad_loc[kkk],temp_quad[kkk],registre,registre1);
		           forf = 1;
		           i = kkk + 1;}

		           

		           if((tem_quad_loc[j].arg1)->size == -1)printf("\tmovl\t$%s, %%rdi\n",temp_quad[j].arg1);                                          
		                                       
		           else if((tem_quad_loc[j].arg1)->type->type == array_type)
		           {
		              if(global_ind != 1)printf("\tleaq\t%d(%%rbp), %%rax\n",offs); 
		              else printf("\tleaq\t%s(%%rip), %%rax\n",(tem_quad_loc[j].arg1)->name);
		              printf("\tpushq\t%%rax\n"); 
		           }
		           else if((tem_quad_loc[j].arg1)->type->type == pointer_type)
		           {
		              if(global_ind != 1)printf("\tmovq\t%d(%%rbp), %%rax\n",offs);
		              else printf("\tmovq\t%s(%%rip), %%rax\n",(tem_quad_loc[j].arg1)->name);
		              printf("\tpushq\t%%rax\n");  
		           }
		           else if((tem_quad_loc[j].arg1)->type->type == char_type)
		           {
		              if(global_ind != 1)printf("\tmovsbl\t%d(%%rbp), %%eax\n",offs);
		              else printf("\tmovsbl\t%s(%%rip), %%eax\n",(tem_quad_loc[j].arg1)->name);
		              printf("\tcltq\n");
		              printf("\tpushq\t%%rax\n");  
		           }
		          
		           else
		           {
		              if(global_ind != 1)printf("\tmovl\t%d(%%rbp), %%eax\n",offs);
		              else printf("\tmovl\t%s(%%rip), %%eax\n",(tem_quad_loc[j].arg1)->name);
		              printf("\tcltq\n");
		              printf("\tpushq\t%%rax\n");
		           }
		         }
		         j--;
		    }
		    i = last_param_quad_number; //assigning i to quad number of the last parameter

		 }
		break;
	case function_op:
		 //else if(temp_quad[i].op_code == function_op)
		 {
		      size = size_of_local_data((tem_quad_loc[i].arg1)->nested_symbol_table);
		      name = strdup(temp_quad[i].arg1);
		      if(label[i]!=NULL)labels_unused.push_back(label[i]); 
		                  
		      printf("\t.text\n");
		      printf("\t.globl\t%s\n",temp_quad[i].arg1);
		      printf("\t.type\t%s, @function\n",temp_quad[i].arg1);
		      printf("%s:\n",temp_quad[i].arg1);
		      
		      symbol_table *symtab_para = (tem_quad_loc[i].arg1)->nested_symbol_table;
		      
		      int returning_ind = -1;
		      int j = 0;
		      while(j<= symtab_para->last_index)
		      {
		         if(strcmp((symtab_para->table[j]).name , "RETURN") == 0)
		         {
		            returning_ind = j;
		         }
			 ++j;
		      }  
		      
		     
		      /*Generating the function prologue */ 
		      printf("\tpushq\t%%rbp\n");
		      printf("\tmovq\t%%rsp, %%rbp\n");

		      if(returning_ind == 1)
		      {
		         string name_new  = (symtab_para->table[0]).name;
		         int off_new      = (symtab_para->table[0]).offset;
		         int size_new     = (symtab_para->table[0]).size;

		         if(size_new == 1){printf("\tmovl\t%%edi, %%eax\n");printf("\tmovb\t%%al, %d(%%rbp)\n",off_new);}
	 
		         else if(size_new == 4)printf("\tmovl\t%%edi, %d(%%rbp)\n",off_new);
		         else printf("\tmovq\t%%rdi, %d(%%rbp)\n",off_new);
		          
		      }

		      if(returning_ind == 2)
		      {
		         string name_new  = (symtab_para->table[0]).name;
		         int off_new      = (symtab_para->table[0]).offset;
		         int size_new     = (symtab_para->table[0]).size;
		         if(size_new == 1){printf("\tmovl\t%%edi, %%eax\n");printf("\tmovb\t%%al, %d(%%rbp)\n",off_new);}
		         else if(size_new == 4)printf("\tmovl\t%%edi, %d(%%rbp)\n",off_new);
		         else printf("\tmovq\t%%rdi, %d(%%rbp)\n",off_new);

		         name_new  = (symtab_para->table[1]).name;
		         off_new      = (symtab_para->table[1]).offset;
		         size_new     = (symtab_para->table[1]).size;
		         if(size_new == 1){printf("\tmovl\t%%esi, %%eax\n");printf("\tmovb\t%%al, %d(%%rbp)\n",off_new);}
		         else if(size_new == 4)printf("\tmovl\t%%esi, %d(%%rbp)\n",off_new);
		         else printf("\tmovq\t%%rsi, %d(%%rbp)\n",off_new);
		          
		      }
	  
		      if(returning_ind == 3)
		      {
		         string name_new  = (symtab_para->table[0]).name;
		         int off_new      = (symtab_para->table[0]).offset;
		         int size_new     = (symtab_para->table[0]).size;
		         if(size_new == 1){printf("\tmovl\t%%edi, %%eax\n");printf("\tmovb\t%%al, %d(%%rbp)\n",off_new);}
		         else if(size_new == 4)printf("\tmovl\t%%edi, %d(%%rbp)\n",off_new);
		         else printf("\tmovq\t%%rdi, %d(%%rbp)\n",off_new);

		         name_new  = (symtab_para->table[1]).name;
		         off_new      = (symtab_para->table[1]).offset;
		         size_new     = (symtab_para->table[1]).size;
		         if(size_new == 1){printf("\tmovl\t%%esi, %%eax\n");printf("\tmovb\t%%al, %d(%%rbp)\n",off_new);}
		         else if(size_new == 4)printf("\tmovl\t%%esi, %d(%%rbp)\n",off_new);
		         else printf("\tmovq\t%%rsi, %d(%%rbp)\n",off_new);
	 
		         name_new  = (symtab_para->table[2]).name;
		         off_new      = (symtab_para->table[2]).offset;
		         size_new     = (symtab_para->table[2]).size;
		         if(size_new == 1){printf("\tmovl\t%%edx, %%eax\n");printf("\tmovb\t%%al, %d(%%rbp)\n",off_new);}
		         else if(size_new == 4)printf("\tmovl\t%%edx, %d(%%rbp)\n",off_new);
		         else printf("\tmovq\t%%rdx, %d(%%rbp)\n",off_new);
		          
		      }  

		      if(returning_ind >= 4)
		      {
		         string name_new  = (symtab_para->table[0]).name;
		         int off_new      = (symtab_para->table[0]).offset;
		         int size_new     = (symtab_para->table[0]).size;
		         if(size_new == 1){printf("\tmovl\t%%edi, %%eax\n");printf("\tmovb\t%%al, %d(%%rbp)\n",off_new);}
		         else if(size_new == 4)printf("\tmovl\t%%edi, %d(%%rbp)\n",off_new);
		         else printf("\tmovq\t%%rdi, %d(%%rbp)\n",off_new);

		         name_new  = (symtab_para->table[1]).name;
		         off_new      = (symtab_para->table[1]).offset;
		         size_new     = (symtab_para->table[1]).size;
		         if(size_new == 1){printf("\tmovl\t%%esi, %%eax\n");printf("\tmovb\t%%al, %d(%%rbp)\n",off_new);}
		         else if(size_new == 4)printf("\tmovl\t%%esi, %d(%%rbp)\n",off_new);
		         else printf("\tmovq\t%%rsi, %d(%%rbp)\n",off_new);
	 
		         name_new  = (symtab_para->table[2]).name;
		         off_new      = (symtab_para->table[2]).offset;
		         size_new     = (symtab_para->table[2]).size;
		         if(size_new == 1){printf("\tmovl\t%%edx, %%eax\n");printf("\tmovb\t%%al, %d(%%rbp)\n",off_new);}
		         else if(size_new == 4)printf("\tmovl\t%%edx, %d(%%rbp)\n",off_new);
		         else printf("\tmovq\t%%rdx, %d(%%rbp)\n",off_new);

		         name_new  = (symtab_para->table[3]).name;
		         off_new      = (symtab_para->table[3]).offset;
		         size_new     = (symtab_para->table[3]).size;
		         if(size_new == 1){printf("\tmovl\t%%ecx, %%eax\n");printf("\tmovb\t%%al, %d(%%rbp)\n",off_new);}
		         else if(size_new == 4)printf("\tmovl\t%%ecx, %d(%%rbp)\n",off_new);
		         else printf("\tmovq\t%%rcx, %d(%%rbp)\n",off_new);
		          
		      }    
		      printf("\tsubq\t$%d, %%rsp\n",size); //allocating data for local variables  
		 }
		break;
	case return_value_op:
		 //else if(temp_quad[i].op_code == return_value_op)   
		 {
		      if(label[i]!=NULL)printf("%s:\n",label[i]);
		                               
		     global_ind = (tem_quad_loc[i].arg1)->global_indication;
		     offs = (tem_quad_loc[i].arg1)->offset;
		                      
		      if(global_ind != 1) 
		      {
			  if((tem_quad_loc[i].arg1)->type->type == int_type)
		          {
		              printf("\tmovl\t%d(%%rbp), %%eax\n",offs);
		          }
		          if((tem_quad_loc[i].arg1)->type->type == char_type)
		          {
		              printf("\tmovsbl\t%d(%%rbp), %%eax\n",offs);
		          } 
		          else if((tem_quad_loc[i].arg1)->type->type == pointer_type)printf("\tmovq\t%d(%%rbp), %%rax\n",offs);
		      }   
		      else 
		      {  
		          if((tem_quad_loc[i].arg1)->type->type == int_type)
		          {
		              printf("\tmovl\t%s(%%rip), %%eax\n",(tem_quad_loc[i].arg1)->name);
		          }
		          if((tem_quad_loc[i].arg1)->type->type == char_type)
		          {
		              printf("\tmovsbl\t%s(%%rip), %%eax\n",(tem_quad_loc[i].arg1)->name);
		          } 
		          else if((tem_quad_loc[i].arg1)->type->type == pointer_type)printf("\tmovq\t%s(%%rip), %%rax\n",(tem_quad_loc[i].arg1)->name);    
		      } 
		      


		      printf("\tmovq\t%%rbp, %%rsp\n");
		      printf("\tpopq\t%%rbp\n");
		      printf("\tret\n");
		      printf("\t.size\t%s, .-%s\n",name,name);
		 }
	 	break;
	case return_op:
		 //else if(temp_quad[i].op_code == return_op)
		 {
		      if(label[i]!=NULL)printf("%s:\n",label[i]);
		                      
		      printf("\tnop\n");
		      printf("\tmovq\t%%rbp, %%rsp\n");
		      printf("\tpopq\t%%rbp\n");
		      printf("\tret\n");
		      printf("\t.size\t%s, .-%s\n",name,name);
		 }
		break;
     	}//ending brace for switch(){}
	i++;
     }
}




void print_unused()
{
   int i = 0;
   while(i<labels_unused.size())
   {
	printf("%s:\n",labels_unused[i]);
	i++;
   }
}


void logical_without_goto(row_loc_quad r,char *s,op_type op_code)
{
   if(s!=NULL)printf("%s:\n",s);
          
    int global_ind = (r.arg1)->global_indication;
    int offs = (r.arg1)->offset;
    if(global_ind != 1)printf("\tmovl\t%d(%%rbp), %%eax\n",offs);  
    else printf("\tmovl\t%s(%%rip), %%eax\n",(r.arg1)->name);
                                   
    global_ind = (r.arg2)->global_indication;
    offs = (r.arg2)->offset;
    if(global_ind == 1)printf("\tcmpl\t%s(%%rip), %%eax\n",(r.arg2)->name);
    else printf("\tcmpl\t%d(%%rbp), %%eax\n",offs);
    if(op_code == less_than_op)printf("\tsetl\t%%al\n");
    if(op_code == less_than_or_equal_to_op)printf("\tsetle\t%%al\n");
    if(op_code == greater_than_op)printf("\tsetg\t%%al\n");
    if(op_code == greater_than_or_equal_to_op)printf("\tsetge\t%%al\n");
    if(op_code == equal_to_op)printf("\tsete\t%%al\n");
    if(op_code == not_equal_to_op)printf("\tsetne\t%%al\n");
    printf("\tmovzbl\t%%al, %%eax\n");
                                      
    global_ind = (r.res)->global_indication;
    offs = (r.res)->offset;
    if(global_ind != 1)printf("\tmovl\t%%eax, %d(%%rbp)\n",offs);
    else printf("\tmovl\t%%eax, %s(%%rip)\n",(r.res)->name);
}

void optimise(symbol_table *t )
{
	int i= 0;
	while(i<global_optimize)
	{
		lone_array[i].res = 0;
	}
	if(t!=NULL)
	{
		t->table[global_optimize].nested_symbol_table = NULL;
	}
	return;
}



void logical_with_goto(row_of_quad r1,row_loc_quad r,char *s,op_type op_code)
{
   if(s!=NULL)printf("%s:\n",s);
          
   int global_ind = (r.arg1)->global_indication;
   int offs = (r.arg1)->offset;                     
   if(global_ind != 1)printf("\tmovl\t%d(%%rbp), %%eax\n",offs);
   else printf("\tmovl\t%s(%%rip), %%eax\n",(r.arg1)->name);
     
   global_ind = (r.arg2)->global_indication;
   offs = (r.arg2)->offset;
   if(global_ind == 1)printf("\tcmpl\t%s(%%rip), %%eax\n",(r.arg2)->name);
   else printf("\tcmpl\t%d(%%rbp), %%eax\n",offs);
   if(op_code == less_than_gop)printf("\tjl\t%s\n",label[atoi(r1.res)]);
   if(op_code == less_than_or_equal_to_gop)printf("\tjle\t%s\n",label[atoi(r1.res)]);
   if(op_code == greater_than_gop)printf("\tjg\t%s\n",label[atoi(r1.res)]);
   if(op_code == greater_than_or_equal_to_gop)printf("\tjge\t%s\n",label[atoi(r1.res)]);
   if(op_code == equal_to_gop)printf("\tje\t%s\n",label[atoi(r1.res)]);
   if(op_code == not_equal_to_gop)printf("\tjne\t%s\n",label[atoi(r1.res)]);
}

void print_parameter(row_loc_quad r,row_of_quad r1,char *regis,char* regis1)
{
  int global_ind = (r.arg1)->global_indication;
  int offs = (r.arg1)->offset; 

  if((r.arg1)->size == -1)printf("\tmovl\t$%s, %s\n",r1.arg1,regis1);
                        
   else if((r.arg1)->type->type == array_type)
   {
       if(global_ind == 1)printf("\tleaq\t%s(%%rip), %s\n",(r.arg1)->name,regis);
       else printf("\tleaq\t%d(%%rbp), %s\n",offs,regis);
   }
                       
   else if((r.arg1)->type->type == pointer_type)
   { 
       if(global_ind == 1)printf("\tmovq\t%s(%%rip), %s\n",(r.arg1)->name,regis);
       else printf("\tmovq\t%d(%%rbp), %s\n",offs,regis);
   }
   
   else if((r.arg1)->type->type == char_type)
   { 
       if(global_ind == 1)printf("\tmovsbl\t%s(%%rip), %s\n",(r.arg1)->name,regis1);
       else printf("\tmovsbl\t%d(%%rbp), %s\n",offs,regis1);
   }
 
   else
   {
       if(global_ind == 1)printf("\tmovl\t%s(%%rip), %s\n",(r.arg1)->name,regis1);
       else printf("\tmovl\t%d(%%rbp), %s\n",offs,regis1);
   }
}


/* Global variables */
type_expression *global_type = 0;
int w;
state flag;
symbol_table *global = 0;
symbol_table *current = 0;
symbol_table * temporary = 0;							
int line_number = 0;
int next_instr = 0;
row_of_quad *quad_array = 0;
row_loc_quad *quad_array_loc = 0;
char* name_of_pointer = 0;
vector<op_type> operators;
int count_of_star = 0;
row_of_quad * lone_array ;
int global_optimize = -1; 
int right_or_left = 0;
int is_left = 0;
char **newstrings = 0;
char **label = 0;
int newstrings_count = 0;
int temp_count = 0;
FILE* fp = 0;
vector<char*> labels_unused;


//main function
int main(int argc, char** arg)
{
  flag.p = 0;
  flag.q = 0;
  flag.c = 0;
  flag.a = 0;
  int i = 0;
  global = create_new_table();
  current = global;
  quad_array = new row_of_quad[MAX_SIZE];
  lone_array = new row_of_quad[MAX_SIZE];
  quad_array_loc = new row_loc_quad[MAX_SIZE];
  newstrings = new char*[MAX_SIZE];
  for(i = 0; i<MAX_SIZE;i++)newstrings[i] = 0;
  label = new char*[MAX_SIZE];
  for(i = 0; i<MAX_SIZE;i++)label[i] = 0;
  global_symbol_table_add();

  printf("THE PARSER RULES ARE\n");
  printf("********************************************************************************************************************\n");
  printf("********************************************************************************************************************\n");
  int x = yyparse();
  printf("THIS IS THE END OF PARSING\n");
  printf("********************************************************************************************************************\n");
  printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  int j;
  reduce_quads();
  for(i = 0;i<=global->last_index;++i)
  {
      if(((global->table[i]).type)->type == function_type)
      {
         string s((global->table[i]).name);
         s = s + " SYMBOL TABLE";
         (global->table[i]).name_of_nested_symbol_table = convert2char_star(s); 
         

      }
  }      
  cleanup(0);
  print_all_tables(global);
  adding_quad();
  printf("THE THREE ADDRESS CODES ARE AS FOLLOWS : \n");
  printf("------------------------------------------------------------------------------------------------------------------\n");
  print_all_quads();
  upgrad_quads();
  string s = arg[1];
  optimise(0);
  
  string name_of_dots_file = "ass6_14CS10062_test" + s + ".s";
  string name_of_asm_file = "ass6_14CS10062_test"+s +".asm";
  string tempo_name = "ass6_14CS10062_test"+ s + ".c";
  string tempo2_name = "ass6_14CS10062_test" + s;
  const char * charstar_name_of_dots_file = name_of_dots_file.c_str();
  const char * charstar_name_of_asm_file = name_of_asm_file.c_str();
  const char * cnam = tempo_name.c_str();

  

  update_pointer_size(); 
  symbol_table_update();
  
  printf("updated symbol table is\n");
  printf("-----------------------------------------------------------------------------------------------------------------\n");
  
  print_all_tables(global);
  convert_goto2_label();
  //printf("I am here\n");

  freopen(charstar_name_of_dots_file , "w", stdout);
  
  printf("\t.file\t\"%s\"\n",cnam);

  string_literal_print();
  print_global_information();  
  target_translator();
  print_unused();  
  fclose(stdout);

  FILE *fp = fopen(charstar_name_of_dots_file, "r");
  FILE *fp2 = fopen(charstar_name_of_asm_file, "w");
  char fil_a;
  do 
  {
      fil_a = fgetc(fp);
      fputc(fil_a, fp2);
   } while (fil_a != EOF);

  string command = "gcc -c -m64 "+name_of_dots_file;
  system(command.c_str());
  command = "gcc "+tempo2_name+".o -L. -lass2_14CS10062 -o "+ tempo2_name + ".out";
  system(command.c_str());

  fclose(fp);
  fclose(fp2);

  return 0;
}







