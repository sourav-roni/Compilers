//Function to test the sum of array elements
int main();

int main()
{
	  int a[5],i, error, sum;
	  int dummy;
	  sum = 0;
	  dummy = prints("Enter five integers one by one :\n");
	  for(i = 0;i<5;i++)
	  {
		 dummy = prints("Enter the number  \n");
		 a[i] = readi(&error);
		 sum = sum + a[i];
	  }
	  dummy = prints("The sum of the array elements is ");
	  dummy = printi(sum);
	  dummy = prints(".\n");
	  return 0;
}

