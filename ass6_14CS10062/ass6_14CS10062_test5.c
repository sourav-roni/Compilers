//function to test factorial and also the dot product of two vectors in three dimensional space
int fact(int n);
int main();

int fact(int n)
{
	if(n ==0 || n==1)
	{
		return 1;
	}
	else
	{
		return (n*fact(n-1));
	}
}

int main()
{
	int a[3], b[3], n, fac, dummy, i, error, sum ;
	dummy = prints("Enter the elements of the first array : \n");
	for(i = 0;i<3;++i)
	{
	    dummy = prints("Enter the element: "); 
	    a[i] = readi(&error);
	}
	dummy = prints("Enter the elements of the second array: \n");
	for(i = 0;i<3;++i)
	{
	    dummy = prints("Enter element : "); 
	    b[i] = readi(&error);
	}
	sum = 0;
	for(i = 0;i<3;++i)
	{
	    sum = sum + a[i]*b[i];
	}
	dummy = prints("Dot product of above two entered vectors is ");
	dummy = printi(sum);
	dummy = prints(".\n");
	dummy = prints(" Enter the number whose factorial you want : ");
	n = readi(&dummy);
	fac = fact(n);
	dummy = prints("The factorial of ");
	dummy = printi(n);
	dummy = prints(" is ");
	dummy = printi(fac);
	dummy = prints(".\n");
  return 0;
}

