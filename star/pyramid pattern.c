#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=9;j>=1;j--)
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