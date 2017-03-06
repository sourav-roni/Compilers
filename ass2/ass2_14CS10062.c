#define BUFF 300
#define LEN 1
#define SIZE 30

int prints(char * input)
{
	char buff[BUFF];
	int bytes=0,n;
	while(input[bytes] != '\0')
	{
		buff[bytes] = input[bytes];
		bytes++;
	}
	n = bytes;
	__asm__ __volatile(
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(buff), "d"(bytes)
	);
	return n;
}


int printi(int num)
{
	char buff[BUFF];
	char zero = '0';
	int bytes,i=0,j,k;
	if(num==0)
	{
		buff[i++] = zero;
	}
	else
	{
		if(num<0)
		{
			buff[i++] = '-';
			num = -num;
		}
		while(num)
		{
			int temp = num%10;
			buff[i++] = (char)(zero+temp);
			num = num/10;
		}
		if(buff[0]=='-')
		{
			j = 1;
		}
		else
		{
			j =0;
		}
		k = i-1;
		while(j<k)
		{
			char tempp = buff[j];
			buff[j++] = buff[k];
			buff[k--] = tempp;
		}
	}
	bytes = i;
	__asm__ __volatile__ (
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(buff), "d"(bytes)
	) ; 

	return bytes;
}

int readi(int *eP)
{
	int num = 0;
	int white = 0;
	char prev ;
	char present;
	int isNeg = 0;
	*eP = 0; //Assume that the input is valid
	while(1) //Read one charater at a time and neglet the initial white spaces such as blank, tab and new line.
	{
		__asm__ __volatile__(
			"movl $0, %%eax \n\t"
			"movq $0, %%rdi \n\t"
			"syscall \n\t"
			:
			:"S"(&present), "d"(LEN)
		);
		if(white==0)//This means that all previous characters detected were white spaces
		{	
			if((int)present==32||(int)present==9||present=='\n')//If the current character read is still a new line
			{
				continue;
			}
			if(present=='+'||present=='-'||(present>='0'&&present<='9'))
			{
				white = 1;
				prev = present;
				if(present=='-')
				{
					isNeg = 1;
				}
				else if(present>='0'&&present<='9')
				{
					num = 10*num + (int)(present - '0');
				}
			}
			else
			{
				char temp;
				while(1)
				{
					__asm__ __volatile__(
					"movl $0, %%eax \n\t"
					"movq $0, %%rdi \n\t"
					"syscall \n\t"
					:
					:"S"(&temp), "d"(LEN)
					);
					if((int)temp==32||(int)temp==9||temp=='\n')
					{
						break;
					}
				}
				*eP = 1;
				return 0;
			}
		}
		else
		{
			if((int)present==32||(int)present==9||present=='\n')
			{
				if(prev=='+'||prev=='-'||prev=='.')
				{
					*eP = 1;
					return 0;
				}
				else
				{
					break;
				}
			}
			if(present=='.')
			{
				char temp;
				while(1)
				{
					__asm__ __volatile__(
					"movl $0, %%eax \n\t"
					"movq $0, %%rdi \n\t"
					"syscall \n\t"
					:
					:"S"(&temp), "d"(LEN)
					);
					if((int)temp==32||(int)temp==9||temp=='\n')
					{
						break;
					}
				}
				break;
			}
			else if(present>='0'&&present<='9')
			{
				num = num*10 + (int)(present - '0');
				prev = present;
			}
			else
			{
				//*eP = 1;
				//return 0;
				break;
			}
		}
	}
	if(isNeg==1)
	{
		return -1*num;
	}
	else
	{
		return num;
	}
}

int readf(float *fP)
{
	int ret = 0;
	int white = 0;
	char prev ;
	char present;
	int radix = 0;
	int isNeg = 0;
	float temp = 0.1;
	*fP = 0; 
	while(1) //Read one charater at a time and neglet the initial white spaces such as blank, tab and new line.
	{
		__asm__ __volatile__(
			"movl $0, %%eax \n\t"
			"movq $0, %%rdi \n\t"
			"syscall \n\t"
			:
			:"S"(&present), "d"(LEN)
		);
		if(white==0)//This means that all previous characters detected were white spaces
		{	
			if((int)present==32||(int)present==9||present=='\n')//If the current character read is still a new line
			{
				continue;
			}
			if(present=='+'||present=='-'||present=='.'||(present>='0'&&present<='9'))
			{
				white = 1;
				prev = present;
				if(present=='-')
				{
					isNeg = 1;
				}
				else if(present>='0'&&present<='9')
				{
					*fP = (*fP)*10 + (int)(present - '0');
				}
				else if(present=='.')
				{
					radix = 1;
				}
			}
			else
			{
				*fP = 0;
				return 1;
			}
		}
		else
		{
			if((int)present==32||(int)present==9||present=='\n')
			{
				if(prev=='+'||prev=='-')
				{
					*fP = 0;
					return 1;
				}
				else
				{
					break;
				}
			}
			if(radix==0)
			{
				if(present=='.')
				{
					radix = 1;
				}
				else if(present>='0'&&present<='9')
				{
					*fP = (*fP)*10 + (int)(present - '0');
					prev = present;
				}
				else
				{
					//*fP = 0;
					//return 1;
					break;
				}
			}
			else if(radix==1)
			{
				if(present>='0'&&present<='9')
				{
					*fP = (*fP) + temp*(int)(present - '0');
					prev = present;
					temp =temp/10.0;
				}
				else
				{
					//*fP = 0;
					//return 1;
					break;
				}
			}
		}
	}
	if(isNeg==1)
	{
		*fP = (*fP)*(-1);
	}
	return ret;
}

int printd(float f)
{	
	char buff[SIZE];
	char zero='0';
	float ad;	
	int i = 0, j, k, bytes;
	if(f == 0.0)// this is  to print only 0.000000
	{
		buff[i++] = zero;
		buff[i++] = '.';
		int l;
		for(l = 0;l < 6 ; l++)
			buff[i++] = zero;
	}
	else 
	{
		if(f<0)
		{
 			buff[i++] = '-';
			f = -f;
		}
		ad = f - (int)f;//for storing the fractional part
		int num = f;//for storing the integer part
		while(num)
		{
			int tempo = num%10;
			buff[i++] = (char)(zero+tempo);
			num = num/10;
		}
		if(buff[0] == '-')
		{
			j = 1;
		}	
		else
		{
			j = 0;
		}
		k=i-1;
		while( j<k )//swapping elements
		{
			char f = buff[j];
			buff[j++] = buff[k];
			buff[k--] = f;
		}
		if(ad == 0.0)
		{
			buff[i++] = '.';
			int l;
			for(l = 0;l < 6 ; l++)
				buff[i++] = zero;
		}
		else
		{
		buff[i++] = '.';
		int c,p,rem ;
		p = (ad*1000000);
		for(c = 0 ; c < 6 ; c++)
		{
			rem = p%10;
			p = p/10;
			buff[i++] = (char)(zero+rem);
		}
		k = i-1;
		j = i-6;
		while( j<k )//swapping elements
		{
			char temp = buff[j];
			buff[j++] = buff[k];
			buff[k--] = temp;
		}	
		}
	}
	bytes = i;
	__asm__ __volatile__ (
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(buff), "d"(bytes)
	) ; 
	return bytes;
}

