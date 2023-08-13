// factorial of enter nnumber
#include<stdio.h>
//factorial of enter number
int main()
{
int i,a,b=1;
printf("enter a number for factorial :");
scanf ("%d",&a);
for(i=1;i<=a;i++) 
{
  b=b*i;
	
}
printf ( "factorial of a number is %d\n",b ) ;
 
return 0 ;
}