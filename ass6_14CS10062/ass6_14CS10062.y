/*
Name : Sourav Pal
Roll No.: 14CS10062
Assignment No.: 6
Date : 10/11/2016
*/
%{
#include <stdio.h>
#include <iostream>
#include <vector>
extern int yylex();
#include "ass6_14CS10062_translator.h"
#include <string.h>
void yyerror(const char* s);
using namespace std;
%}

//defining a union of different data types consisiting even user defined structures for attriburtes 
//of various terminals and non terminals
%union
{
  int int_val;
  float float_val;
  char char_val;
  char * str_val;
  char* enum_val;
  struct attribute atr_val;
  struct expr expr_val;
  vector<int>* N_val;
  vector<row_of_symbol_table*> *param_val;
  struct initial_value init_val;
  op_type op_val;
  int instr;
}

//defining tokens for terminals
%token AUTO_KEYWORD;
%token BREAK_KEYWORD;
%token CASE_KEYWORD;
%token CHAR_KEYWORD;
%token CONST_KEYWORD;
%token CONTINUE_KEYWORD;
%token DEFAULT_KEYWORD;
%token DO_KEYWORD;
%token DOUBLE_KEYWORD;
%token ELSE_KEYWORD;
%token ENUM_KEYWORD;
%token EXTERN_KEYWORD;
%token FLOAT_KEYWORD;
%token FOR_KEYWORD;
%token GOTO_KEYWORD;
%token IF_KEYWORD;
%token INLINE_KEYWORD;
%token INT_KEYWORD;
%token LONG_KEYWORD;
%token REGISTER_KEYWORD;
%token RESTRICT_KEYWORD;
%token RETURN_KEYWORD;
%token SHORT_KEYWORD;
%token SIGNED_KEYWORD;
%token SIZEOF_KEYWORD;
%token STATIC_KEYWORD;
%token STRUCT_KEYWORD;
%token SWITCH_KEYWORD;
%token TYPEDEF_KEYWORD;
%token UNION_KEYWORD;
%token UNSIGNED_KEYWORD;
%token VOID_KEYWORD;
%token VOLATILE_KEYWORD;
%token WHILE_KEYWORD;
%token _BOOL_KEYWORD;
%token _COMPLEX_KEYWORD;
%token _IMAGINARY_KEYWORD

%token <atr_val>IDENTIFIER 		//the attribute has information about name, width, type and also location in the symbol table
%token <enum_val>ENUMERATION_CONSTANT   //the attribute is a simple char* to hold the value
%token <int_val>INTEGER_CONSTANT        //the attribute is an integer to store the value of the token
%token <float_val>FLOATING_CONSTANT	//the attribute is a float to store the value of the token
%token <char_val>CHAR_CONSTANT		//the attribute is a char to store the value of the token
%token <str_val>STRING_LITERAL     	//the attribute is a char * to store the value of the token

%token LEFT_SQUARE_BRACE
%token RIGHT_SQUARE_BRACE
%token LEFT_ROUND_BRACE
%token RIGHT_ROUND_BRACE;
%token LEFT_CURLY_BRACE;
%token RIGHT_CURLY_BRACE;
%token PERIOD;

%token POINTS_TO
%token PLUS_PLUS;
%token MINUS_MINUS;
%token AMPERSAND;
%token MULTIPLICATION;
%token PLUS;
%token MINUS;
%token TILDE;
%token EXCLIMATION;
%token FORWARD_SLASH;
%token PERCENTAGE;

%token LEFT_SHIFT
%token RIGHT_SHIFT
%token LESS_THAN;
%token GREATER_THAN;
%token LESS_THAN_EQUAL;
%token GREATER_THAN_EQUAL;
%token EQUAL_EQUAL;
%token NOT_EQUAL;

%token CARET;
%token BITWISE_OR;
%token LOGICAL_AND
%token LOGICAL_OR
%token QUESTION_MARK;
%token COLON;
%token SEMICOLON_TERMINATOR;
%token ELIPSES
%token EQUAL

%token MULTIPLICATION_EQUAL
%token SLASH_EQUAL
%token PERCENTAGE_EQUAL
%token PLUS_EQUAL
%token MINUS_EQUAL

%token LEFT_SHIFT_EQUAL
%token RIGHT_SHIFT_EQUAL
%token BITWISE_AND_EQUAL
%token BITWISE_NOT_EQUAL
%token BITWISE_OR_EQUAL
%token COMMA;
%token HASH;


%token SINGLE_LINE_COMMENT 
%token NEW_LINE


//Non-terminals used in expressions

//the attribute used is of type expr as deined in the translator.h file 
%type<expr_val> expression;
%type<expr_val> constant;
%type<expr_val> constant_expression;
%type<expr_val> assignment_expression;
%type<expr_val> conditional_expression;
%type<expr_val> unary_expression;
%type<expr_val> logical_OR_expression;
%type<expr_val> logical_AND_expression;
%type<expr_val> inclusive_OR_expression;
%type<expr_val> exclusive_OR_expression;
%type<expr_val> AND_expression;
%type<expr_val> equality_expression;
%type<expr_val> relational_expression;
%type<expr_val> shift_expression;
%type<expr_val> additive_expression;
%type<expr_val> multiplicative_expression;
%type<expr_val> cast_expression;
%type<expr_val> postfix_expression;
%type<expr_val> primary_expression;
%type<param_val> argument_expression_list;



//Non-terminals used in declarations
//attribute is of type attribute
%type<atr_val> declaration_specifiers;
%type<atr_val> type_specifier;
%type<atr_val> init_declarator;
%type<atr_val> init_declarator_list;
%type<atr_val> declarator;
%type<atr_val> direct_declarator;
%type<init_val> initializer;
%type<atr_val> parameter_declaration;
%type<atr_val> pointer;


//Non-terminals used in statements
//here also the attribute is of type expr
%type<expr_val> statement;
%type<expr_val> compound_statement;
%type<expr_val> block_item_list;
%type<expr_val> block_item;
%type<expr_val> expression_statement;
%type<expr_val> selection_statement;
%type<expr_val> iteration_statement;
%type<expr_val> jump_statement;


//Extra non terminals introduced as part of augmentation which are used for bacpatching, producing goto's etc.
%type<instr> M; // the attribute instr is an integer which has the index of the quad generated at M , M is a marker rule
%type<N_val> N; // the attribute N_val is a vector of integers, N is used as a fall-through guard
%type<op_val> unary_operator;

%nonassoc IF_FIRST;
%nonassoc ELSE_KEYWORD;

%start translation_unit;
%%

//statements

 statement:			labeled_statement {printf("statement ->labeled_statement \n");}|
				compound_statement {$$ = $1;printf("statement ->compound_statement\n");}|
				expression_statement {$$ = $1;printf("statement ->expression_statement \n");}|
				selection_statement {$$ = $1;printf("statement ->selection_statement \n");}|
				iteration_statement {$$ = $1;printf("statement ->iteration_statement \n");}|
				jump_statement	{$$ = $1;printf("statement ->jump_statement \n");}	
				;
 labeled_statement:		IDENTIFIER COLON statement {printf("labeled_statement ->IDENTIFIER COLON statement\n");}|
				CASE_KEYWORD constant_expression COLON statement 
                                {printf("labeled_statement ->CASE_KEYWORD constant_expression COLON statement   \n");}|
				DEFAULT_KEYWORD COLON statement {printf("labeled_statement ->DEFAULT_KEYWORD COLON statement \n");}
				;
 

 compound_statement:		LEFT_CURLY_BRACE RIGHT_CURLY_BRACE
                                {printf("compound_statement -> LEFT_CURLY_BRACE RIGHT_CURLY_BRACE\n");}|

                               LEFT_CURLY_BRACE block_item_list RIGHT_CURLY_BRACE{$$ = $2;printf("compound_statement->LEFT_CURLY_BRACE block_item_list RIGHT_CURLY_BRACE \n");}
				;
 
 
				;
 block_item_list:		block_item {$$ = $1;printf("block_item_list ->block_item \n");}|
				block_item_list M block_item 
                                {
                                  backpatch($1.nextlist,$2);
		                  $$ = $3;
                                  printf("block_item_list ->block_item_list M block_item  \n");
                                }
				;

 block_item:			declaration {printf("block_item ->declaration\n");}|
				statement {$$ = $1;printf("block_item ->statement\n");}
				;						

 expression_statement:	        SEMICOLON_TERMINATOR{printf("expression_statement -> SEMICOLON_TERMINATOR \n");} |   
                                
                                expression  SEMICOLON_TERMINATOR {$$ = $1;printf("expression_statement -> expression  SEMICOLON_TERMINATOR  \n");}
				;

 
 
 selection_statement:	        IF_KEYWORD LEFT_ROUND_BRACE expression N RIGHT_ROUND_BRACE M statement N 
                                {
                                    if(($3.type)->type != bool_type)
                                    {
                                        $$.nextlist = makelist(next_instr);
                                        row_of_quad x(0,0,0,goto_op);
                                        row_loc_quad xx(0,0,0);
                                        add(x,xx);
                                    }
       
                                    backpatch($4,next_instr);
	  	                    convert2bool(&$3);
	  	                    backpatch($3.truelist,$6);
                                    $$.nextlist = mergelist($$.nextlist,$7.nextlist);
                                    $$.nextlist = mergelist($$.nextlist,$8);
                                    $$.nextlist = mergelist($$.nextlist,$3.falselist);
                                    printf("selection_statement -> IF_KEYWORD LEFT_ROUND_BRACE expression N RIGHT_ROUND_BRACE M statement N \n");
                                }|
                                IF_KEYWORD LEFT_ROUND_BRACE expression N  RIGHT_ROUND_BRACE M  statement N  ELSE_KEYWORD M statement 
                                {
                                     
	  	                     if(($3.type)->type!=bool_type)
                                     {
	  		                  $$.nextlist = makelist(next_instr);
	  		                  row_of_quad x(0,0,0,goto_op);
	  		                  row_loc_quad xx(0,0,0);
	  		                  add(x,xx);
	  	                     }
	  	                     backpatch($4,next_instr);
	  	                     convert2bool(&$3);
	  	                     backpatch($3.truelist,$6);
	  	                     backpatch($3.falselist,$10);
                                     $$.nextlist = mergelist($$.nextlist,$7.nextlist);
                                     $$.nextlist = mergelist($$.nextlist,$8);
                                     $$.nextlist = mergelist($$.nextlist,$11.nextlist);
                                     printf("selection_statement ->IF_KEYWORD LEFT_ROUND_BRACE expression N  RIGHT_ROUND_BRACE M  statement N  ELSE_KEYWORD M statement  \n");
                                }|
				
                                SWITCH_KEYWORD LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement 
                                {printf(" selection_statement ->SWITCH_KEYWORD LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement \n");}
				;
 iteration_statement:	        WHILE_KEYWORD M LEFT_ROUND_BRACE expression N  RIGHT_ROUND_BRACE M  statement 
                                {
                                   char *res = convert2char_star($2);
	  	                   row_of_quad x(0,0,res,goto_op);
	  	                   row_loc_quad xx(0,0,0);
	  		           add(x,xx);
	  	                   backpatch($5,next_instr);
	  	                   convert2bool(&$4);
	  	                   backpatch($8.nextlist,$2);
	  	                   backpatch($4.truelist,$7);
	  	                   $$.nextlist = $4.falselist;
                                   printf("iteration_statement ->WHILE_KEYWORD M LEFT_ROUND_BRACE expression N  RIGHT_ROUND_BRACE M  statement  \n");
                                }|
				DO_KEYWORD M statement M WHILE_KEYWORD LEFT_ROUND_BRACE expression N RIGHT_ROUND_BRACE SEMICOLON_TERMINATOR 
                                {
                                   backpatch($8,next_instr);
	  	                   convert2bool(&$7);
	  	                   backpatch($7.truelist,$2);
	  	                   backpatch($3.nextlist,$4);
	  	                   $$.nextlist = $7.falselist;
                                   printf("iteration_statement ->DO_KEYWORD M statement M WHILE_KEYWORD LEFT_ROUND_BRACE expression N RIGHT_ROUND_BRACE SEMICOLON_TERMINATOR\n");
                                }|
				FOR_KEYWORD LEFT_ROUND_BRACE expression_statement M  expression_statement N   M expression N RIGHT_ROUND_BRACE M  statement 
                                {
                                   backpatch($9,$4);
	  	                   $12.nextlist = mergelist($12.nextlist,makelist(next_instr));
	  	                   row_of_quad x(0,0,0,goto_op);
	  	                   row_loc_quad xx(0,0,0);
	  		           add(x,xx);
	  	                   backpatch($12.nextlist,$7);
	  	                   backpatch($6,next_instr);
	  	                   convert2bool(&$5);
	  	                   backpatch($5.truelist,$11);
	  	                   $$.nextlist = $5.falselist;
                printf("iteration_statement->FOR_KEYWORD LEFT_ROUND_BRACE expression_statement M  expression_statement N   M expression N RIGHT_ROUND_BRACE M  statement \n");
                               }|

				FOR_KEYWORD LEFT_ROUND_BRACE declaration expression_statement  expression_statement RIGHT_ROUND_BRACE statement 
                               {
                     printf("iteration_statement->FOR_KEYWORD LEFT_ROUND_BRACE declaration expression_statement  expression_statement RIGHT_ROUND_BRACE statement \n");
                               }
		                ;

 jump_statement:	        GOTO_KEYWORD IDENTIFIER SEMICOLON_TERMINATOR {printf("jump_statement ->GOTO_KEYWORD IDENTIFIER SEMICOLON_TERMINATOR \n");}|
			        CONTINUE_KEYWORD SEMICOLON_TERMINATOR {printf("jump_statement ->CONTINUE_KEYWORD SEMICOLON_TERMINATOR \n");}|
				BREAK_KEYWORD SEMICOLON_TERMINATOR {printf("jump_statement ->BREAK_KEYWORD SEMICOLON_TERMINATOR \n");}|
                                RETURN_KEYWORD SEMICOLON_TERMINATOR
                                { 
                                  row_of_quad x(0,0,0,return_op);
	  	                  row_loc_quad xx(0,0,0);
	  		          add(x,xx);
                                  printf("jump_statement -> RETURN_KEYWORD SEMICOLON_TERMINATOR");

                                }|
				RETURN_KEYWORD expression SEMICOLON_TERMINATOR  
                                {
	  	                   row_of_quad x(strdup(($2.location)->name),0,0,return_value_op);
	  	                   row_loc_quad xx($2.location,0,0);
	  	                   add(x,xx);
                                   printf("jump_statement ->RETURN_KEYWORD expression SEMICOLON_TERMINATOR \n");
                                }
				;



//External definitions

 translation_unit:		external_declaration {printf("translation_unit -> external_declaration\n");}|
				translation_unit external_declaration {printf("translation_unit -> translation_unit external_declaration\n");}
				;

 external_declaration:	        function_definition {printf("external_declaration ->function_definition\n");}|
				declaration {printf("external_declaration ->function_definition\n");}
				;

 function_definition:	        declaration_specifiers declarator declaration_list compound_statement
                                {printf("function_definition -> declaration_specifiers declarator declaration_list compound_statement\n");}|

 
                               declaration_specifiers declarator F compound_statement 
                               {
				   if(global->lookup($2.name)!=0)
					{
						//printf(" ############ I WAS ALREADY PRESENT ##############3\n");
						current = global;
                                  		printf("function_definition->declaration_specifiers declarator F compound_statement\n");
					}
				   else if(global->lookup($2.name)==0)
					{
						//printf(" ############ I WAS NOT PRESENT BEFORE ##############3\n");
						//printf(" des.p = %d\n des.q = %d\n des.c = %d\n", des.p, des.q, des.c);
						//if(des.p == 1 && des.q == 0)
				                   {
			  		               type_expression *k = new_expression(($1.type)->type,-1);
			  		               row_of_symbol_table x(strdup("RETURN"),k,$1.width,-1,0,0);
			  		               temporary->add(x);
			  		               k = new_expression(function_type,-1);
			  		               row_of_symbol_table y($2.name,k,0,-1,0,temporary);
			  		               global->add(y);
						       //row_of_quad r($2.var,0,0,function_op);
		                    		       //add(r);
						       int i;
						       for(i = next_instr-1;i>=0;i--)
							{
								if(quad_array[i].op_code == function_op)
								{
									quad_array[i].arg1 = $2.name;
									break;
								}
							}
			  	                   }
			  	                   flag.p = 0;
			  	                   flag.q = 0;
			  	                   flag.c = 0;
				                   //printf("declaration -> declaration_specifiers init_declarator_list ';'\n");
				                  current = global;
				                  printf("function_definition->declaration_specifiers declarator F compound_statement\n");
					}
                               }
				;


 declaration_list:		declaration {printf("declaration_list ->declaration \n");}|
				declaration_list declaration {printf("declaration_list ->declaration_list declaration  \n");}
				;

// Expressions 

 expression :			assignment_expression {$$ = $1;printf("expression ->assignment_expression \n");}|
				expression COMMA assignment_expression {printf("expression ->expression COMMA assignment_expression\n");}
				;

constant_expression:	        conditional_expression {printf("constant_expression ->conditional_expression \n");}
			        ; 

assignment_expression:	        conditional_expression {$$ = $1;printf("assignment_expression ->conditional_expression \n");}|
				unary_expression assignment_operator assignment_expression 
                                {
				   if(is_left == 1)
                                     {
	  		                  char *arg1 = strdup(($3.location)->name);
		  	                  char *res = strdup(($1.location)->name);
		  	                  row_of_quad x(arg1,0,res,pointer_star_op);
                                          row_loc_quad xx($3.location,0,$1.location);
		  	                  add(x,xx);
	  	                     }
	  	                     else
                                     {
	  		                 if(!typecheck($1.type,$3.type))
                                         {
                                            convert_type_array($1,$3,$$);
                                         }
                                         else
                                         {
                                           if($1.loc_temp)
                                           {
		  		              char *arg1 = strdup(($1.array)->name);
		  		              char *arg2 = strdup(($1.loc_temp)->name);
		  		              char *res = strdup(($3.location)->name);
		  		              row_of_quad x(arg1,arg2,res,left_brace_op);
                                              row_loc_quad xx($1.array,$1.loc_temp,$3.location);
		  		              add(x,xx);
	            		           }
	  		                   else
                                           {
		  		              char *arg1 = strdup(($3.location)->name);
			  	              char *res = strdup(($1.location)->name);
			  	              row_of_quad x(arg1,0,res,assign_op);
                                              row_loc_quad xx($3.location,0,$1.location);
			  	              add(x,xx);
	  		                   }
                                         }
                                        }
                                        right_or_left = 1;
	  	                        is_left = 0;
	  	                        count_of_star = 0;
                                        printf("assignment_expression->unary_expression assignment_operator assignment_expression  \n");
                                }	
				;																																			

assignment_operator:	        EQUAL {right_or_left = 2;printf("assignment_operator -> EQUAL\n");}|
				MULTIPLICATION_EQUAL {printf("assignment_operator ->MULTIPLICATION_EQUAL \n");}|
				SLASH_EQUAL {printf("assignment_operator ->SLASH_EQUAL \n");}|
				PERCENTAGE_EQUAL {printf("assignment_operator ->PERCENTAGE_EQUAL \n");}|
				PLUS_EQUAL {printf("assignment_operator->PLUS_EQUAL \n");}|
				MINUS_EQUAL {printf("assignment_operator ->MINUS_EQUAL \n");}|
                                LEFT_SHIFT_EQUAL {printf("assignment_operator ->LEFT_SHIFT_EQUAL\n");}|
				RIGHT_SHIFT_EQUAL {printf("assignment_operator ->RIGHT_SHIFT_EQUAL \n");}|
                                BITWISE_AND_EQUAL {printf("assignment_operator->BITWISE_AND_EQUAL \n");}|
				BITWISE_NOT_EQUAL {printf("assignment_operator ->BITWISE_NOT_EQUAL  \n");}|
				BITWISE_OR_EQUAL {printf("assignment_operator ->BITWISE_OR_EQUAL \n");}
				
				;

conditional_expression:         logical_OR_expression {$$ = $1;printf("conditional_expression ->logical_OR_expression \n");}|
				logical_OR_expression N QUESTION_MARK M  expression N  COLON M  conditional_expression	 
                                {
                                    $$.location = current->gentemp(($5.type)->type);
	  	                    $$.type = $5.type;
	  	                    char *res = strdup(($$.location)->name);
	  	                    char *arg1 = strdup(($9.location)->name);
	  	                    row_of_quad x(arg1,0,res,assign_op);
	  	                    row_loc_quad xx($9.location,0,$$.location);
	  	                    add(x,xx);
                                  
                                    
	  	                    vector<int> *l = makelist(next_instr);
	  	                    row_of_quad y(0,0,0,goto_op);
	  	                    row_loc_quad yy(0,0,0);
	  	                    add(y,yy);
	  	                    backpatch($6,next_instr);

	  	                    res = strdup(($$.location)->name);
	  	                    arg1 = strdup(($5.location)->name);
	  	                    row_of_quad z(arg1,0,res,assign_op);
	  	                    row_loc_quad zz($5.location,0,$$.location);
	  	                    add(z,zz);

	  	                    l = mergelist(l,makelist(next_instr));
	  	                    row_of_quad a(0,0,0,goto_op);
	  	                    row_loc_quad aa(0,0,0);
	  	                    add(a,aa);

                                    backpatch($2,next_instr);
	  	                    convert2bool(&$1);
	  	                    backpatch($1.truelist,$4);
	  	                    backpatch($1.falselist,$8);
	  	                    backpatch(l,next_instr);
 
                                     printf("conditional_expression->logical_OR_expression N QUESTION_MARK M  expression N  COLON M  conditional_expression\n");
                                }
				;

logical_OR_expression:	        logical_AND_expression {$$ = $1;printf("logical_OR_expression->logical_AND_expression \n");}|
				logical_OR_expression LOGICAL_OR M logical_AND_expression 
                                {
                                    backpatch($1.falselist,$3);
	  	                    $$.truelist = mergelist($1.truelist,$4.truelist);
	  	                    $$.falselist = $4.falselist;
	  	                    $$.type = new_expression(bool_type,-1);
                                    printf("logical_OR_expression ->logical_OR_expression LOGICAL_OR M logical_AND_expression \n");
                                }
				;

logical_AND_expression:	        inclusive_OR_expression {$$ = $1;printf("logical_AND_expression ->inclusive_OR_expression  \n");}|
				logical_AND_expression LOGICAL_AND M inclusive_OR_expression 
                                {
                                    backpatch($1.truelist,$3);
	  	                    $$.falselist = mergelist($1.falselist, $4.falselist);
	  	                    $$.truelist = $4.truelist;
	  	                    $$.type = new_expression(bool_type,-1);
                                    printf("logical_AND_expression ->logical_AND_expression LOGICAL_AND M inclusive_OR_expression \n");
                                }
			        ;

inclusive_OR_expression:        exclusive_OR_expression {$$ = $1;printf("inclusive_OR_expression ->exclusive_OR_expression \n");}|
				inclusive_OR_expression BITWISE_OR exclusive_OR_expression 
                                {
                                   print_operation($$,$1,$3,bitwise_or_op);
                                   printf("inclusive_OR_expression ->inclusive_OR_expression BITWISE_OR exclusive_OR_expression\n");
                                }
				;

exclusive_OR_expression:        AND_expression {$$ = $1;printf("exclusive_OR_expression ->AND_expression\n");}|
				exclusive_OR_expression CARET AND_expression 
                                {
                                   print_operation($$,$1,$3,bitwise_xor_op);
                                   printf("exclusive_OR_expression ->exclusive_OR_expression CARET AND_expression \n");
                                }
				;

AND_expression :		equality_expression {$$ = $1;printf("AND_expression ->equality_expression\n");}|
				AND_expression AMPERSAND equality_expression 
                                {
                                    print_operation($$,$1,$3,bitwise_and_op);
                                    printf("AND_expression ->AND_expression AMPERSAND equality_expression \n");
                                }
				;

equality_expression:	        relational_expression {$$ = $1;printf("equality_expression->relational_expression\n");}|
				equality_expression EQUAL_EQUAL relational_expression 
                                {
                                    logical_operation_evaluation($$,$1,$3,equal_to_gop,goto_op);
                                    printf("equality_expression->equality_expression EQUAL_EQUAL relational_expression\n");
                                }|
				equality_expression NOT_EQUAL relational_expression 
                                {
                                    logical_operation_evaluation($$,$1,$3,not_equal_to_gop,goto_op);
                                    printf("equality_expression ->equality_expression NOT_EQUAL relational_expression\n");
                                }
				;

relational_expression:	        shift_expression {$$ = $1;printf("relational_expression-> shift_expression \n");}|
				relational_expression LESS_THAN shift_expression 
                                {
                                    logical_operation_evaluation($$,$1,$3,less_than_gop,goto_op);
                                    printf("relational_expression -> relational_expression LESS_THAN shift_expression  \n");
                                }|
				relational_expression GREATER_THAN shift_expression 
                                {
                                    logical_operation_evaluation($$,$1,$3,greater_than_gop,goto_op);
                                    printf("relational_expression ->relational_expression GREATER_THAN shift_expression\n");
                                }|
				relational_expression LESS_THAN_EQUAL shift_expression 
                                {
                                    logical_operation_evaluation($$,$1,$3,less_than_or_equal_to_gop,goto_op);
                                    printf("relational_expression ->relational_expression LESS_THAN_EQUAL shift_expression\n");
                                }|
				relational_expression GREATER_THAN_EQUAL shift_expression 
                                {
                                    logical_operation_evaluation($$,$1,$3,greater_than_or_equal_to_gop,goto_op);
                                    printf("relational_expression->relational_expression GREATER_THAN_EQUAL shift_expression\n");
                                }
				;

shift_expression:		additive_expression {$$ = $1;printf("shift_expression-> additive_expression\n");}|
				shift_expression LEFT_SHIFT additive_expression 
                                {
                                    print_operation($$,$1,$3,shift_left_op);
                                    printf("shift_expression-> shift_expression LEFT_SHIFT additive_expression  \n");
                                }|
				shift_expression RIGHT_SHIFT additive_expression 
                                {
                                    print_operation($$,$1,$3,shift_right_op);
                                    printf("shift_expression-> shift_expression RIGHT_SHIFT additive_expression \n");
                                }
				;

additive_expression :	        multiplicative_expression {$$ = $1;printf("additive_expression-> multiplicative_expression\n");}|
				additive_expression PLUS multiplicative_expression 
                                {
                                    cout<<"The additive has the name .."<<($1.location)->name<<endl;
                                    cout<<"The additive has the name .."<<($3.location)->name<<endl;
                                    if(typecheck($1.type, $3.type)==0)
                                    {
	  		             	convert_type($$,$1,$3,addition_op);   
	  	                    }
                                    else
                                    {
                                        print_operation($$,$1,$3,addition_op);
                                    }
                                    printf("additive_expression-> additive_expression PLUS multiplicative_expression \n");
                                }|
				additive_expression MINUS multiplicative_expression 
                                {
                                    if(typecheck($1.type, $3.type)==0)
                                    {
	  		             	convert_type($$,$1,$3,subtraction_op);   
	  	                    }
                                    else
                                    {
                                        print_operation($$,$1,$3,subtraction_op);
                                    }
                                    printf("additive_expression-> additive_expression MINUS multiplicative_expression \n");
                                }
				;

multiplicative_expression:	cast_expression {$$ = $1;printf("multiplicative_expression-> cast_expression\n");}|
				multiplicative_expression MULTIPLICATION cast_expression 
                                {
                                    if(typecheck($1.type, $3.type)==0)
                                    {
	  		             	convert_type($$,$1,$3,multiplication_op);   
	  	                    }
                                    else
                                    {
                                        print_operation($$,$1,$3,multiplication_op);
                                    }
                                    printf("multiplicative_expression-> multiplicative_expression MULTIPLICATION cast_expression\n");
                                }|
				multiplicative_expression FORWARD_SLASH cast_expression
                                {
                                    if(typecheck($1.type, $3.type)==0)
                                    {
	  		            	convert_type($$,$1,$3,division_op);    
	  	                    }
                                    else
                                    {
                                        print_operation($$,$1,$3,division_op);
                                    }
                                    printf("multiplicative_expression-> multiplicative_expression FORWARD_SLASH cast_expression\n");
                                }|
				multiplicative_expression PERCENTAGE cast_expression 
                                {
                                    if(typecheck($1.type, $3.type)==0)
                                    {
	  		           	convert_type($$,$1,$3,mod_op);     
	  	                    }
                                    else
                                    {
                                        print_operation($$,$1,$3,mod_op);
                                    }
                                    printf("multiplicative_expression-> multiplicative_expression PERCENTAGE cast_expression\n");
                                }
				;

cast_expression : 		unary_expression {$$ = $1;printf("cast_expression-> unary_expression\n");}|
				LEFT_ROUND_BRACE type_name RIGHT_ROUND_BRACE cast_expression {printf("cast_expression->LEFT_ROUND_BRACE type_name RIGHT_ROUND_BRACE cast_expression\n");}
				;

unary_operator	:		AMPERSAND {$$ = unary_address_op;printf("unary_operator-> AMPERSAND\n");}|
				MULTIPLICATION {
					$$ = unary_star_op;
					if(right_or_left == 1)
		                              {
		  		                is_left = 1;
		  	                      }
		  	                      count_of_star++;
					printf("unary_operator-> MULTIPLICATION\n");
				}|
				PLUS {$$ = unary_plus_op;printf("unary_operator-> PLUS\n");}|
				MINUS {$$ =  unary_minus_op;printf("unary_operator-> MINUS\n");}|
				TILDE {$$ = unary_negation_op;printf("unary_operator-> TILDE\n");}|
				EXCLIMATION {$$ = bitwise_not_op;printf("unary_operator-> EXCLIMATION\n");}
				;

unary_expression:		postfix_expression     
                                {
                                   $$ = $1;
	  	                   if($1.loc_temp!=NULL)
                                   {
	  		               $$.location = current->gentemp(($1.type)->type);
	  		               char *arg1 = strdup(($1.array)->name);
	  		               char *arg2 = strdup(($1.loc_temp)->name);
	  		               char *res = strdup(($$.location)->name);
	  		               row_of_quad x(arg1,arg2,res,right_brace_op);
	  		               row_loc_quad xx($1.location,$1.loc_temp,$$.location);
	  		               add(x,xx);
	  	                   }
                                   printf("unary_expression-> postfix_expression\n");
                                }|
				PLUS_PLUS unary_expression 
                                {
                                   $$.location = current->gentemp(($2.type)->type);
                                   row_of_symbol_table *mm = current->gentemp(int_type);
                                   
                                   char *arg1 = convert2char_star("1");
	  	                   char *res = strdup(mm->name);
	  	                   row_of_quad x(arg1,0,res,assign_op);
                                   row_loc_quad xx(0,0,mm);
	  	                   add(x,xx);

	  	                   arg1 = strdup(($2.location)->name);
	  	                   char *arg2 = strdup(mm->name);
	  	                   res = strdup(($2.location)->name);
	  	                   row_of_quad y(arg1,arg2,res,addition_op);
                                   row_loc_quad yy($2.location,mm,$2.location);
	  	                   add(y,yy);

	  	                   arg1 = strdup(($2.location)->name);
	  	                   res = strdup(($$.location)->name);
	  	                   row_of_quad z(arg1,0,res,assign_op);
                                   row_loc_quad zz($2.location,0,$$.location);
	  	                   add(z,zz);
	  	                   $$.type = $2.type;
                                   printf("unary_expression-> PLUS_PLUS unary_expression \n");
                                }|
				MINUS_MINUS unary_expression 
                                {
                                   $$.location = current->gentemp(($2.type)->type);
                                   row_of_symbol_table *mm = current->gentemp(int_type);
                                   
                                   char *arg1 = convert2char_star("1");
	  	                   char *res = strdup(mm->name);
	  	                   row_of_quad x(arg1,0,res,assign_op);
                                   row_loc_quad xx(0,0,mm);
	  	                   add(x,xx);

	  	                   arg1 = strdup(($2.location)->name);
	  	                   char *arg2 = strdup(mm->name);
	  	                   res = strdup(($2.location)->name);
	  	                   row_of_quad y(arg1,arg2,res,subtraction_op);
                                   row_loc_quad yy($2.location,mm,$2.location);
	  	                   add(y,yy);

	  	                   arg1 = strdup(($2.location)->name);
	  	                   res = strdup(($$.location)->name);
	  	                   row_of_quad z(arg1,0,res,assign_op);
                                   row_loc_quad zz($2.location,0,$$.location);
	  	                   add(z,zz);
	  	                   $$.type = $2.type;
                                   printf("unary_expression-> MINUS_MINUS unary_expression\n");
                                }|
				unary_operator cast_expression 
                                {
                                
                                     if(($1 == unary_star_op) && ((count_of_star > 1 && right_or_left == 1)||(right_or_left == 2)))
                                     {
	  		                 $$.location = current->gentemp_cmplx(($2.type)->next);
	  		                 char *arg1 = strdup(($2.location)->name);
		  	                 char *res = strdup(($$.location)->name);
		  	                 row_of_quad x(arg1,0,res,$1);
                                         row_loc_quad xx($2.location,0,$$.location);
		  	                 add(x,xx);
		  	                 $$.type = ($$.location)->type;
	  		                 count_of_star--;
	  	                     }
	  	                     else if($1 == unary_address_op)
                                     {
	  		                type_expression *tu = new_expression(pointer_type,-1);
	  		                tu->next = $2.type;
	  		                $$.location = current->gentemp_cmplx(tu);
	  		                char *arg1 = strdup(($2.location)->name);
		  	                char *res = strdup(($$.location)->name);
		  	                row_of_quad x(arg1,0,res,$1);
                                        row_loc_quad xx($2.location,0,$$.location);
		  	                add(x,xx);
		  	                $$.type = ($$.location)->type;
	  	                     }
	  	                     else if(!(count_of_star == 1 && right_or_left == 1))
                                     {
	  		                $$.location = current->gentemp(($2.type)->type);
	  		                char *arg1 = strdup(($2.location)->name);
		  	                char *res = strdup(($$.location)->name);
		  	                row_of_quad x(arg1,0,res,$1);
                                        row_loc_quad xx($2.location,0,$$.location);
		  	                add(x,xx);
		  	                $$.type = ($$.location)->type;
	  	                     }
	  	                     else $$ = $2;
                                   printf("unary_expression-> unary_operator cast_expression \n");
                                }|
				SIZEOF_KEYWORD unary_expression 
                                {printf("unary_expression-> SIZEOF_KEYWORD unary_expression\n");}|
				SIZEOF_KEYWORD LEFT_ROUND_BRACE type_name RIGHT_ROUND_BRACE 
                                {printf("unary_expression-> SIZEOF_KEYWORD LEFT_ROUND_BRACE type_name RIGHT_ROUND_BRACE\n");}
				;


argument_expression_list:       assignment_expression  //done
                                {
                                   $$ = make_parameter_list($1.location);
                                   printf("argument_expression_list-> assignment_expression\n");
                                }|
			        argument_expression_list COMMA assignment_expression 
                                {
                                    $$ = merge_parameter_list($1,make_parameter_list($3.location));
                                    printf("argument_expression_list-> argument_expression_list COMMA assignment_expression\n");
                                }
				;

postfix_expression :	        primary_expression //done
                                {
                                    $$ = $1;
                                    printf("postfix_expression-> primary_expression \n");
                                }|
				postfix_expression LEFT_SQUARE_BRACE expression RIGHT_SQUARE_BRACE 
                                {
                                    $$.array = $1.array;
	  	                    $$.type = ($1.type)->next;
                                    if($1.loc_temp==NULL)
                                    {
					$$.loc_temp = current->gentemp(int_type);
                                       row_of_symbol_table* mm = current->gentemp(int_type);
	  		               int n = width_of(($1.type)->next);

                                       char* arg1 = convert2char_star(n);
                                       char*res = strdup(mm->name);
                                       row_of_quad x(arg1,0,res,assign_op);
                                       row_loc_quad xx(0,0,mm);
                                       add(x,xx);
 
                                       res = strdup(($$.loc_temp)->name);
	  		               arg1 = strdup(($3.location)->name);
	  		               char *arg2 = strdup(mm->name);
	  		               
	  		               row_of_quad y(arg1,arg2,res,multiplication_op);
                                       row_loc_quad yy($3.location,mm,$$.loc_temp);
	  		               add(y,yy);
				    }
                                    else
                                    {
                                       row_of_symbol_table *temp = current->gentemp(int_type);
		  	               $$.loc_temp = current->gentemp(int_type);
                                       row_of_symbol_table *mm = current->gentemp(int_type);

		  	               int n = width_of($$.type);
                                       char *arg1 = convert2char_star(n);
                                       char * res = strdup(mm->name);
		  	               row_of_quad x(arg1,0,res,assign_op);
                                       row_loc_quad xx(0,0,mm);
                                       add(x,xx);
             
		  	               arg1 = strdup(($3.location)->name);
		  	               char *arg2 = strdup(mm->name);
		  	               res = strdup(temp->name);
		  	               row_of_quad y(arg1,arg2,res,multiplication_op);
                                       row_loc_quad yy($3.location,mm,temp);
		                       add(y,yy);

		  	               arg1 = strdup(($1.loc_temp)->name);
		  	               arg2 = strdup(temp->name);
		  	               res = strdup(($$.loc_temp)->name);
		  	               row_of_quad z(arg1,arg2,res,addition_op);
                                       row_loc_quad zz($1.loc_temp,temp,$$.loc_temp);
		  	               add(z,zz); 
                                    }
                                    
                                    printf("postfix_expression-> postfix_expression LEFT_SQUARE_BRACE expression RIGHT_SQUARE_BRACE\n");
                                }|
                                postfix_expression LEFT_ROUND_BRACE RIGHT_ROUND_BRACE
                                {
                                       int count = 0;
	  	                       row_of_symbol_table *t = global->lookup(($1.location)->name);
	  	                       $$.location = current->gentemp(((((t->nested_symbol_table)->table)[count]).type)->type);
                                       char *res;
	  	                       char *arg1 = strdup(($1.location)->name);
	  	                       char *arg2 = convert2char_star(count);
                                       if((($$.location)->type)->type == void_type)
                                       {
	  		                   res = 0;
                                           row_of_quad x(arg1,arg2,res,call_op);
                                           row_loc_quad xx($1.location,0,$$.location);
                                           add(x,xx);
	  	                       }
	  	                       else
                                       {
	  		                   res = strdup(($$.location)->name);
	  		                   row_of_quad x(arg1,arg2,res,call_value_op);
                                           row_loc_quad xx($1.location,0,$$.location);
                                           add(x,xx);
	  	                       } 
                                       
                                       $$.type = ($$.location)->type;
                                       printf("postfix_expression -> postfix_expression LEFT_ROUND_BRACE RIGHT_ROUND_BRACE\n");

                                }| 
				postfix_expression LEFT_ROUND_BRACE argument_expression_list RIGHT_ROUND_BRACE 
                                {
                                       vector<row_of_symbol_table *>* temp = $3;
	  	                       int count = 0;
                                       int i = 0;
                                       for(vector<row_of_symbol_table*>::iterator it = (*temp).begin() ; it != (*temp).end(); ++it)
                                       {
                                          char *arg1 = strdup((*it)->name);
                                          row_of_quad x(arg1,0,0,param_op);
                                          row_loc_quad xx(*it,0,0);
                                          add(x,xx);
	  		                  count++;
                                       }
	  	                       row_of_symbol_table *t = global->lookup(($1.location)->name);
	  	                       $$.location = current->gentemp(((((t->nested_symbol_table)->table)[count]).type)->type);
	  	                       char *res;
	  	                       char *arg1 = strdup(($1.location)->name);
	  	                       char *arg2 = convert2char_star(count);
                                       if((($$.location)->type)->type == void_type)
                                       {
	  		                   res = 0;
                                           row_of_quad x(arg1,arg2,res,call_op);
                                           row_loc_quad xx($1.location,0,$$.location);
                                           add(x,xx);
	  	                       }
	  	                       else
                                       {
	  		                   res = strdup(($$.location)->name);
	  		                   row_of_quad x(arg1,arg2,res,call_value_op);
                                           row_loc_quad xx($1.location,0,$$.location);
                                           add(x,xx);
	  	                       } 
                                       
                                      $$.type = ($$.location)->type;
                                   printf("postfix_expression-> postfix_expression LEFT_ROUND_BRACE argument_expression_list RIGHT_ROUND_BRACE\n");
                                }|
				postfix_expression PERIOD IDENTIFIER 
                                {printf("postfix_expression-> postfix_expression PERIOD IDENTIFIER \n");}|
				postfix_expression POINTS_TO IDENTIFIER 
                                {printf("postfix_expression-> postfix_expression POINTS_TO IDENTIFIER\n");}|
				postfix_expression PLUS_PLUS
                                {
                                    $$.location = current->gentemp(($1.type)->type);
	  	                    char *arg1 = strdup(($1.location)->name);
	  	                    char *res = strdup(($$.location)->name);
	  	                    row_of_quad x(arg1,0,res,assign_op);
                                    row_loc_quad xx($1.location,0,$$.location);
	  	                    add(x,xx);

                                    row_of_symbol_table* mm = current->gentemp(int_type);
                                    arg1 = convert2char_star("1");
                                    res= strdup(mm->name);
                                    row_of_quad y(arg1,0,res,assign_op);
                                    row_loc_quad yy(0,0,mm);
                                    add(y,yy);

	  	                    arg1 = strdup(($1.location)->name);
	  	                    char *arg2 = strdup(mm->name);
	  	                    res = strdup(($1.location)->name);
	  	                    row_of_quad z(arg1,arg2,res,addition_op);
                                    row_loc_quad zz($1.location,mm,$1.location);
	  	                    add(z,zz);
                                   
	  	                    $$.type = $1.type;
                                    printf("postfix_expression-> postfix_expression PLUS_PLUS \n");
                                }|
				postfix_expression MINUS_MINUS 
                                {
                                    $$.location = current->gentemp(($1.type)->type);
	  	                    char *arg1 = strdup(($1.location)->name);
	  	                    char *res = strdup(($$.location)->name);
	  	                    row_of_quad x(arg1,0,res,assign_op);
                                    row_loc_quad xx($1.location,0,$$.location);
	  	                    add(x,xx);

                                    row_of_symbol_table* mm = current->gentemp(int_type);
                                    arg1 = convert2char_star("1");
                                    res= strdup(mm->name);
                                    row_of_quad y(arg1,0,res,assign_op);
                                    row_loc_quad yy(0,0,mm);
                                    add(y,yy);

	  	                    arg1 = strdup(($1.location)->name);
	  	                    char *arg2 = strdup(mm->name);
	  	                    res = strdup(($1.location)->name);
	  	                    row_of_quad z(arg1,arg2,res,subtraction_op);
                                    row_loc_quad zz($1.location,mm,$1.location);
	  	                    add(z,zz);
                                   
	  	                    $$.type = $1.type;
                                    printf("postfix_expression-> postfix_expression MINUS_MINUS \n");
                                }|
				LEFT_ROUND_BRACE type_name RIGHT_ROUND_BRACE LEFT_CURLY_BRACE initializer_list RIGHT_CURLY_BRACE 
                                {printf("postfix_expression-> LEFT_ROUND_BRACE type_name RIGHT_ROUND_BRACE LEFT_CURLY_BRACE initializer_list RIGHT_CURLY_BRACE \n");}|
				LEFT_ROUND_BRACE type_name RIGHT_ROUND_BRACE LEFT_CURLY_BRACE initializer_list COMMA RIGHT_CURLY_BRACE 
                                {printf("postfix_expression-> LEFT_ROUND_BRACE type_name RIGHT_ROUND_BRACE LEFT_CURLY_BRACE initializer_list COMMA RIGHT_CURLY_BRACE\n");}
				;

primary_expression:		IDENTIFIER 
                                {   
                                   $1.location = current->lookup($1.name);
	  	                   if(!($1.location))$1.location = global->lookup($1.name);
                                   cout<<$1.name<<endl;
	  	                   $$.location = $1.location;  
                                   $$.array = $$.location;
	  	                   $$.loc_temp = 0;
	  	                   $$.type = ($1.location)->type;
                                   cout<<$$.type<<endl;
                                   printf("primary_expression-> IDENTIFIER \n");
                                }|
				constant 
                                {
                                    $$ = $1;
                                    printf("primary_expression-> constant \n");
                                }|
				STRING_LITERAL {
					   newstrings[newstrings_count] = strdup($1);
		  	                   char *temp = new char[10];
		  	                   sprintf(temp,".LFE%d",newstrings_count);
		  	                   newstrings_count++;
		  	                   $$.location = new row_of_symbol_table(temp);
					   printf("primary_expression-> STRING_LITERAL \n");
					
				}|
				LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE {$$ = $2;printf("primary_expression-> LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE \n");}
				;

constant :			INTEGER_CONSTANT  
                                {
                                     
                                     int *bb = (int*)malloc(sizeof(int));
                                     *bb = $1;
                                     $$.value.data = (void*)bb;
                                     $$.location = current->gentemp(int_type);
	  	                     $$.type = new_expression(int_type,-1);
	  	                     char *arg1 = convert2char_star($1);
	  	                     char *res = strdup(($$.location)->name);
	  	                     row_of_quad x(arg1,0,res,assign_op);
	  	                     row_loc_quad xx(0,0,$$.location);
	  	                     add(x,xx);
                                     printf("constant-> INTEGER_CONSTANT \n");
                                }|
				FLOATING_CONSTANT 
                                {
                                     double *dd = (double*)malloc(sizeof(double));
                                     *dd = $1;
                                     $$.value.data = (void*)dd;
                                     $$.location = current->gentemp(double_type);
	  	                     $$.type = new_expression(double_type,-1);
	  	                     char *arg1 = convert2char_star($1);
	  	                     char *res = strdup(($$.location)->name);
	  	                     row_of_quad x(arg1,0,res,assign_op);
	  	                     row_loc_quad xx(0,0,$$.location);
	  	                     add(x,xx);
                                     printf("constant->FLOATING_CONSTANT \n");
                                }|
				CHAR_CONSTANT 
                                {
                                     char *dd = (char*)malloc(sizeof(char));
                                     *dd = $1;
                                     $$.value.data = (void*)dd;
                                     $$.location = current->gentemp(char_type);
	  	                     $$.type = new_expression(char_type,-1);
	  	                     char *arg1 = convert2char_star($1);
	  	                     char *res = strdup(($$.location)->name);
	  	                     row_of_quad x(arg1,0,res,assign_op);
	  	                     row_loc_quad xx(0,0,$$.location);
	  	                     add(x,xx);
                                     printf("constant-> CHAR_CONSTANT \n");
                                }
				;

enumeration_constant:	        IDENTIFIER {printf("enumeration_constant->  IDENTIFIER \n");}
				;

M:                              /*This is an epsilon transition*/{$$ = next_instr;}
	                        ;
N:                              /*This is an epsilon transition*/{
		                  $$ = makelist(next_instr);
		                  row_of_quad x(0,0,0,goto_op);
		                  row_loc_quad xx(0,0,0);
		                  add(x,xx);
	                        }
	                        ;


//Declarations


 declaration:			declaration_specifiers SEMICOLON_TERMINATOR
	                        { printf("declaration -> declaration_specifiers SEMICOLON_TERMINATOR\n"); }|
	  
                                declaration_specifiers init_declarator_list SEMICOLON_TERMINATOR
	                        {
	  	                   if(flag.p == 1 && flag.q == 0)
                                   {
	  		               type_expression *k = new_expression(($1.type)->type,-1);
	  		               row_of_symbol_table x(strdup("RETURN"),k,$1.width,-1,0,0);
	  		               temporary->add(x);
	  		               k = new_expression(function_type,-1);
	  		               row_of_symbol_table y($2.name,k,0,-1,0,temporary);
	  		               global->add(y);
	  	                   }
	  	                   flag.p = 0;
	  	                   flag.q = 0;
	  	                   flag.c = 0;
                                   printf("declaration -> declaration_specifiers init_declarator_list SEMICOLON_TERMINATOR\n");
	                       }
	                       ;



 declaration_specifiers	: storage_class_specifier {printf("declaration_specifiers -> storage_class_specifier\n");}| 
           	          storage_class_specifier declaration_specifiers 
                          {printf("declaration_specifiers -> storage_class_specifier declaration_specifiers \n");}|
	                  type_specifier
	                  {
	  	              if(flag.p == 0 || flag.q == 0)
                              {
	  		         $$.type = $1.type;
	  		         $$.width = $1.width;
	  		         global_type = $$.type;
	  		         w = $$.width;
	  	              }
                              printf(" declaration_specifiers -> type_specifier\n");
	                  }|
	                  type_specifier declaration_specifiers 
                          { printf("declaration_specifiers -> type_specifier declaration_specifiers\n");}|
	                  type_qualifier 
                          {printf("declaration_specifiers -> type_qualifier\n");}|
	                  type_qualifier declaration_specifiers 
                          {printf("declaration_specifiers -> type_qualifier declaration_specifiers \n");}|
	                  function_specifier 
                          {printf("declaration_specifiers -> function_specifier\n");}|
	                  function_specifier declaration_specifiers 
                          {printf("declaration_specifiers -> function_specifier declaration_specifiers\n");}
	                  ;


init_declarator_list:	        init_declarator 
                                {
                                    if(flag.p == 1 && flag.q == 0)$$.name = $1.name;
                                    printf("init_declarator_list ->init_declarator \n");
                                }|
				init_declarator_list COMMA init_declarator 
                                {printf("init_declarator_list->init_declarator_list COMMA init_declarator  \n");}
				;

init_declarator:		declarator 
                                {
                                    
	  	                    if(flag.p == 0)
                                    {
	  		               type_expression *temp = new_expression(global_type->type,-1);
	  		               temp = merge_expressions($1.type,temp);
	  		               int temp_size;
	  		               if(temp->type == pointer_type)temp_size = SIZE_OF_POINTER;
	  		               else
                                       {
                                           if(global_type->type == int_type)temp_size = SIZE_OF_INT;
                                           else if(global_type->type == double_type)temp_size = SIZE_OF_DOUBLE;
                                           else if(global_type->type == char_type)temp_size = SIZE_OF_CHAR;      
		  		       }
	  		               temp_size = temp_size * $1.width;
	  		               row_of_symbol_table x($1.name,temp,temp_size,-1,0,0);
	  		               current->add(x);
	  	                    }
	  	                    else if(flag.p == 1 && flag.q == 0)
                                    {
	  		               $$.name = $1.name;
	  	                    }
                                    printf("init_declarator->declarator\n");
                                }|
				declarator EQUAL initializer 
                                {
				    //printf("flag. p =%d\n",flag.p);
                                    if(flag.p == 0)   // ### Here I have  ...
                                    {
	  		               type_expression *temp = new_expression(global_type->type,-1);
	  		               temp = merge_expressions($1.type,temp);
	  		               void *value;
	  		               int temp_size;
                                       if(global_type->type == int_type)
                                       {
                                          int *value1 = (int *)malloc(sizeof(int));
	  			          (*value1) = *((int*)$3.data); 	
	  			          value = (void *)value1;
	  				  temp_size = SIZE_OF_INT;
					
					char * tempchar = convert2char_star(*value1); 
					row_of_quad * temp;
					temp = &quad_array[next_instr-1];
					char * temp2;
					while(1)
					{
						if(strcmp(temp->arg1,tempchar)==0)
						
						{
						temp2 = temp->res;
						break;
						}
						temp--;
					} 					
					 row_of_quad xq(temp2,0,$1.name,assign_op);
					 row_loc_quad xqx(0,0,$1.location);
	  		                 add(xq,xqx);
		                    	 
                                       }
                                       else if(global_type->type == double_type)
                                       {
                                          double *value1 = (double *)malloc(sizeof(double));
	  			          (*value1) = *((double*)$3.data); 	
	  			          value = (void *)value1;
	  				  temp_size = SIZE_OF_DOUBLE;

					  char * tempchar = convert2char_star(*value1); 
					row_of_quad * temp;
					temp = &quad_array[next_instr-1];
					char * temp2;
					while(1)
					{
						if(strcmp(temp->arg1,tempchar)==0)
						
						{
						temp2 = temp->res;
						break;
						}
						temp--;
					} 					
					 row_of_quad xq(temp2,0,$1.name,assign_op);
		                    	 row_loc_quad xqx(0,0,$1.location);
	  		                 add(xq,xqx);
		                    	 
                                       }
                                       else if(global_type->type == char_type)
                                       {
                                          char *value1 = (char *)malloc(sizeof(char));
	  			          (*value1) = *((char*)$3.data); 	
	  			          value = (void *)value1;
	  				  temp_size = SIZE_OF_CHAR;

					 char * tempchar = convert2char_star(*value1); 
					row_of_quad * temp;
					temp = &quad_array[next_instr-1];
					char * temp2;
					while(1)
					{
						if(strcmp(temp->arg1,tempchar)==0)
						
						{
						temp2 = temp->res;
						break;
						}
						temp--;
					} 					
					 row_of_quad xq(temp2,0,$1.name,assign_op);
		                    	 row_loc_quad xqx(0,0,$1.location);
	  		                 add(xq,xqx);
		                    	 
                                       }
                                       else value = 0;
                                       temp_size = temp_size * $1.width;
	  		               row_of_symbol_table x($1.name,temp,temp_size,-1,value,0);
	  		               current->add(x);
	  				//printf ( "I  came here... \n");
	  		            }
	  		            
                                    printf("init_declarator ->declarator EQUAL initializer \n");
                                }
				;

storage_class_specifier: 	EXTERN_KEYWORD {printf("storage_class_specifier->EXTERN_KEYWORD \n");}|
				STATIC_KEYWORD {printf("storage_class_specifier->STATIC_KEYWORD\n");}|
				AUTO_KEYWORD  {printf("storage_class_specifier->AUTO_KEYWORD \n");}|
				REGISTER_KEYWORD {printf("storage_class_specifier->REGISTER_KEYWORD \n");}
				;
type_specifier:			VOID_KEYWORD 
                                {
                                    if(flag.p == 0 || flag.q == 0)
                                    {
	  		               $$.type = new_expression(void_type,-1);
	  	    	               $$.width = 0;
	  	                    }
                                    printf("type_specifier ->VOID_KEYWORD  \n");
                                }|
				CHAR_KEYWORD 
                                {
                                     if(flag.p == 0 || flag.q == 0)
                                     {
	  		               $$.type = new_expression(char_type,-1);
	  	    	               $$.width = SIZE_OF_CHAR;
	  	                     }
                                     printf("type_specifier ->CHAR_KEYWORD \n");
                                }|
				SHORT_KEYWORD {printf("type_specifier ->SHORT_KEYWORD  \n");}|
				INT_KEYWORD 
                                {
                                     if(flag.p == 0 || flag.q == 0)
                                     {
                                       $$.type = new_expression(int_type,-1);
	  	    	               $$.width = SIZE_OF_INT;
	  	                     }
                                     printf("type_specifier ->INT_KEYWORD \n");
                                }|
				LONG_KEYWORD {printf("type_specifier->LONG_KEYWORD\n");}|
				FLOAT_KEYWORD {printf("type_specifier ->FLOAT_KEYWORD\n");}|
				DOUBLE_KEYWORD 
                                {
                                     if(flag.p == 0 || flag.q == 0)
                                     {
	  		               $$.type = new_expression(double_type,-1);
	  	    	               $$.width = SIZE_OF_DOUBLE;
	  	                     }
                                    printf("type_specifier ->DOUBLE_KEYWORD \n");
                                }|
				SIGNED_KEYWORD {printf("type_specifier->SIGNED_KEYWORD \n");}|
				UNSIGNED_KEYWORD {printf("type_specifier ->UNSIGNED_KEYWORD  \n");}|
				_BOOL_KEYWORD {printf("type_specifier ->_BOOL_KEYWORD \n");}|
				_COMPLEX_KEYWORD {printf("type_specifier->_COMPLEX_KEYWORD  \n");}|
				_IMAGINARY_KEYWORD {printf("type_specifier ->_IMAGINARY_KEYWORD \n");}|
				enum_specifier {printf("type_specifier ->enum_specifier\n");}
				;			

specifier_qualifier_list:        type_specifier specifier_qualifier_list
	                         { printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list\n");}|
	                         type_specifier
	                         {printf("specifier_qualifier_list -> type_specifier\n");}|
	                         type_qualifier specifier_qualifier_list
	                         {printf("specifier_qualifier_list -> type_qualifier specifier_qualifier_list\n");}|
	                         type_qualifier
	                         {printf("specifier_qualifier_list -> type_qualifier\n");}
	                         ;	


enum_specifier:			ENUM_KEYWORD identifier_opt LEFT_CURLY_BRACE enumerator_list RIGHT_CURLY_BRACE {printf("enum_specifier ->ENUM_KEYWORD identifier_opt LEFT_CURLY_BRACE enumerator_list RIGHT_CURLY_BRACE\n");}|
			        ENUM_KEYWORD identifier_opt LEFT_CURLY_BRACE enumerator_list COMMA RIGHT_CURLY_BRACE {printf("ENUM_KEYWORD identifier_opt LEFT_CURLY_BRACE enumerator_list COMMA RIGHT_CURLY_BRACE  \n");}| 						
                                ENUM_KEYWORD IDENTIFIER {printf("enum_specifier->ENUM_KEYWORD IDENTIFIER  \n");}
				;

identifier_opt:			IDENTIFIER {printf("identifier_opt ->IDENTIFIER  \n");}|
				/*This is epsilon transition*/ {printf("identifier_opt ->epsilon transition  \n");}
				;

enumerator_list:		enumerator {printf("enumerator_list ->enumerator  \n");}|
				enumerator_list COMMA enumerator {printf("enumerator_list ->enumerator_list COMMA enumerator\n");}
				;

enumerator:			enumeration_constant {printf("enumerator->enumeration_constant  \n");}|
				enumeration_constant EQUAL constant_expression {printf("enumerator ->enumeration_constant EQUAL constant_expression \n");}
				;

type_qualifier:			CONST_KEYWORD {printf("type_qualifier ->CONST_KEYWORD  \n");}|
				RESTRICT_KEYWORD {printf("type_qualifier ->RESTRICT_KEYWORD  \n");}|
				VOLATILE_KEYWORD {printf("type_qualifier->VOLATILE_KEYWORD  \n");}
				;

function_specifier:		INLINE_KEYWORD {printf("function_specifier->INLINE_KEYWORD   \n");}
				;

declarator :			pointer direct_declarator 
                                {
                                     if(flag.p == 0 || flag.q == 0)
                                     {
	  		                 $$.type = merge_expressions($2.type,$1.type);
	  		                 $$.width = $2.width;
	  		                 $$.name = $2.name;
	  		             }
                                     printf("declarator ->pointer direct_declarator \n");
                                }|
                                direct_declarator
	                        {
	  		            $$.type = $1.type;
	  		            $$.name = $1.name;
	  		            $$.width = $1.width;
                                    printf("declarator -> direct_declarator\n");
	                        }
				;


direct_declarator:		IDENTIFIER 
                                {
                                    
                                    if(flag.p == 0 || flag.q == 0)
                                    {
	  		               $$.name = $1.name;
		  	               $$.type = 0;
		  	               $$.width = 1;
		  	               if(flag.c == 0)
                                       {
                                           row_of_symbol_table *t = current->lookup($1.name);  
			  	           if(t)
                                           {
			  		     
                                              flag.q = 1;
			  		      temporary = (t->nested_symbol_table);	
                                               
			  	           }												
			  	           else flag.q = 0; 
			  	           flag.c++;	
		  	               }
	  	                    }	
                                    printf("direct_declarator ->IDENTIFIER \n");
                                }|
				
                                LEFT_ROUND_BRACE declarator RIGHT_ROUND_BRACE {printf("direct_declarator ->LEFT_ROUND_BRACE declarator RIGHT_ROUND_BRACE \n");}|
				
                              direct_declarator LEFT_SQUARE_BRACE type_qualifier_list assignment_expression RIGHT_SQUARE_BRACE 
                            {printf("direct_declarator -direct_declarator LEFT_SQUARE_BRACE type_qualifier_list assignment_expression RIGHT_SQUARE_BRACE   \n");}|
                              
                               direct_declarator LEFT_SQUARE_BRACE assignment_expression RIGHT_SQUARE_BRACE
	                       {
	  	                   if(flag.p == 0 || flag.q == 0)
                                   {
	  		              type_expression *temp = new_expression(array_type,*((int*)$3.value.data));
	  		              $$.type = merge_expressions($1.type,temp);
	  		              $$.width = $1.width * (*((int*)$3.value.data));
	  		              $$.name = $1.name;
	  	                   }
                                   printf("direct_declarator -> direct_declarator LEFT_SQUARE_BRACE assignment_expression RIGHT_SQUARE_BRACE\n");
	                       }|    																							
				direct_declarator LEFT_SQUARE_BRACE type_qualifier_list RIGHT_SQUARE_BRACE
	                        { printf("direct_declarator -> direct_declarator LEFT_SQUARE_BRACE type_qualifier_list RIGHT_SQUARE_BRACE \n"); }|
	  
                                direct_declarator LEFT_SQUARE_BRACE RIGHT_SQUARE_BRACE
	                        {
	  	                   if(flag.p == 0 || flag.q == 0)
                                   {
	  		              $$.name = $1.name;
		  	              $$.type = $1.type;
		  	              $$.width = $1.width;
	  	                   }
                                   printf("direct_declarator -> direct_declarator LEFT_SQUARE_BRACE RIGHT_SQUARE_BRACE\n");
	                        }|
	  
                                 direct_declarator LEFT_SQUARE_BRACE STATIC_KEYWORD type_qualifier_list assignment_expression RIGHT_SQUARE_BRACE
	           {printf("direct_declarator -> direct_declarator LEFT_SQUARE_BRACE STATIC_KEYWORD type_qualifier_list assignment_expression RIGHT_SQUARE_BRACE\n"); }|
	  
                                 direct_declarator LEFT_SQUARE_BRACE STATIC_KEYWORD assignment_expression RIGHT_SQUARE_BRACE
                                 {printf("direct_declarator -> direct_declarator LEFT_SQUARE_BRACE STATIC_KEYWORD assignment_expression RIGHT_SQUARE_BRACE\n");}|
	
                                 direct_declarator LEFT_SQUARE_BRACE type_qualifier_list STATIC_KEYWORD assignment_expression RIGHT_SQUARE_BRACE
	           {printf("direct_declarator -> direct_declarator LEFT_SQUARE_BRACE type_qualifier_list STATIC_KEYWORD assignment_expression RIGHT_SQUARE_BRACE\n");}|
	
                                 direct_declarator LEFT_SQUARE_BRACE type_qualifier_list MULTIPLICATION RIGHT_SQUARE_BRACE
	                        {printf("direct_declarator -> direct_declarator LEFT_SQUARE_BRACE type_qualifier_list MULTIPLICATION RIGHT_SQUARE_BRACE\n");}|
	
                                direct_declarator LEFT_SQUARE_BRACE MULTIPLICATION RIGHT_SQUARE_BRACE
	                        {printf("direct_declarator -> direct_declarator LEFT_SQUARE_BRACE MULTIPLICATION RIGHT_SQUARE_BRACE\n");}|
	
                               direct_declarator LEFT_ROUND_BRACE parameter_type_list RIGHT_ROUND_BRACE
	                       {
	  	                    flag.p = 1;							
	  	                    $$.name = $1.name;
	  	                    $$.type = 0;
	  	                    $$.width = 1;
                                    printf("direct_declarator ->direct_declarator LEFT_ROUND_BRACE parameter_type_list RIGHT_ROUND_BRACE\n");
	                       }|

	                       direct_declarator LEFT_ROUND_BRACE identifier_list RIGHT_ROUND_BRACE
	                       {printf("direct_declarator -> direct_declarator LEFT_ROUND_BRACE identifier_list RIGHT_ROUND_BRACE\n");}|
	
                               direct_declarator LEFT_ROUND_BRACE RIGHT_ROUND_BRACE
	                       {
	  	                    flag.p = 1;
	  	                    if(flag.q == 0)temporary = create_new_table();
	  	                    $$.name = $1.name;
	  	                    $$.type = 0;
	  	                    $$.width = 1;
                                    printf("direct_declarator -> direct_declarator LEFT_ROUND_BRACE RIGHT_ROUND_BRACE\n ");
	                       }
                               ;


pointer:		         MULTIPLICATION
	                          {
	  	                      $$.type = new_expression(pointer_type,-1);
                                      printf("pointer -> MULTIPLICATION");
	                          }|
	                         MULTIPLICATION type_qualifier_list
                                 { printf("pointer -> MULTIPLICATION type_qualifier_list");}|
	                         MULTIPLICATION pointer
	                         {
	  	                     type_expression *temp = new_expression(pointer_type,-1);
	  	                     $$.type = merge_expressions($2.type,temp);
                                     printf("pointer -> MULTIPLICATION pointer");
	                         }|
	                         MULTIPLICATION type_qualifier_list pointer
                                 {printf("pointer -> MULTIPLICATION type_qualifier_list pointer");}
	;

type_qualifier_list:	        type_qualifier {printf("type_qualifier_list ->type_qualifier  \n");}|
				type_qualifier_list type_qualifier {printf("type_qualifier_list ->type_qualifier \n");}
				;

parameter_type_list:	         parameter_list {printf("parameter_type_list ->parameter_list \n");}|
				 parameter_list COMMA ELIPSES {printf("parameter_type_list->parameter_list COMMA ELIPSES \n");}
				 ;

parameter_list:			parameter_declaration 
                                {
                                    if(flag.q == 0)
                                    {
	  		                 temporary = create_new_table();
	  		                 row_of_symbol_table x($1.name,$1.type,$1.width,-1,0,0); 
	  		                 temporary->add(x);
	  	                    }
                                    printf("parameter_list ->parameter_declaration \n");
                                }|
				parameter_list COMMA parameter_declaration 
                                {
                                    if(flag.q == 0)
                                    {
	  		                 row_of_symbol_table x($3.name,$3.type,$3.width,-1,0,0); 
	  		                 temporary->add(x);
	  	                    }
                                    printf("parameter_list ->parameter_list COMMA parameter_declaration \n");
                                }
				;

parameter_declaration:	        declaration_specifiers declarator 
                                {
                                   if(flag.q == 0)
                                   {
	  		               $$.type = merge_expressions($2.type,$1.type);
	  		               $$.name = $2.name;
	  		               $$.width = $1.width*$2.width;
	  	                   }
                                   printf("parameter_declaration ->declaration_specifiers declarator \n");
                                }|
				declaration_specifiers {printf("parameter_declaration ->declaration_specifiers  \n");}
				;

identifier_list :		IDENTIFIER {printf("identifier_list  ->IDENTIFIER   \n");}|
				identifier_list COMMA IDENTIFIER 
                                {printf("identifier_list  ->identifier_list COMMA IDENTIFIER  \n");}
				;

type_name:		        specifier_qualifier_list {printf("type_name ->specifier_qualifier_list  \n");}
			        ;

initializer:			assignment_expression {$$ = $1.value;printf("initializer->assignment_expression \n");}|
				LEFT_CURLY_BRACE initializer_list RIGHT_CURLY_BRACE {printf("initializer ->LEFT_CURLY_BRACE initializer_list RIGHT_CURLY_BRACE\n");}|
				LEFT_CURLY_BRACE initializer_list COMMA RIGHT_CURLY_BRACE {printf("initializer ->LEFT_CURLY_BRACE initializer_list COMMA RIGHT_CURLY_BRACE  \n");}
				;

initializer_list:		designation_opt initializer {printf("initializer_list ->designation_opt initializer  \n");}|
				initializer_list COMMA designation_opt initializer {printf("initializer_list ->initializer_list COMMA designation_opt initializer   \n");}
				;																																															

designation_opt:		designation {printf("designation_opt->designation  \n");}|
				/*This is epsilon transition*/ {printf("designation_opt ->epsilon transition\n");}
				;

designation:			designator_list EQUAL {printf("designation->designator_list EQUAL  \n");}
				;
                                            
designator_list:		designator {printf("designator_list ->designator \n");}|
				designator_list designator {printf("designator_list ->designator_list designator\n");}
				;

designator:			LEFT_SQUARE_BRACE constant_expression RIGHT_SQUARE_BRACE {printf("designator ->LEFT_SQUARE_BRACE constant_expression RIGHT_SQUARE_BRACE   \n");}|
				PERIOD IDENTIFIER {printf("designator ->PERIOD IDENTIFIER  \n");}
				;

F:                             /*This is an epsilon transition*/ {
				    //printf("############### HERE WE ARE USING EPSILON TRANSITIONS USING F \n");
		
                                    current = temporary; 
		                    int i;
		                    char *t;
				    //printf("#####################INTERMEDIATE PRINTING ##################\n");
				    //print_all_tables(current);
				    //printf("#####################INTERMEDIATE PRINTING ENDS #############\n");				   
		                    for(i=0;i<=global->last_index;i++)
                                    {
			                 if((((global->table)[i]).nested_symbol_table) == current)
                                         {
				              t = strdup(((global->table)[i]).name);
				              break;
			                 }
		                    }
				    //printf(" The value of  t here is : %s", t);
		                    row_of_quad x(t,0,0,function_op);
		                    row_loc_quad xx(((global->table)+i),0,0);
		                    add(x,xx);
		                    flag.p = 0;
		                    flag.q = 0;
		                    flag.c = 0;
	                       }
	                       ;	


%%


void yyerror(const char* s) {
	printf("%s", s);
}








