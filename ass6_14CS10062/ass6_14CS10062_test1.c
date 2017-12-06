//checking binary search in an array 
int main();

int main()
{
	   int i,first,last,middle,search,A[10];
	   int error;
	   int *p;
	   int dummy, found;
	   p = &error;
	   dummy = prints("Enter 10 numbers in sorted order\n");
	   for (i = 0; i < 10; i++)
	   { 
	      A[i] = readi(&error);
	   } 
	   dummy = prints("Enter the value to search\n");
	   search = readi(&error); 
	   first = 0;
	   last = 9;
	   middle = (first+last)/2;
	   found = 0;
	   while (first <= last) {
	      if (A[middle] < search)
		 first = middle + 1;    
	      else if (A[middle] == search) {
		 dummy = prints("The querry was found at location ");
		 dummy = printi( middle+1);
		 dummy = prints("\n");
		 last = -10;
		 found = 1;
	      }
	      else
		 last = middle - 1;
	 
	      middle = (first + last)/2;
	   }
	   if(found == 0)
	   {
	   	dummy = prints("The element searched for was not found.\n");
	   }
	   return 0;   
}
