/*
Name : Sourav Pal
Roll No.: 14CS10062
Assignment No.: 5
Date : 23/10/2016
*/
//Testing with multi dimensional arrays and basic conditional statements and CONDITIONAL OPERATOR
//array operations such as elemen wise multiplication and addition are tested

int main();

int ternery(int a,int b);

int ternery(int a,int b)
{
   int c;
   c = (a>b)? a++ :b--;
   c = (a)? a-- : b++;
   return c;

}

int main()
{
   int a[5][3][4];
   double b[8][4][5];
   int c[5][3][4];
   int i ,j,k;
   i = 105;
   int check;
   for(i = 0;i <5;++i)
   {
      for(j = 0; j< 3; ++j)
      {
         for(k = 0;k<4;++k)
         {
              check = ternery(k,j);
              if(check)
              {
                 c[i][j][k] = a[i][j][k] * b[i][j][k];
              }
              else
              {
		 c[i][j][k] = a[i][j][k] + b[i][j][k];
              }
           
         }

      }
   }
   return 0;
}
