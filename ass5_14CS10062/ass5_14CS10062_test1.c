/*
Name : Sourav Pal
Roll No.: 14CS10062
Assignment No.: 5
Date : 23/10/2016
*/
//normal function calls are tested
//recursive function calls are also tested 

int squareplus(int a);
int plus(int i,int j,int k);
int main();
int fact(int n);

int squareplus(int a)
{
  int ret;
  ret = a*a;
  ret = ret + plus(a,10,20);
  return ret;
}

int plus(int i, int j ,int k)
{
    if(j>k)
	{
		return (i+j);
	}
    else
	{
		return (i+k);
	}
}

int fact(int n)
{
	if(n==0||n==1)
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
     int i ,d;
     char c;
     int **p;
     i = 20;
     *p = &d;
     **p = 50;
     i = squareplus(i);
     d = d & 1 | 1;
     d++;
     d = d * c;
     d = 6;
     i = fact(d);
    return 0;
}




