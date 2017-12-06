/*
Name : Sourav Pal
Roll No.: 14CS10062
Assignment No.: 5
Date : 23/10/2016
*/
//Testing all iterative statments 
int max(int k, int l)
{
	if(k>l)
	{
		return k;
	}
	else
	{
		return l;
	}
}

int main()
{
   int a,b;
   int i,c;
   a = 10;
   b = 0;
   double d;
   for( i=0;i < a; ++i)
   {
      c = c+a;
      a = a<<1;
      d = max(c,a);
   }
   i = 0;
   do
   {
      c = c - b;
      c = c*b;      
   }while(i<10);
   while(1)       //iterative statement where conditional expression is arithmetic expression
   {
      d++;
      while(d < 10)
      {
         d = d + 1.23;
      }
   }
   return 0;
}
