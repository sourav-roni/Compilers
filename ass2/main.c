#include "myl.h"

int main()
{
	int a,a_s;
	char *te = "Hello World\n";
	char * er = "Error \n";
	int t;
	char *sp = "\n";
	int x = prints(te);
	char *s = "The number of characters printed above is ";
	int y = prints(s);
	y = printi(x);
	t = prints(sp);
	char *s1 = "Enter the integer : ";
	char *s2 = "Enter the float :";
	int z = prints(s1);
	a = readi(&a_s);
	if(a_s==0)
	{
		x = printi(a);
		t = prints(sp);
		y = prints(s);
		y = printi(x);
		t = prints(sp);
	}
	else
	{
		y = prints(er);
	}
	float b;
	int b_s;
	z = prints(s2);
	b_s = readf(&b);
	if(b_s==0)
	{
		x = printd(b);
		t = prints(sp);
		y = prints(s);
		y = printi(x);
		t = prints(sp);
	}
	else
	{
		y = prints(er);
	}
 	return 0;
}
