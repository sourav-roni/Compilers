/*
Name : Sourav Pal
Roll No.: 14CS10062
Assignment No.: 6
Date : 10/11/2016
*/
# include "ass6_14CS10062_translator.h"
# include "y.tab.h"
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <iostream>
#include <vector>
#include <iomanip>
#include <string>
extern int yyparse();
extern int yydebug;

using namespace std;

/*implementing all global functions defined in header file*/

//function for converting any arithmetic expresion to boolean type required for comparisons
void convert2bool(expr *e) 
{
	
	if(e->type->type == bool_type)
	{
		return;
	}
	else
	{
		e->falselist = makelist(next_instr);
                e->truelist = makelist(next_instr +1 );
		char *temp1 = strdup((e->location)->name);
		char *temp2 = convert2char_star("0");
		row_of_quad truequad(temp1,temp2,0,equal_to_gop);
                row_loc_quad truequad_loc(e->location,0,0);
		add(truequad,truequad_loc);
		row_of_quad falsequad(0,0,0,goto_op);
                row_loc_quad falsequad_loc(0,0,0);
		add(falsequad,falsequad_loc);
	}
}

//function for implementing the printing of all quad
void print_all_quads() 
{
	row_of_quad * temp;
	temp = &quad_array[0];
	int j = 0;
	while(temp!=&quad_array[next_instr])
	{
		temp->print_quad(j);
		j++;
		temp++;
	} 
}

//this function adds the quad passed by reference to global array of quads quad_array
void add(row_of_quad &x, row_loc_quad &y)  
{
   //printf("###Adding new quad ...\n");
   quad_array[next_instr] = x;
   quad_array_loc[next_instr] = y;
   next_instr++;
}


//function to create a new symbol table and pass a pointer to the new symbol table
symbol_table *create_new_table() 
{										
	return (new symbol_table(MAX_SIZE));
}

//function used to fill gotos
void backpatch(vector<int>* p, int number) 
{
	int j = 0;
    if(p)
    {
        while(j<p->size())
        {
        	int index = p->at(j);
        	char * name = convert2char_star(number);
        	quad_array[index].res = name;
        	j++;
        }
    }
}

//function used to store the inintial value stored in an expression
string get_initial_value(void *vt, type_expression *t) 
{       
	char str[10];
       if(vt)
       {
          switch(t->type)
          {
          	case int_type:
          		sprintf(str,"%d",*((int*)vt));
             		break;
          	case double_type:
          		sprintf(str,"%lf",*((double*)vt));
             		break;
          	case char_type:
          		sprintf(str,"%c",*((char*)vt));
              		break;
          }
	  string s1(str);
          return s1;
       }	
       else;
       {
           string s1("nil");
           return s1;
       }
}

//function to print the value of any expression
void print_type_expression(type_expression *t) 
{
    cout<<'|'<<setw(10);
     int count = 0;
     while(t)
	{
		switch(t->type)
		{
			case int_type:
				cout<<"int ";
				break;
			case double_type:
				cout<<"double ";
				break;
			case char_type:
				cout<<"char ";
				break;
			case void_type:
				cout<<"void ";
				break;
			case bool_type:
				cout<<"bool ";
				break;
			case array_type:
				cout<<"array ";
				break;
			case pointer_type:
				cout<<"pointer ";
				cout<<"(";
            	++count;
				break;
			case function_type:
				cout<<"function ";
				break;
		}
		if(t->number!=NULL)
        {
           cout<<"(";
           cout<<(*(t->number));
           cout<<",";
           ++count;
        }
		t = t->next;
	}
    while(count)
    {
        cout<<")";
        count--;
    }     
}


//function used to generate new expression
type_expression *new_expression(symbol_type t, int value) 
{
	type_expression * temporary_type_expression = new type_expression;
	temporary_type_expression->type = t;
	if(t != array_type)
		{
			temporary_type_expression->number = 0;
		}
	else 
		{
			temporary_type_expression->number = new int(value);
		}
	temporary_type_expression->next = NULL;
	return temporary_type_expression;
}

//this function merges two expression and returns the merged expressions
type_expression *merge_expressions(type_expression *expression1, type_expression *expression2) 
{
  
	if(expression1 == NULL && expression2 == NULL)
    {
        return NULL;
    }
  else if(expression1!= NULL && expression2 == NULL)
    {
        return expression1;
    }
  else if(expression1 == NULL && expression2!= NULL)
    {
        return expression2;
    }
  else
    {
        type_expression * temp = expression1;
        while(temp->next!=NULL)
          {
              temp = temp->next;
          }
        temp->next = expression2;
        return expression1;
    }
}

//function used to build a nese list containing only one index
vector<int> *makelist(int index) 
{
	vector<int>* new_list = new vector<int>(1,index);
	return new_list;
}

//function used to meerge two lists and return a pointer to the merged lists
vector<int> *mergelist(vector<int> *p1, vector<int> *p2)
{	
	if(p1 == NULL && p2 == NULL)
	{
		return NULL;
	}
    else if(p1!= NULL && p2 == NULL)
    {
    	return p1;
    }
    else if(p1 == NULL && p2!= NULL)
    {
    	return p2;
    }
    else
    {
        (*p1).insert( (*p1).end(), (*p2).begin(), (*p2).end() );
        return p1;
    }
}

//funtion used for type checking
int typecheck(type_expression *expression1, type_expression *expression2) 
{	
	type_expression * temporary1 = expression1;
    type_expression * temporary2 = expression2;
    while(temporary1!= NULL && temporary2!= NULL)
    {
        if(temporary1->type == temporary2->type)
        {
            temporary1 = temporary1->next;
            temporary2 = temporary2->next;
        }
        else 
        {
            return 0;
        }
    }
    return 1;    
}

//this is used to merge two parameter lists
vector<row_of_symbol_table*> *merge_parameter_list(vector<row_of_symbol_table*>* l1, vector<row_of_symbol_table*>* l2)
{ 
	if(l1 == NULL && l2 == NULL)
	{
		return NULL;
	}
    else if(l1!= NULL && l2 == NULL)
   	{
   		return l1;
   	}
    else if(l1 == NULL && l2!= NULL)
   	{
   		return l2;
   	}
    else
    {
  	    (*l1).insert( (*l1).end(), (*l2).begin(), (*l2).end() );
    }
	return l1;
}

//this is used to get the width of any expression
int width_of(type_expression *t) 
{
	
	if(t==NULL)
    {
    	return 0;
    }
    int width = 1;
    while(t!=NULL)
    {
    	switch(t->type)
    	{
    		case array_type:
    			width = width * (*(t->number));
    			//t = t->next;
    			break;
    		case char_type:
    			width = width * SIZE_OF_CHAR;
    			//t = t->next;
    			break;
    		case int_type:
    			width = width * SIZE_OF_INT;
    			//t = t->next;
    			break;
    		case double_type:
    			width = width * SIZE_OF_DOUBLE;
    			//t = t->next;
    			break;
    		case pointer_type:
    			width = width * 8;    		//changed from last assignment
    			break;
    	}
    	if(t->type==pointer_type)
    	{
    		t = NULL;
    	}
	else
	{
		t = t->next;
	}
    }
    return width;
}

		
//function returns a newly build parameter list
vector<row_of_symbol_table*> *make_parameter_list(row_of_symbol_table *index) 
{
	vector<row_of_symbol_table*>* temp_vec = new vector<row_of_symbol_table*>(1,index);
	return temp_vec;
}

//function used for type conversion
void convert_type(expr &e3,expr &e1, expr &e2,op_type op_code)
{ 
   row_of_symbol_table *temporary1, *temporary2; 
   if((e1.type)->type == char_type && (e2.type)->type == int_type)
   {
	 temporary1 = current->gentemp(int_type);
	 char *arg1 = new char[100];
	 sprintf(arg1,"char_to_integer(%s)",(e1.location)->name);
	 char *res = strdup(temporary1->name);
	 row_of_quad x(arg1,0,res,assign_op);
	 row_loc_quad xx(e1.location,0,temporary1);
	 add(x,xx);
	  			
         temporary2 = current->gentemp(int_type);
	 arg1 = strdup(temporary1->name);
	 char *arg2 = strdup((e2.location)->name);
         char *str = (char *)malloc(100*sizeof(char));
	 strcpy(str, arg2);
	 res = strdup(temporary2->name);
	 row_of_quad y(arg1,arg2,res,op_code);
	 row_loc_quad yy(temporary1,e2.location,temporary2);
	 add(y,yy);
         e3.type = e2.type;
    }
   
   else if((e1.type)->type == int_type && (e2.type)->type == double_type)
   {
	 temporary1 = current->gentemp(double_type);
	 char *arg1 = new char[100];
	 sprintf(arg1,"integer_to_double(%s)",(e1.location)->name);
	 char *res = strdup(temporary1->name);
	 row_of_quad x(arg1,0,res,assign_op);
	 row_loc_quad xx(e1.location,0,temporary1);
	 add(x,xx);
	  			
         temporary2 = current->gentemp(double_type);
	 arg1 = strdup(temporary1->name);
	 char *arg2 = strdup((e2.location)->name);
	 char *str = (char *)malloc(100*sizeof(char));
	 strcpy(str, arg2);
	 res = strdup(temporary2->name);
	 row_of_quad y(arg1,arg2,res,op_code);
	 row_loc_quad yy(temporary1,e2.location,temporary2);
	 add(y,yy);
         e3.type = e2.type;
   }
  else if((e1.type)->type == int_type && (e2.type)->type == char_type)
   {
	 temporary1 = current->gentemp(int_type);
	 char *arg1 = new char[100];
	 sprintf(arg1,"char_to_integer(%s)",(e2.location)->name);
	 char *res = strdup(temporary1->name);
	 row_of_quad x(arg1,0,res,assign_op);
	 row_loc_quad xx(e2.location,0,temporary1);
	 add(x,xx);
	  			
         temporary2 = current->gentemp(int_type);
	 arg1 = strdup((e1.location)->name);
	 char *arg2 = strdup(temporary1->name);
	 char *str = (char *)malloc(100*sizeof(char));
	 strcpy(str, arg2);
	 res = strdup(temporary2->name);
	 row_of_quad y(arg1,arg2,res,op_code);
	 row_loc_quad yy(temporary1,e1.location,temporary2);
	 add(y,yy);
         e3.type = e1.type;
   } 
  
   else if((e1.type)->type == double_type && (e2.type)->type == int_type)
   {
	 temporary1 = current->gentemp(double_type);
	 char *arg1 = new char[100];
	 sprintf(arg1,"integer_to_double(%s)",(e2.location)->name);
	 char *res = strdup(temporary1->name);
	 row_of_quad x(arg1,0,res,assign_op);
	 row_loc_quad xx(e2.location,0,temporary1);
	 add(x,xx);
	  			
         temporary2 = current->gentemp(double_type);
	 arg1 = strdup((e1.location)->name);
	 char *arg2 = strdup(temporary1->name);
	 char *str = (char *)malloc(100*sizeof(char));
	 strcpy(str, arg2);
	 res = strdup(temporary2->name);
	 row_of_quad y(arg1,arg2,res,op_code);
	 row_loc_quad yy(temporary1,e1.location,temporary2);
	 add(y,yy);
         e3.type = e1.type;
    }
   
    e3.location = temporary2;
}

//converts double type to char *
char* convert2char_star(double d)
{ 
	char *str = new char[15];
	sprintf(str, "%lf", d);
	return str;
}


//for printing all tables 
void print_all_tables(symbol_table *t)
{ 
    int i;
    if(t == global)
    {
        printf("GLOBAL SYMBOL TABLE : \n");
        printf("----------------------\n");
        cout<<'|'<< setw(10)<<"NAME"<<'|'<<setw(10)<<"TYPE";
        cout<<'|'<<setw(10)<<"SIZE"<<'|'<<setw(10)<<"OFFSET"<<'|'<<setw(10)<<"VALUE";
        cout<<'|'<<setw(10)<<"NESTED TABLE"<<endl;
        cout<<'|'<< setw(10)<<"----"<<'|'<<setw(10)<<"----";
        cout<<'|'<<setw(10)<<"----"<<'|'<<setw(10)<<"------"<<'|'<<setw(10)<<"--------";
        cout<<'|'<<setw(10)<<"------------"<<endl;
        t->print_table();
    }
    for(i=0;i<=t->last_index;i++)
    {
  	if((t->table[i]).nested_symbol_table)
        {
           printf("%s SYMBOL TABLE :  \n",(t->table[i]).name);
           printf("---------------------\n");
           cout<<'|'<< setw(10)<<"NAME"<<'|'<<setw(10)<<"TYPE";
           cout<<'|'<<setw(10)<<"SIZE"<<'|'<<setw(10)<<"OFFSET"<<'|'<<setw(10)<<"VALUE";
           cout<<'|'<<setw(10)<<"NESTED TABLE"<<endl;
           cout<<'|'<< setw(10)<<"----"<<'|'<<setw(10)<<"----";
           cout<<'|'<<setw(10)<<"----"<<'|'<<setw(10)<<"------"<<'|'<<setw(10)<<"--------";
           cout<<'|'<<setw(10)<<"------------"<<endl;
  	   ((t->table[i]).nested_symbol_table)->print_table();
           print_all_tables((t->table[i]).nested_symbol_table);
  	}
    }
}

//function converts char to char *
char* convert2char_star(char c)
{ 
	char *str = new char[15];
	sprintf(str, "%c", c);
	return str;
}

//function used fro tyoe conversion of arrays
void convert_type_array(expr &e1,expr &e2,expr &e3)
{ 
    cout<<"NAME e1>>>>>>>>>>>>>>>>>>"<<e1.location->name<<endl;
    cout<<"NAME e2>>>>>>>>>>>>>>>>>>>>>>>>"<<e2.location->name<<endl;
    row_of_symbol_table *temporary1;
    if((e1.type)->type == char_type && (e2.type)->type == int_type)
    {
	 temporary1 = current->gentemp(char_type);
	 char *arg1 = new char[100];
	 sprintf(arg1,"integer_to_char(%s)",(e2.location)->name);
	 char *res = strdup(temporary1->name);
	 row_of_quad x(arg1,0,res,assign_op);
	 row_loc_quad xx(e2.location,0,temporary1);
	 add(x,xx);
         if(e1.loc_temp)
         {
	   char *arg1 = strdup((e1.array)->name);
	   char *arg2 = strdup((e1.loc_temp)->name);
	   char *str = (char *)malloc(100*sizeof(char));
	   strcpy(str, arg2);
           char *res = strdup((temporary1)->name);
           row_of_quad x(arg1,arg2,res,left_brace_op);
	   row_loc_quad xx(e1.array,e1.loc_temp,e2.location);
	   add(x,xx);
         }
         else 
         {
	    char *arg1 = strdup((temporary1)->name);
	    char *res = strdup((e1.location)->name);
	    char *str = (char *)malloc(100*sizeof(char));
	    strcpy(str, arg1);
	    row_of_quad x(arg1,0,res,assign_op);
	    row_loc_quad xx(e2.location,0,e1.location);
	    add(x,xx);   
         }
    }
   
    else if((e1.type)->type == int_type && (e2.type)->type == double_type)
    {
	 temporary1 = current->gentemp(int_type);
	 char *arg1 = new char[100];
	 sprintf(arg1,"double_to_integer(%s)",(e2.location)->name);
	 char *res = strdup(temporary1->name);
	 row_of_quad x(arg1,0,res,assign_op);
	 row_loc_quad xx(e2.location,0,temporary1);
	 add(x,xx);
         if(e1.loc_temp)
        {
	   char *arg1 = strdup((e1.array)->name);
	   char *arg2 = strdup((e1.loc_temp)->name);
	   char *str = (char *)malloc(100*sizeof(char));
	   strcpy(str, arg2);
           char *res = strdup((temporary1)->name);
           row_of_quad x(arg1,arg2,res,left_brace_op);
	   row_loc_quad xx(e1.array,e1.loc_temp,e2.location);
	   add(x,xx);
       }
       else 
       {
	  char *arg1 = strdup((temporary1)->name);
	  char *str = (char *)malloc(100*sizeof(char));
	  strcpy(str, arg1);
	  char *res = strdup((e1.location)->name);
	  row_of_quad x(arg1,0,res,assign_op);
	  row_loc_quad xx(e2.location,0,e1.location);
	  add(x,xx);
       }
    }

    else if((e1.type)->type == int_type && (e2.type)->type == char_type)
    {
	   temporary1 = current->gentemp(char_type);
	   char *arg1 = new char[100];
	   sprintf(arg1,"integer_to_char(%s)",(e1.location)->name);
	   char *res = strdup(temporary1->name);
	   row_of_quad x(arg1,0,res,assign_op);
	   row_loc_quad xx(e1.location,0,temporary1);
	   add(x,xx);
           if(e1.loc_temp)
           {
	      	char *arg1 = strdup((e1.array)->name);
	      	char *arg2 = strdup((e1.loc_temp)->name);
		char *str = (char *)malloc(100*sizeof(char));
	 	strcpy(str, arg2);
               char *res = strdup((temporary1)->name);
              row_of_quad x(arg1,arg2,res,left_brace_op);
	      row_loc_quad xx(e1.array,e1.loc_temp,e2.location);
	      add(x,xx);
            }
           else
           {
	     char *arg1 = strdup((temporary1)->name);
	     char *str = (char *)malloc(100*sizeof(char));
	     strcpy(str, arg1);
	     char *res = strdup((e1.location)->name);
	     row_of_quad x(arg1,0,res,assign_op);
	     row_loc_quad xx(e2.location,0,e1.location);
	     add(x,xx);
           }
    }
 
    else if((e1.type)->type == double_type && (e2.type)->type == int_type)
    {
         temporary1 = current->gentemp(int_type);
	 char *arg1 = new char[100];
	 sprintf(arg1,"double_to_integer(%s)",(e1.location)->name);
	 char *res = strdup(temporary1->name);
	 row_of_quad x(arg1,0,res,assign_op);
	 row_loc_quad xx(e1.location,0,temporary1);
	 add(x,xx);
         if(e1.loc_temp)
         {
	   char *arg1 = strdup((e1.array)->name);
	   char *arg2 = strdup((e1.loc_temp)->name);
	   char *str = (char *)malloc(100*sizeof(char));
	   strcpy(str, arg2);
           char *res = strdup((temporary1)->name);
           row_of_quad x(arg1,arg2,res,left_brace_op);
	   row_loc_quad xx(e1.array,e1.loc_temp,e2.location);
	   add(x,xx);
         }
         else 
         {
	    char *arg1 = strdup((temporary1)->name);
	    char *str = (char *)malloc(100*sizeof(char));
	    strcpy(str, arg1);
	    char *res = strdup((e1.location)->name);
	    row_of_quad x(arg1,0,res,assign_op);
	    row_loc_quad xx(e2.location,0,e1.location);
	    add(x,xx); 
         }
    } 
}

//function for converting string to char *
char* convert2char_star(string s)
{ 
     char *str = new char[s.length() + 1];
     strcpy(str, s.c_str());
     return str;

}

//function to craeate a structure of type body
body create(int i, int j, double k)
{
        body temp;
	temp.one = i;
	temp.two = j;
	temp.three = k;
 	return temp;
}

//funxtion for printing only on the basis of op_code
void print_operation(expr &e3,expr &e1,expr &e2,op_type op_code)
{
   if(typecheck(e1.type, e2.type))
   { 
      e3.location = current->gentemp((e1.type)->type);
      char *arg1 = strdup((e1.location)->name);
      char *arg2 = strdup((e2.location)->name);
      char *res = strdup((e3.location)->name);
      row_of_quad x(arg1,arg2,res,op_code);
      row_loc_quad xx(e1.location,e2.location,e3.location);
      add(x,xx);
      e3.type = e1.type;
    }
}

//fill up function
int fillup(int i)
{
	return i*i;
}

//function used to evaluate logical expresions
void logical_operation_evaluation(expr &e3,expr &e1,expr &e2,op_type op_code1,op_type op_code2)
{ 
    e3.truelist = makelist(next_instr); 
    char *arg1 = strdup((e1.location)->name);
    char *arg2 = strdup((e2.location)->name);
    row_of_quad x(arg1,arg2,0,op_code1);
    row_loc_quad xx(e1.location,e2.location,0);
    add(x,xx);
	  	
    e3.falselist = makelist(next_instr);
    row_of_quad y(0,0,0,op_code2); 
    row_loc_quad yy(0,0,0); 
    add(y,yy);
    
    e3.type = new_expression(bool_type,-1);
}

//helper function fro printing type expression
void type_expression::printit()
{
	if(number)
	{
		printf("%d\t",type);
		this->next->printit();
	}
	return;
}

//function that converts integer to char *
char* convert2char_star(int a)
{ 
	char *str = new char[15];
	sprintf(str, "%d", a);
	return str;
}

//search function
int search(int * x, int n)
{
	int ret=0;
	int i;
	for(i =0 ; i< n; i++)
	{
		if(global->table[i].name)
		{
			ret = 1;
			break;
		}
	}
	return ret;
}

//search function
int search(attribute * att, char *x)
{
	if(att)
	{	
		if(strcmp(x,att->name)==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}


/* Implementation of row_of_symbol_table */

//constructor of row_of_symbol_table
row_of_symbol_table::row_of_symbol_table(char *name1,type_expression *type1,int size1,int offset1,void *initial_value1,symbol_table *nested,char* name2, int ind)
{ 
    name = name1;
    type = type1;
    size = size1;
    offset = offset1;
    initial_value = initial_value1;
    nested_symbol_table = nested;
    name_of_nested_symbol_table = name2;
    global_indication = ind;
} 

 //used for printing row
void row_of_symbol_table::print_row()
{
    cout<<'|'<< setw(10)<<this->name;
    print_type_expression(this->type);  
    cout<<'|'<<setw(10)<<(this->size)<<'|'<<setw(10)<<(this->offset)<<'|'<<setw(10)<<get_initial_value(this->initial_value,this->type);
    if(this->nested_symbol_table == NULL)cout<<'|'<<setw(10)<<"nil"<<endl;
    else  cout<<'|'<<setw(10)<<(this->name_of_nested_symbol_table)<<endl;
}

/* Implementation of symbol_table */

//constructor of symbol table class
symbol_table::symbol_table(int no_of_rows)
{
	(this->table) = new row_of_symbol_table[no_of_rows];
	 last_index = -1;
         length_of_table = 0;
}

row_of_symbol_table *symbol_table::gentemp_cmplx(type_expression *temp)
{
	type_expression *ti = duplicate_tree(temp);
	int siz = width_of(ti);
	char *s = new char[10];
	sprintf(s,"t%d",temp_count);
	temp_count++;
	row_of_symbol_table x(s,ti,siz,-1,0,0);
	this->add(x);
	return (table + last_index);
}

type_expression *duplicate_tree(type_expression *temp)
{
	if(!temp) return 0;
	type_expression *tu;
	if(temp->type == array_type)
		tu = new_expression(array_type,*(temp->number));
	else
		tu = new_expression(temp->type,-1);
	tu->next = duplicate_tree(temp->next);
	return tu;
}



//function checks whether there exists the row with name id_name, if so it returns a pointer to the row in the symbol table
row_of_symbol_table *symbol_table::lookup(char *id_name,int k)
{  
 	int i = 0;
    if(k == 0)
    {
       while(i<=last_index)
       {
       		if(strcmp(table[i].name,id_name)==0)
       		{
       			return (table+i);
       		}
		i++;
       }
       return 0;
    }
}

//helper function
void printed(symbol_table * t, int i)
{	
	if( i==1)
	{
		printf("\nSYMBOL TABLES ARE AS FOLLOWS:\n");
	}
	else if(i==0)
	{
		printf("\n################################################################################################\n");
	}
	return;
}
 

//function adds the row passed by reference to the symbol table
void symbol_table::add(row_of_symbol_table &row)
{ 
    if(last_index == -1)
    {
	   row.offset = 0;
    }
	else
	{
	    row.offset = table[last_index].size + table[last_index].offset;
    }
    last_index++;
	length_of_table++;
	table[last_index] = row; 
}

//member function for printing the symbol table
void symbol_table::print_table()
{													
	int i;
	for(i=0;i<= this->last_index;i++)
        {
	
		table[i].print_row();
		cout<<endl;
	}
}

//function generates new temporary and inserts it into the symbol table
row_of_symbol_table *symbol_table::gentemp(symbol_type type)
{ 
	static int temporary_count = 0;
    type_expression * temp = new_expression(type,-1);
	char *str = new char[10];
	sprintf(str,"t%03d",temporary_count);
	temporary_count++;
	int size = 0;
    switch(type)
    {
    	case int_type:
    		size = SIZE_OF_INT;
    		break;
    	case char_type:
    		size = SIZE_OF_CHAR;
    		break;
    	case double_type:
    		size = SIZE_OF_DOUBLE;
    		break;
    	case pointer_type:
    		size = SIZE_OF_POINTER;
    		break;
    }
    row_of_symbol_table x(str,temp,size,-1,0,0);
	this->add(x);
	return (table + last_index);
}

/* Implementation of row_of_quad */

//constructor of row_of_quad class
row_of_quad::row_of_quad(char *arg11,char *arg21,char *res1, op_type op_code1)
{ 
   arg1 = arg11; 
   arg2 = arg21;
   res =  res1;
   op_code = op_code1;
}

//function for updating quad
void row_of_quad::update(char * one,char * two,char * three, op_type op1)
{
	arg1 = one;
	arg2 = two;
	res  = three;
	op_code = op1;
	return;
}

row_loc_quad::row_loc_quad(row_of_symbol_table* arg11,row_of_symbol_table* arg21,row_of_symbol_table* res1)
{
   arg1 = arg11;
   arg2 = arg21;
   res = res1;
}

//function for printing the quads based on op_code
void row_of_quad::print_quad(int line_number)
{ 
	   switch(op_code)
      {
      	case addition_op:
      		printf("%d -> %s = %s + %s\n",line_number,this->res,this->arg1,this->arg2);
      		break;
      	case subtraction_op:
      		printf("%d -> %s = %s - %s\n",line_number,this->res,this->arg1,this->arg2);
      		break;
      	case multiplication_op:
      		printf("%d -> %s = %s * %s\n",line_number,this->res,this->arg1,this->arg2);
      		break;
      	case division_op:
      		printf("%d -> %s = %s / %s\n",line_number,this->res,this->arg1,this->arg2);
      		break;
      	case mod_op:
      		printf("%d -> %s = %s %% %s\n",line_number,this->res,this->arg1,this->arg2);
      		break;
      	case assign_op:
      		printf("%d -> %s = %s\n",line_number,this->res,this->arg1);
      		break;
      	case shift_left_op:
      		printf("%d -> %s = %s << %s\n",line_number,this->res,this->arg1,this->arg2);
      		break;
      	case left_brace_op:
      		printf("%d -> %s[%s] = %s\n",line_number,this->arg1,this->arg2,this->res);
      		break;
      	case shift_right_op:
      		printf("%d -> %s = %s >> %s\n",line_number,this->res,this->arg1,this->arg2);
      		break;
      	case right_brace_op:
      		printf("%d -> %s = %s[%s]\n",line_number,this->res,this->arg1,this->arg2);
      		break;
    	case less_than_op:
    		printf("%d -> %s = %s < %s\n",line_number,this->res,this->arg1,this->arg2);
    		break;
    	case less_than_gop:
    		printf("%d -> if %s < %s goto %s\n",line_number,this->arg1,this->arg2,this->res);
    		break;
    	case less_than_or_equal_to_op:
    		printf("%d -> %s = %s <= %s\n",line_number,this->res,this->arg1,this->arg2);
    		break;
    	case less_than_or_equal_to_gop:
    		printf("%d -> if %s <= %s goto %s\n",line_number,this->arg1,this->arg2,this->res);
    		break;
    	case greater_than_op:
    		printf("%d -> %s = %s > %s\n",line_number,this->res,this->arg1,this->arg2);
    		break;
    	case greater_than_gop:
    		printf("%d -> if %s > %s goto %s\n",line_number,this->arg1,this->arg2,this->res);
    		break;
    	case greater_than_or_equal_to_op:
    		printf("%d -> %s = %s >= %s\n",line_number,this->res,this->arg1,this->arg2);
    		break;
    	case greater_than_or_equal_to_gop:
    		printf("%d -> if %s >= %s goto %s\n",line_number,this->arg1,this->arg2,this->res);
    		break;
    	case equal_to_op:
    		printf("%d -> %s = %s == %s\n",line_number,this->res,this->arg1,this->arg2);
    		break;
    	case equal_to_gop:
    		printf("%d -> if %s == %s goto %s\n",line_number,this->arg1,this->arg2,this->res);
    		break;
    	case not_equal_to_op:
    		printf("%d -> %s = %s != %s\n",line_number,this->res,this->arg1,this->arg2);
    		break;
    	case not_equal_to_gop:
    		printf("%d -> if %s != %s goto %s\n",line_number,this->arg1,this->arg2,this->res);
    		break;
    	case if_yes_goto_op:
    		printf("%d -> if %s goto %s\n",line_number,this->arg1,this->res);
    		break;
    	case if_no_goto_op:
    		printf("%d -> if !%s goto %s\n",line_number,this->arg1,this->res);
    		break;
    	case bitwise_and_op:
    		printf("%d -> %s = %s & %s\n",line_number,this->res,this->arg1,this->arg2);
    		break;   
   		case bitwise_or_op:
   			printf("%d -> %s = %s | %s\n",line_number,this->res,this->arg1,this->arg2);
   			break;
   		case bitwise_xor_op:
   			printf("%d -> %s = %s ^ %s\n",line_number,this->res,this->arg1,this->arg2);
   			break;
   		case bitwise_not_op:
   			printf("%d -> %s = ~%s\n",line_number,this->res,this->arg1);
   			break;
   		case logical_and_op:
   			printf("%d -> %s = %s && %s\n",line_number,this->res,this->arg1,this->arg2);
   			break;
   		case logical_or_op:
   			printf("%d -> %s = %s || %s\n",line_number,this->res,this->arg1,this->arg2);
   			break;
    	case unary_plus_op:
    		printf("%d -> %s = %s\n",line_number,this->res,this->arg1);
    		break;
    	case unary_minus_op:
    		printf("%d -> %s = - %s\n",line_number,this->res,this->arg1);
    		break;
    	case unary_star_op:
    		printf("%d -> %s = * %s\n",line_number,this->res,this->arg1);
    		break;
    	case unary_address_op:
    		printf("%d -> %s = & %s\n",line_number,this->res,this->arg1);
    		break;
    	case unary_negation_op:
    		printf("%d -> %s = !%s\n",line_number,this->res,this->arg1);
    		break;
	case pointer_star_op:
		printf("%d -> *%s = %s\n",line_number,this->res,this->arg1);
		break;
    	case no_op:
    		printf("%d -> ................. \n",line_number);
    		break;
    	case call_op:
    		printf("%d -> call %s, %s\n",line_number,this->arg1,this->arg2);
    		break;
	case call_value_op:
		printf("%d -> %s = call %s, %s\n",line_number,this->res,this->arg1,this->arg2);
		break;
    	case goto_op:
    		 if(this->res == NULL)
		 {
		      string sss = "0";
		      this->res = convert2char_star(sss);
		      printf("%d -> goto %s\n",line_number,this->res);
		 } 
	         else printf("%d -> goto %s\n",line_number,this->res);
    		break;
    	case param_op:
    		printf("%d -> param %s\n",line_number,this->arg1);
    		break;
    	case return_op:
    		printf("%d -> return\n",line_number);
    		break;
    	case return_value_op:
    		printf("%d -> return %s\n",line_number,this->arg1);
    		break;
    	case function_op:
    		{
	          printf("*************************************\n"); 
	          printf("%d -> %s  - FUNCTION \n",line_number,arg1);
	          printf("*************************************\n");
     		}
    		break;
      }
}

