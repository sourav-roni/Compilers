/*
Name : Sourav Pal
Roll No.: 14CS10062
Assignment No.: 6
Date : 10/11/2016
*/
#ifndef ASS5_14CS10062_TRANSLATOR_INCLUDED
#define ASS5_14CS10062_TRANSLATOR_INCLUDED


#include <iostream>
#include <string>
#include <stdio.h>
#include <string>
#include <list>
#include <vector>

#define SIZE_OF_INT 4
#define SIZE_OF_DOUBLE 8
#define SIZE_OF_CHAR 1
#define SIZE_OF_POINTER 4
#define MAX_SIZE 10000

using namespace std;


/* Various structures */
typedef enum        //enum defined for the various data types to be handled
{ 
   int_type,  
   double_type, 
   void_type,
   char_type,
   bool_type,
   array_type, 
   pointer_type,   
   function_type 
}symbol_type;

typedef enum		//enum defined for the various array types possible
{
   int_array,
   double_array,
   char_array,
   pointer_array,
   bool_array,
}arr_type;

typedef enum 		//enum defined for the various op_codes possible
{
   no_op, 
   call_op,
   call_value_op,
   goto_op,
   param_op,
   return_op,
   return_value_op,
   function_op, 
  
   addition_op,
   subtraction_op,
   multiplication_op,
   division_op,
   mod_op,
   assign_op,

   shift_left_op,
   left_brace_op,
   shift_right_op,
   right_brace_op,

   unary_plus_op,
   unary_minus_op,
   unary_star_op,
   unary_address_op,
   unary_negation_op,
   
   less_than_op,
   less_than_gop,
   less_than_or_equal_to_op,
   less_than_or_equal_to_gop,
   greater_than_op,
   greater_than_gop,
   greater_than_or_equal_to_op,
   greater_than_or_equal_to_gop,
   equal_to_op,
   equal_to_gop,
   not_equal_to_op,
   not_equal_to_gop,
   if_yes_goto_op,
   if_no_goto_op,

   bitwise_and_op,
   bitwise_or_op,
   bitwise_xor_op,
   bitwise_not_op,
   logical_and_op,
   logical_or_op,
   pointer_star_op		      //new o_type added
   
}op_type;	
					
typedef struct row_of_quad
{
  char *arg1;			//the struct row_of_quad basically represents a quad of the form res = arg1 op_code arg2
  char *arg2;
  char *res;
  op_type op_code;
  row_of_quad(char * = 0,char * = 0,char * = 0,op_type = no_op);  //default constructor
  void update(char *,char *,char *, op_type);			 //function for updating the quad
  void print_quad(int);						//function for printing the quad based on op_code
}row_of_quad;


typedef struct val		
{
	int * b;
	int len;
}vault;


typedef struct type_expression			//structure defined for a type_expression 
{														
	int *number;				
        symbol_type type;
	struct type_expression *next;		//pointer to the next component of the type expression, the end is NULL
	void printit();
}type_expression;

class row_of_symbol_table; 
class symbol_table;

class row_of_symbol_table
{													
    public:
	char *name;		//name of the entry to the symbol table
	type_expression *type;	//corresponding type expression
        int size;		//contains the size of the entry
	int offset;		//offset of the symbol table	
	void *initial_value; 	//the initial value of the entry
	symbol_table *nested_symbol_table;    //pointer to nested symbol table
        char* name_of_nested_symbol_table;	//name of nested symbol table
	int global_indication;
	row_of_symbol_table(char * = 0 , type_expression * = 0,int = -1, int = -1, void * = 0,symbol_table * = 0,char* = 0, int = 0); //default constructor
	void print_row(); //function for printing thw row of a symbol table
};

typedef struct row_loc_quad
{
  row_of_symbol_table* arg1;
  row_of_symbol_table* arg2;
  row_of_symbol_table* res;
  row_loc_quad(row_of_symbol_table* = 0,row_of_symbol_table* = 0,row_of_symbol_table* = 0);
}row_loc_quad;


typedef struct initial_value //structure to facilitate storing inintial values
{
   void* data;
   
}initial_value;


typedef struct body
{
	int one;
	int two;
	double three;
}body;

typedef struct attribute		//used as attriburtes of terminal identifier
{
    type_expression *type;		//corresponding type expression	
    char* name;				//name of the terminal 
    int width;				//width of the terminal
    row_of_symbol_table *location;	//corresponding location of the terminal in the symbol table

}attribute;


typedef struct expr
{                              
	row_of_symbol_table *location;  //pointer to the row of the symbol table containing the expression 
        initial_value value; 		//contain the initial value of the expression if any or else null
	vector<int> *truelist;       	//contains indices of quads have dangling true exists for the expression
	vector<int> *falselist;		//contains indices of quads have dangling false exists for the expression
	vector<int> *nextlist;		//contains indices of quads have dangling exists for the expression
	type_expression *type;		//cointain the information for type of the expression
	row_of_symbol_table *array;	
	row_of_symbol_table *loc_temp;	
	
}expr;


typedef struct state		//helper structuer to set flags
{
   int p;
   int q;
   int c;
   int a;
}state;


class symbol_table{
public:
	row_of_symbol_table *table;                 //pointer to the row of the symbol table
	int last_index;				    //contains the last index of the symbol table
        int length_of_table;				//used for storing the length of the symbol table
	symbol_table(int);
	row_of_symbol_table *lookup(char *,int = 0);	//helper functions
	void add(row_of_symbol_table &);
	row_of_symbol_table *gentemp(symbol_type);
	void print_table();
	row_of_symbol_table *gentemp_cmplx(type_expression *);
};

/* Global Variables */
extern symbol_table * global;          // pointer to global symbol table
extern symbol_table * current;		//pointer to current symbol table
extern symbol_table * temporary;	// pointer to temporary symbol table created during TAC generation
extern type_expression * global_type;
extern int w;
extern state flag;
extern body tree;
extern vault *  node;								
extern row_of_quad * quad_array;	// Next index of quad array
extern vector<op_type> operators;
extern int line_number;			//this is used in priniting of quads serially as they are generated
extern int next_instr;                  //Global counter to the array of quads - the index of the next quad to be generated
extern row_loc_quad* quad_array_loc;
extern int count_of_star;
extern int right_or_left;
extern int is_left;
extern int global_optimize;
extern char ** newstrings;
extern row_of_quad * lone_array ;
extern char ** label;
extern int newstrings_count;
extern int temp_count;
extern FILE* fp;
extern vector<char*> labels_unused;

/* Global Functions */
symbol_table * create_new_table();
void print_type_expression(type_expression *);
string get_initial_value(void *,type_expression *);
type_expression * new_expression(symbol_type ,int);
int search(int * x,int );
type_expression * merge_expressions(type_expression *, type_expression *);
void add(row_of_quad &, row_loc_quad &);
void print_all_quads();
vector<int> * makelist(int);
body create(int , int, double);
char* convert2char_star(int );
char* convert2char_star(double );
int fillup(int );
char* convert2char_star(char );
char* convert2char_star(string);
vector<int> * mergelist(vector<int>*, vector<int>*);
void backpatch(vector<int> *, int);
int typecheck(type_expression *,type_expression *);
void convert2bool(expr *);
int width_of(type_expression *);
void printed(symbol_table *, int);
void print_all_tables(symbol_table *);
vector<row_of_symbol_table*> * make_parameter_list(row_of_symbol_table *);
int search(attribute *,char * );
vector<row_of_symbol_table*> * merge_parameter_list(vector<row_of_symbol_table*> *, vector<row_of_symbol_table*> *);
void convert_type(expr&,expr &,expr &,op_type);
void convert_type_array(expr &,expr &,expr &);
void logical_operation_evaluation(expr &,expr &,expr &,op_type,op_type);
void print_operation(expr &,expr &,expr &,op_type);
type_expression *duplicate_tree(type_expression *);
#endif
