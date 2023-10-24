#include<stdio.h>
int main()
{
	int n;
	printf("enter a number :");
	scanf("%d",&n);
	
	switch(n>0)
	{
		case 1:
			printf("%d is positive\n",n);
			break;
		case 0:
			switch(n<0)
			{
				case 1:
				printf("%d is negative\n",n);
				break;
			  case 0:
			  	printf("%d is zero\n",n);
			  	break;
			  	default :
			  		printf("invalid number \n");
			  		
			}
				break;
	}
	return 0;
}