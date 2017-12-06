%{
#include <stdio.h>
extern int yylex();
void yyerror(const char* s);
%}

%union {
  int ival;
  float fval;
  char *cval;
}
%token SINGLE_LINE_COMMENT;
%token MULTI_LINE_COMMENT;
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
%token _IMAGINARY_KEYWORD;
%token <ival> IDENTIFIER;
%token <ival> INTEGER_CONSTANT;
%token <favl> FLOATING_CONSTANT;
%token <ival> ENUMERATION_CONSTANT;
%token <cval> CHAR_CONSTANT;
%token <cval> STRING_LITERAL;
%token LEFT_SQUARE_BRACE;
%token RIGHT_SQUARE_BRACE;
%token LEFT_ROUND_BRACE;
%token RIGHT_ROUND_BRACE;
%token LEFT_CURLY_BRACE;
%token RIGHT_CURLY_BRACE;
%token PERIOD;
%token POINTS_TO;
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
%token LEFT_SHIFT;
%token RIGHT_SHIFT;
%token LESS_THAN;
%token GREATER_THAN;
%token LESS_THAN_EQUAL;
%token GREATER_THAN_EQUAL;
%token EQUAL_EQUAL;
%token NOT_EQUAL;
%token CARET;
%token BITWISE_OR;
%token LOGICAL_AND;
%token LOGICAL_OR;
%token QUESTION_MARK;
%token COLON;
%token SEMICOLON_TERMINATOR;
%token ELIPSES;
%token EQUAL;
%token MULTIPLICATION_EQUAL;
%token SLASH_EQUAL;
%token PERCENTAGE_EQUAL;
%token PLUS_EQUAL;
%token MINUS_EQUAL;
%token LEFT_SHIFT_EQUAL;
%token RIGHT_SHIFT_EQUAL;
%token BITWISE_AND_EQUAL;
%token BITWISE_NOT_EQUAL;
%token BITWISE_OR_EQUAL;
%token COMMA;
%token HASH;

%start translation_unit;

%%

//Expressions
primary_expression:	IDENTIFIER {printf("primary_expression-> IDENTIFIER\n");}
			|constant {printf("primary_expression-> constant\n");}
			|STRING_LITERAL {printf("primary_expression-> STRING_LITERAL\n");}
			|LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE {printf("primary_expression-> LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE\n");}
			;

constant:		INTEGER_CONSTANT {printf("constant-> INTEGER_CONSTANT \n");}
			|FLOATING_CONSTANT {printf("constant->FLOATING_CONSTANT \n");}
			|CHAR_CONSTANT {printf("constant-> CHAR_CONSTANT \n");}
			|ENUMERATION_CONSTANT {printf("constant->ENUMERATION_CONSTANT\n");}
			;

postfix_expression:	primary_expression {printf("postfix_expression-> primary_expression \n");}
			|postfix_expression LEFT_SQUARE_BRACE expression RIGHT_SQUARE_BRACE {printf("postfix_expression-> postfix_expression '[' expression ']'\n");}	
			|postfix_expression LEFT_ROUND_BRACE argument_expression_list_opt RIGHT_ROUND_BRACE {printf("postfix_expression-> postfix_expression '(' argument_expression_list_opt ')'\n");}
			|postfix_expression PERIOD IDENTIFIER  {printf("postfix_expression-> postfix_expression '.' IDENTIFIER_VARIABLE\n");}
			|postfix_expression POINTS_TO IDENTIFIER {printf("postfix_expression-> postfix_expression STRUCTURE_DEREFERNCE_OP IDENTIFIER_VARIABLE\n");}
			|postfix_expression PLUS_PLUS  {printf("postfix_expression-> postfix_expression INCREMENT_OP \n");}
			|postfix_expression MINUS_MINUS {printf("postfix_expression-> postfix_expression DECREMENT_OP \n");}
			|LEFT_ROUND_BRACE type_name RIGHT_ROUND_BRACE LEFT_CURLY_BRACE initializer_list RIGHT_CURLY_BRACE {printf("postfix_expression-> '(' type_name ')' '{' initializer_list '}'\n");}
			|LEFT_ROUND_BRACE type_name RIGHT_ROUND_BRACE LEFT_CURLY_BRACE initializer_list COMMA RIGHT_CURLY_BRACE {printf("postfix_expression-> '(' type_name ')' '{' initializer_list ',' '}'\n");}
			;

argument_expression_list_opt:	argument_expression_list
				|/*this is an epsilon transition*/ {printf("argument_expression_list_opt ->epsilon\n");}
				;	

argument_expression_list: 	assignment_expression
				|argument_expression_list COMMA assignment_expression 
				;

unary_expression:		postfix_expression {printf("unary_expression-> additive_expression\n");}
				|PLUS_PLUS unary_expression {printf("unary_expression-> PLUS_PLUS unary_expression \n");}
				|MINUS_MINUS unary_expression {printf("unary_expression-> MINUS_MINUS unary_expression\n");}
				|unary_operator cast_expression {printf("unary_expression-> unary_operator cast_expression \n");}
				|SIZEOF_KEYWORD unary_expression {printf("unary_expression-> SIZEOF_KEYWORD unary_expression\n");}
				|SIZEOF_KEYWORD LEFT_ROUND_BRACE type_name RIGHT_ROUND_BRACE {printf("unary_expression-> SIZEOF_KEYWORD LEFT_ROUND_BRACE type_name RIGHT_ROUND_BRACE\n");}
				;

unary_operator	:		AMPERSAND {printf("unary_operator-> AMPERSAND\n");}
				|MULTIPLICATION {printf("unary_operator->MULTIPLICATION\n");}
				|PLUS {printf("unary_operator-> PLUS\n");}
				|MINUS {printf("unary_operator-> MINUS\n");}
				|TILDE {printf("unary_operator-> TILDE\n");}
				|EXCLIMATION {printf("unary_operator-> EXCLIMATION\n");}
				;

cast_expression : 		unary_expression {printf("cast_expression-> unary_expressio\n");}
				|LEFT_ROUND_BRACE type_name RIGHT_ROUND_BRACE cast_expression {printf("cast_expression->LEFT_ROUND_BRACE type_name RIGHT_ROUND_BRACE cast_expression\n");}
				;

multiplicative_expression:	cast_expression {printf("multiplicative_expression-> cast_expression\n");}
				|multiplicative_expression MULTIPLICATION cast_expression {printf("multiplicative_expression-> multiplicative_expression MULTIPLICATION cast_expression\n");}
				|multiplicative_expression FORWARD_SLASH cast_expression {printf("multiplicative_expression-> multiplicative_expression FORWARD_SLASH cast_expression\n");}
				|multiplicative_expression PERCENTAGE cast_expression {printf("multiplicative_expression-> multiplicative_expression PERCENTAGE cast_expression\n");}
				;

additive_expression :	        multiplicative_expression {printf("additive_expression-> multiplicative_expression\n");}
				|additive_expression PLUS multiplicative_expression {printf("additive_expression-> additive_expression PLUS multiplicative_expression \n");}
				|additive_expression MINUS multiplicative_expression {printf("additive_expression-> additive_expression MINUS multiplicative_expression \n");}
				;

shift_expression:		additive_expression {printf("shift_expression-> additive_expression\n");}
				|shift_expression LEFT_SHIFT additive_expression {printf("shift_expression-> shift_expression LEFT_SHIFT additive_expression  \n");}
				|shift_expression RIGHT_SHIFT additive_expression {printf("shift_expression-> shift_expression RIGHT_SHIFT additive_expression \n");}
				;

relational_expression:	        shift_expression {printf("relational_expression-> shift_expression \n");}
				|relational_expression LESS_THAN shift_expression {printf("relational_expression -> relational_expression LESS_THAN shift_expression  \n");}
				|relational_expression GREATER_THAN shift_expression {printf("relational_expression ->relational_expression GREATER_THAN shift_expression\n");}
				|relational_expression LESS_THAN_EQUAL shift_expression {printf("relational_expression ->relational_expression LESS_THAN_EQUAL shift_expression\n");}
				|relational_expression GREATER_THAN_EQUAL shift_expression {printf("relational_expression->relational_expression GREATER_THAN_EQUAL shift_expression\n");}
				;

equality_expression:	        relational_expression {printf("equality_expression->relational_expression\n");}
				|equality_expression EQUAL_EQUAL relational_expression {printf("equality_expression->equality_expression EQUAL_EQUAL relational_expression\n");}
				|equality_expression NOT_EQUAL relational_expression {printf("equality_expression ->equality_expression NOT_EQUAL relational_expression\n");}
				;

AND_expression :		equality_expression {printf("AND_expression ->equality_expression\n");}
				|AND_expression AMPERSAND equality_expression {printf("AND_expression ->AND_expression AMPERSAND equality_expression\n");}
				;

exclusive_OR_expression:        AND_expression {printf("exclusive_OR_expression ->AND_expression\n");}
				|exclusive_OR_expression CARET AND_expression {printf("exclusive_OR_expression ->exclusive_OR_expression CARET AND_expression \n");}
				;

inclusive_OR_expression:        exclusive_OR_expression {printf("inclusive_OR_expression ->exclusive_OR_expression \n");}
				|inclusive_OR_expression BITWISE_OR exclusive_OR_expression {printf("inclusive_OR_expression ->inclusive_OR_expression BITWISE_OR exclusive_OR_expression \n");}
				;

logical_AND_expression:	        inclusive_OR_expression {printf("logical_AND_expression ->inclusive_OR_expression  \n");}
				|logical_AND_expression LOGICAL_AND inclusive_OR_expression {printf("logical_AND_expression ->logical_AND_expression LOGICAL_AND inclusive_OR_expression \n");}
			        ;

logical_OR_expression:	        logical_AND_expression {printf("logical_OR_expression->logical_AND_expression \n");}
				|logical_OR_expression LOGICAL_OR logical_AND_expression {printf("logical_OR_expression ->logical_OR_expression LOGICAL_OR logical_AND_expression \n");}
				;

conditional_expression:         logical_OR_expression {printf("conditional_expression ->logical_OR_expression \n");}
				|logical_OR_expression QUESTION_MARK expression COLON conditional_expression	 {printf("conditional_expression->logical_OR_expression QUESTION_MARK expression COLON conditional_expression\n");}
				;

assignment_expression:	        conditional_expression {printf("assignment_expression ->conditional_expression \n");}
				|unary_expression assignment_operator assignment_expression {printf("assignment_expression->unary_expression assignment_operator assignment_expression \n");}	
				;

assignment_operator:	        EQUAL {printf("assignment_operator -> EQUAL\n");}
				|MULTIPLICATION_EQUAL {printf("assignment_operator -> MULTIPLICATION_EQUAL\n");}
				|SLASH_EQUAL {printf("assignment_operator -> SLASH_EQUAL\n");}
				|PERCENTAGE_EQUAL {printf("assignment_operator -> PERCENTAGE_EQUAL\n");}
				|PLUS_EQUAL {printf("assignment_operator-> PLUS_EQUAL \n");}
				|MINUS_EQUAL {printf("assignment_operator -> MINUS_EQUAL \n");}
                                |LEFT_SHIFT_EQUAL {printf("assignment_operator -> LEFT_SHIFT_EQUAL\n");}
				|RIGHT_SHIFT_EQUAL {printf("assignment_operator -> RIGHT_SHIFT_EQUAL\n");}
                                |BITWISE_AND_EQUAL {printf("assignment_operator-> BITWISE_AND_EQUAL \n");}
				|BITWISE_NOT_EQUAL {printf("assignment_operator -> BITWISE_NOT_EQUAL  \n");}
				|BITWISE_OR_EQUAL {printf("assignment_operator -> BITWISE_OR_EQUAL\n");}
				;

expression :			assignment_expression {printf("expression ->assignment_expression \n");}
				|expression COMMA assignment_expression {printf("expression ->expression COMMA assignment_expression \n");}
				;


constant_expression:	        conditional_expression {printf("constant_expression ->conditional_expression \n");}
			        ;

//Declarations

declaration:			declaration_specifiers init_declarator_list_opt SEMICOLON_TERMINATOR {printf("declaration ->declaration_specifiers init_declarator_list_opt SEMICOLON_TERMINATOR  \n");}
				;

init_declarator_list_opt:       init_declarator_list {printf("init_declarator_list_opt->init_declarator_list  \n");}
				|/*this is an epsilon transition*/ {printf("init_declarator_list_opt ->epsilon\n");}
				;

declaration_specifiers:		storage_class_specifier declaration_specifiers_opt {printf("declaration_specifiers ->storage_class_specifier declaration_specifiers_opt\n");}
				|type_specifier declaration_specifiers_opt {printf("declaration_specifiers ->type_specifier declaration_specifiers_opt\n");}
				|type_qualifier declaration_specifiers_opt {printf("declaration_specifiers ->type_qualifier declaration_specifiers_opt\n");}
				|function_specifier declaration_specifiers_opt {printf("declaration_specifiers->function_specifier declaration_specifiers_opt\n");}
				;

declaration_specifiers_opt:     declaration_specifiers {printf("declaration_specifiers_opt ->declaration_specifiers\n");}
				|/*this is an epsilon transition*/ {printf("init_declarator_list_opt ->epsilon\n");}
				;

init_declarator_list:	        init_declarator {printf("init_declarator_list -> init_declarator\n");}
				|init_declarator_list COMMA init_declarator {printf("init_declarator_list -> init_declarator_list COMMA init_declarator\n");}
				;

init_declarator:		declarator {printf("init_declarator->declarator\n");}
				|declarator EQUAL initializer {printf("init_declarator ->declarator EQUAL initializer \n");}
				;

storage_class_specifier: 	EXTERN_KEYWORD {printf("storage_class_specifier-> EXTERN_KEYWORD \n");}
				|STATIC_KEYWORD {printf("storage_class_specifier-> STATIC_KEYWORD\n");}
				|AUTO_KEYWORD  {printf("storage_class_specifier-> AUTO_KEYWORD \n");}
				|REGISTER_KEYWORD {printf("storage_class_specifier-> REGISTER_KEYWORD \n");}
				;

type_specifier:			VOID_KEYWORD {printf("type_specifier ->VOID_KEYWORD  \n");}
				|CHAR_KEYWORD {printf("type_specifier ->CHAR_KEYWORD \n");}
				|SHORT_KEYWORD {printf("type_specifier ->SHORT_KEYWORD  \n");}
				|INT_KEYWORD {printf("type_specifier ->INT_KEYWORD \n");}
				|LONG_KEYWORD {printf("type_specifier->LONG_KEYWORD\n");}
				|FLOAT_KEYWORD {printf("type_specifier ->FLOAT_KEYWORD\n");}
				|DOUBLE_KEYWORD {printf("type_specifier ->DOUBLE_KEYWORD \n");}
				|SIGNED_KEYWORD {printf("type_specifier->SIGNED_KEYWORD \n");}
				|UNSIGNED_KEYWORD {printf("type_specifier ->UNSIGNED_KEYWORD  \n");}
				|_BOOL_KEYWORD {printf("type_specifier ->_BOOL_KEYWORD \n");}
				|_COMPLEX_KEYWORD {printf("type_specifier->_COMPLEX_KEYWORD  \n");}
				|_IMAGINARY_KEYWORD {printf("type_specifier ->_IMAGINARY_KEYWORD \n");}
				|enum_specifier {printf("type_specifier ->enum_specifier\n");}
				;			

specifier_qualifier_list:       type_specifier specifier_qualifier_list_opt {printf("specifier_qualifier_list ->type_specifier specifier_qualifier_list_opt \n");}
				|type_qualifier specifier_qualifier_list_opt {printf("specifier_qualifier_list->type_qualifier specifier_qualifier_list_opt  \n");}
				;	

specifier_qualifier_list_opt:   specifier_qualifier_list {printf("specifier_qualifier_list_opt ->specifier_qualifier_list  \n");}
				|/*this is an epsilon transition*/ {printf("specifier_qualifier_list_opt ->epsilon\n");}
				;

enum_specifier:			ENUM_KEYWORD identifier_opt LEFT_CURLY_BRACE enumerator_list RIGHT_CURLY_BRACE {printf("enum_specifier ->ENUM_KEYWORD identifier_opt LEFT_CURLY_BRACE enumerator_list RIGHT_CURLY_BRACE  \n");}
			        |ENUM_KEYWORD identifier_opt LEFT_CURLY_BRACE enumerator_list COMMA RIGHT_CURLY_BRACE {printf("enum_specifier ->ENUM_KEYWORD identifier_opt LEFT_CURLY_BRACE enumerator_list COMMA RIGHT_CURLY_BRACE  \n");} 						
                                |ENUM_KEYWORD IDENTIFIER {printf("enum_specifier->ENUM_KEYWORD IDENTIFIER  \n");}
				;

identifier_opt:			IDENTIFIER {printf("identifier_opt ->IDENTIFIER\n");}
				|/*this is an epsilon transition*/ {printf("identifier_opt ->epsilon\n");}
				;

enumerator_list:		enumerator {printf("enumerator_list ->enumerator  \n");}
				|enumerator_list COMMA enumerator {printf("enumerator_list ->enumerator_list COMMA enumerator\n");}
				;

enumerator:			ENUMERATION_CONSTANT {printf("enumerator->ENUMERATION_CONSTANT  \n");}
				|ENUMERATION_CONSTANT EQUAL constant_expression {printf("enumerator ->ENUMERATION_CONSTANT EQUAL constant_expression \n");}
				;

type_qualifier:			CONST_KEYWORD {printf("type_qualifier ->CONST_KEYWORD  \n");}
				|RESTRICT_KEYWORD {printf("type_qualifier ->RESTRICT_KEYWORD  \n");}
				|VOLATILE_KEYWORD {printf("type_qualifier->VOLATILE_KEYWORD  \n");}
				;

function_specifier:		INLINE_KEYWORD {printf("function_specifier -> INLINE_KEYWORD   \n");}
				;

declarator :			pointer_opt direct_declarator {printf("declarator -> pointer_opt direct_declarator \n");}
				;

pointer_opt:			pointer {printf("pointer_opt -> pointer  \n");}
				|/*this is an epsilon transition*/ {printf("pointer_opt ->epsilon\n");}
				;

direct_declarator:		IDENTIFIER {printf("direct_declarator ->IDENTIFIER \n");}
				|LEFT_ROUND_BRACE declarator RIGHT_ROUND_BRACE {printf("direct_declarator ->LEFT_ROUND_BRACE declarator RIGHT_ROUND_BRACE  \n");}
				|direct_declarator LEFT_SQUARE_BRACE type_qualifier_list_opt assignment_expression_opt RIGHT_SQUARE_BRACE {printf("direct_declarator ->direct_declarator LEFT_SQUARE_BRACE type_qualifier_list_opt assignment_expression_opt RIGHT_SQUARE_BRACE\n");} 																							
				|direct_declarator LEFT_SQUARE_BRACE STATIC_KEYWORD type_qualifier_list_opt assignment_expression RIGHT_SQUARE_BRACE {printf("direct_declarator ->direct_declarator LEFT_SQUARE_BRACE STATIC_KEYWORD type_qualifier_list_opt assignment_expression RIGHT_SQUARE_BRACE\n");}
				|direct_declarator LEFT_SQUARE_BRACE type_qualifier_list STATIC_KEYWORD assignment_expression RIGHT_SQUARE_BRACE {printf("direct_declarator->direct_declarator LEFT_SQUARE_BRACE type_qualifier_list STATIC_KEYWORD assignment_expression RIGHT_SQUARE_BRACE  \n");}
			        |direct_declarator LEFT_SQUARE_BRACE type_qualifier_list_opt MULTIPLICATION RIGHT_SQUARE_BRACE {printf("direct_declarator ->direct_declarator LEFT_SQUARE_BRACE type_qualifier_list_opt MULTIPLICATION RIGHT_SQUARE_BRACE \n");}
				|direct_declarator LEFT_ROUND_BRACE parameter_type_list RIGHT_ROUND_BRACE {printf("direct_declarator->direct_declarator LEFT_ROUND_BRACE parameter_type_list RIGHT_ROUND_BRACE  \n");}
				|direct_declarator LEFT_ROUND_BRACE identifier_list_opt RIGHT_ROUND_BRACE {printf("direct_declarator ->direct_declarator LEFT_ROUND_BRACE identifier_list_opt RIGHT_ROUND_BRACE  \n");}
				;

type_qualifier_list_opt:        type_qualifier_list {printf("type_qualifier_list_opt ->type_qualifier_list \n");}
				|/*this is an epsilon transition*/ {printf("type_qualifier_list_opt ->epsilon transition \n");}
				;

assignment_expression_opt:      assignment_expression {printf("assignment_expression_opt->assignment_expression  \n");}
				|/*this is an epsilon transition*/ {printf("assignment_expression_opt ->epsilon transition \n");}
				;

identifier_list_opt:	        identifier_list  {printf("identifier_list_opt ->identifier_list  \n");}
				|/*this is an epsilon transition*/ {printf("identifier_list_opt ->epsilon transition  \n");}
				;

pointer:		        MULTIPLICATION type_qualifier_list_opt {printf("pointer->MULTIPLICATION type_qualifier_list_opt \n");}
				|MULTIPLICATION type_qualifier_list_opt pointer {printf("pointer ->MULTIPLICATION type_qualifier_list_opt pointer \n");}
				;

type_qualifier_list:	        type_qualifier {printf("type_qualifier_list ->type_qualifier\n");}
				|type_qualifier_list type_qualifier {printf("type_qualifier_list ->type_qualifier_list type_qualifier\n");}
				;

parameter_type_list:	        parameter_list {printf("parameter_type_list ->parameter_list \n");}
				|parameter_list COMMA ELIPSES {printf("parameter_type_list->parameter_list COMMA ELIPSES\n");}
				 ;

parameter_list:			parameter_declaration {printf("parameter_list ->parameter_declaration \n");}
				|parameter_list COMMA parameter_declaration {printf("parameter_list ->parameter_list COMMA parameter_declaration \n");}
				;

parameter_declaration:	        declaration_specifiers declarator {printf("parameter_declaration ->declaration_specifiers declarator \n");}
				|declaration_specifiers {printf("parameter_declaration ->declaration_specifiers  \n");}
				;

identifier_list :		IDENTIFIER {printf("identifier_list  ->IDENTIFIER   \n");}
				|identifier_list COMMA IDENTIFIER {printf("identifier_list  ->identifier_list COMMA IDENTIFIER  \n");}
				;

type_name:		        specifier_qualifier_list {printf("type_name ->specifier_qualifier_list  \n");}
			        ;

initializer:			assignment_expression {printf("initializer->assignment_expression \n");}
				|LEFT_CURLY_BRACE initializer_list RIGHT_CURLY_BRACE {printf("initializer ->LEFT_CURLY_BRACE initializer_list RIGHT_CURLY_BRACE \n");}
				|LEFT_CURLY_BRACE initializer_list COMMA RIGHT_CURLY_BRACE {printf("initializer ->LEFT_CURLY_BRACE initializer_list COMMA RIGHT_CURLY_BRACE  \n");}
				;

initializer_list:		designation_opt initializer {printf("initializer_list ->designation_opt initializer  \n");}
				|initializer_list COMMA designation_opt initializer {printf("initializer_list ->initializer_list COMMA designation_opt initializer   \n");}
				;																																															

designation_opt:		designation {printf("designation_opt->designation  \n");}
				|/*this is an epsilon transition*/ {printf("designation_opt -> epsilon\n");}
				;

designation:			designator_list EQUAL {printf("designation-> designator_list EQUAL  \n");}
				;
                                            
designator_list:		designator {printf("designator_list -> designator \n");}
				|designator_list designator {printf("designator_list -> designator_list designator\n");}
				;

designator:			LEFT_SQUARE_BRACE constant_expression RIGHT_SQUARE_BRACE {printf("designator -> LEFT_SQUARE_BRACE constant_expression RIGHT_SQUARE_BRACE\n");}
				|PERIOD IDENTIFIER {printf("designator -> PERIOD IDENTIFIER\n");}
				;

//Statements

statement:			labeled_statement {printf("statement -> labeled_statement \n");}
				|compound_statement {printf("statement -> compound_statement\n");}
				|expression_statement {printf("statement -> expression_statement \n");}
				|selection_statement {printf("statement -> selection_statement \n");}
				|iteration_statement {printf("statement -> iteration_statement \n");}
				|jump_statement	{printf("statement -> jump_statement \n");}	
				;

labeled_statement:		IDENTIFIER COLON statement {printf("labeled_statement ->IDENTIFIER COLON statement\n");}
				|CASE_KEYWORD constant_expression COLON statement {printf("labeled_statement -> CASE_KEYWORD constant_expression COLON statement  \n");}
				|DEFAULT_KEYWORD COLON statement {printf("labeled_statement -> DEFAULT_KEYWORD COLON statement \n");}
				;
 

compound_statement:		LEFT_CURLY_BRACE block_item_list_opt RIGHT_CURLY_BRACE {printf("compound_statement-> LEFT_CURLY_BRACE block_item_list_opt RIGHT_CURLY_BRACE \n");}
				;
 
block_item_list_opt:	        block_item_list {printf("block_item_list_opt ->block_item_list \n");}	
				|/*this is an epsilon transition*/ {printf("block_item_list_opt ->epsilon\n");}
				;

block_item_list:		block_item {printf("block_item_list -> block_item \n");}
				|block_item_list block_item {printf("block_item_list -> block_item_list block_item \n");}
				;

block_item:			declaration {printf("block_item -> declaration\n");}
				|statement {printf("block_item -> statement\n");}
				;						

expression_statement:	        expression_opt SEMICOLON_TERMINATOR {printf("expression_statement -> expression_opt SEMICOLON_TERMINATOR \n");}
				;

expression_opt:			expression {printf("expression_opt ->expression \n");}
				|/*this is an epsilon transition*/ {printf("expression_opt->epsilon \n");}
				;
 
selection_statement:	        IF_KEYWORD LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement ELSE_KEYWORD statement {printf("selection_statement ->IF_KEYWORD LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement ELSE_KEYWORD statement\n");}
				|IF_KEYWORD LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement {printf("selection_statement ->IF_KEYWORD LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement \n");}
                                |SWITCH_KEYWORD LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement {printf("selection_statement ->SWITCH_KEYWORD LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement\n");}
				;

iteration_statement:	        WHILE_KEYWORD LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement {printf("iteration_statement ->WHILE_KEYWORD LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE statement\n");}
				|DO_KEYWORD statement WHILE_KEYWORD LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE SEMICOLON_TERMINATOR {printf("iteration_statement ->DO_KEYWORD statement WHILE_KEYWORD LEFT_ROUND_BRACE expression RIGHT_ROUND_BRACE SEMICOLON_TERMINATOR\n");}
				|FOR_KEYWORD LEFT_ROUND_BRACE expression_opt SEMICOLON_TERMINATOR expression_opt SEMICOLON_TERMINATOR expression_opt RIGHT_ROUND_BRACE statement {printf("iteration_statement->FOR_KEYWORD LEFT_ROUND_BRACE expression_opt SEMICOLON_TERMINATOR expression_opt SEMICOLON_TERMINATOR expression_opt RIGHT_ROUND_BRACE statement\n");}
				|FOR_KEYWORD LEFT_ROUND_BRACE declaration expression_opt SEMICOLON_TERMINATOR expression_opt RIGHT_ROUND_BRACE statement {printf("iteration_statement->FOR_KEYWORD LEFT_ROUND_BRACE declaration expression_opt SEMICOLON_TERMINATOR expression_opt RIGHT_ROUND_BRACE statement \n");}
		                ;

jump_statement:	       		GOTO_KEYWORD IDENTIFIER SEMICOLON_TERMINATOR {printf("jump_statement ->GOTO_KEYWORD IDENTIFIER SEMICOLON_TERMINATOR  \n");}
			        |CONTINUE_KEYWORD SEMICOLON_TERMINATOR {printf("jump_statement ->CONTINUE_KEYWORD SEMICOLON_TERMINATOR \n");}
				|BREAK_KEYWORD SEMICOLON_TERMINATOR {printf("jump_statement ->BREAK_KEYWORD SEMICOLON_TERMINATOR \n");}
				|RETURN_KEYWORD expression_opt SEMICOLON_TERMINATOR  {printf("jump_statement ->RETURN_KEYWORD expression_opt SEMICOLON_TERMINATOR \n");}
				;

//External Definitions

translation_unit:		external_declaration {printf("translation_unit -> external_declaration\n");}
				|translation_unit external_declaration {printf("translation_unit -> translation_unit external_declaration\n");}
				;

external_declaration:	        function_definition {printf("external_declaration -> function_definition\n");}
				|declaration {printf("external_declaration -> declaration\n");}
				;

function_definition:	        declaration_specifiers declarator declaration_list_opt compound_statement {printf("function_definition->declaration_specifiers declarator declaration_list_opt compound_statement\n");}
				;

declaration_list_opt:	        declaration_list {printf("declaration_list_opt -> declaration_list \n");}
				|/*this is an epsilon transition*/ {printf("declaration_list_opt -> epsilon\n");}
				;

declaration_list:		declaration {printf("declaration_list -> declaration \n");}
				|declaration_list declaration {printf("declaration_list -> declaration_list declaration  \n");}
				;

%%

void yyerror(const char* s) {
	printf("%s", s);
}































