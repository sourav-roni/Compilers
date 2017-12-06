/*
Name : Sourav Pal
Roll No.: 14CS10062
Assignment No.: 5
Date : 23/10/2016
*/
//tests all major operators if else function calls type conversion

int main();
double f(int a,int b);
double g(int a,int b,int c); 

double f(int a,int b)
{
   
   double c,d;
   c = 0.12;
   if(a>b)
   { 
       d = c+a;      
   }
   else
   {

      d = c-b;
   }
   return d;
}

double g(int a,int b,int c)
{
   double d;
   int e;
   e = a++;
   --e;
   e = e + b;
   d = 1.23;
   e = e * d;
   return e;
}

int main()
{
	double s, t;
	s = f(5,4);
	t = g(7,8,9);
	return 0;
}
