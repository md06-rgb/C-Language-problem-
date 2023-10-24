#include<stdio.h>
int main()
{
	int i,n=5,j;
	for(i=1;i<=4;i++)
	{
		for(j=n;j>=1;j--)
		{
		    if(i>=j)
			printf("* ");
			else
			printf(" ");
		
	   }
		printf("\n");
	}
	return 0;
}