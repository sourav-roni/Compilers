//Testing the recursive function fibonacci
int main();
int fibonacci(int d);


int fibonacci(int d)
{
	  if(d < 2) return 1;
	  else return fibonacci(d-1) + fibonacci(d - 2);

}

int main()
{
	   int *a, b, d, e, dummy;
	   a = &b;
	   dummy = prints("Enter Number\n");
	   d = readi(&b);
	   dummy = prints("Number Entered is ");
	   dummy = printi(d);
	   e = fibonacci(d);
	   dummy = prints("\nFibonacci Result is ");
	   dummy = printi(e);
	   dummy =prints("\n");
	   return 0;
}

