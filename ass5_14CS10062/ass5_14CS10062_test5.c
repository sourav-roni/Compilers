/*
Name : Sourav Pal
Roll No.: 14CS10062
Assignment No.: 5
Date : 23/10/2016
*/
//Works with pointers and functions and type conversions in case of array elements and call by reference.

int main();

int  box(int *a,int *b);

int box(int *a,int *b)
{
   int c;
   c = *a;
   c = c + *b;
   return c;
}


int main()
{
   int i,j,k;
   int c,d ;
   d = 20;
   c = 10;
   i = 0;
   int a[5];
   double b[6];
   int *p;
   p = &c;
   *p = 10;                         //pointer assignement
   int **r;
   *r = p;
   **r = 20;
   a[3] = b[2]; 
   d = box(&c,&d);
   return 0;
} 
