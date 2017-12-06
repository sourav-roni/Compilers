//function to carray out simple arithmetic operations
void test(int a,int b);
int main();

void test(int a,int b)
{
	   int c, d, dummy;
	   c = a + b;
	   dummy = prints("The addtion of the two numbers is\n");
	   dummy = printi(c);
	   dummy = prints("\n");
	   c = a - b;
	   dummy = prints("The subtraction of the two numbers is\n");
	   dummy = printi(c);
	   dummy = prints("\n");
	   c = a*b;
	   dummy = prints("The multiplication of the two numbers is\n");
	   dummy = printi(c);
	   dummy = prints("\n");
	   if(a>b)
	   {
		  c = a;
		  d = b;
	   }
	   else
	   {
		   c = b;
		   d = a;
	   }
	   dummy = prints("Larger among the two numbers is \n");
	   dummy = printi(c);
	   dummy = prints("\n");
	   dummy = prints("Smaller among the two numbers is\n");
	   dummy = printi(d);
	   dummy = prints("\n");
       return ;
}

int main()
{
	  int a, b, error, dummy;
	  dummy = prints("Enter first number\n");
	  a = readi(&error);
	  dummy = prints("Enter second number\n");
	  b = readi(&error);
	  test(a,b);
	  return 0;
}



