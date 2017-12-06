/*Name : Sourav Pal
  Roll : 14CS10062	
  Assignment : 4
*/ 

inline void p(int i)
{
	printf("integer = %d.\n",i);
}

/*typedef struct comple
{
	signed short real;
	unsigned long __ima;
}comple;*/

/*union Data {
   int i;
   float f;
   char str[20];
} data;*/

int main()
{
	auto int x=0;
	const int a[2] = {1,2};
	char * c="Sourav Pal\n";
	int y = x+ 5;
	printf("x = %d, y = %d\n",x,y);
	printf("%s",c);
	int i,j=2,k=1;
	label: for(i=0;i<=2;i++)
	{
		if(i==0)
		{
			while(k!=0)
			{
				printf("Hello World\n");
				k--;
			}
			switch(j)
			{
				case 1 :
					printf("This is one.\n");				
					break;
				case 2 :
					printf("This is two.\n");
					break;
				default :
					goto label;
					break;
			}
		}
		else if(i==1)
		{
			j--;
			continue;
		}
		else
		{
			k = x>>1;			 
		}
	}
	int z = x<<5;
	i = i + 10;
	do
	{
		printf("Hi!!\n");
		i--;
	}while(i>5);
	double d = 12.56;
	float f = 18e-89;
	//enum Days { sun, mon, tue, wed, thu, fri, sat };
	extern int eint;
	p(i);
	static 	long l = 8956.123;
	register int rint  = 89;
	char c1 = 'S';
	int * p =&a;
	printf("%d\n",*p);
	comple * comp ;
	//comp = (comple *)malloc(1*sizeof(comple));
	volatile int vola = 5;
	_Bool t ;
	_Complex complq ;
	_Imaginary imag ;
	//enum Punctuators {~, ! ,/ ,% ,<= ,>= ,== ,!= ,^ ,| ,&& ,|| ,? ,... ,*= ,/= ,%= ,+= ,-= ,<<= ,>>= ,&= ,^= ,|= ,# };*/
	return 0;
}
