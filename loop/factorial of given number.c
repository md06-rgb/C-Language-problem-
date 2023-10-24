#include<stdio.h>
int main()
{
	int i,n,fac=1;

	printf("Enter a number of terms in series :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
 	fac=fac*i;
		
	printf("factorial of given number =%d",fac);
	
	return 0;
}