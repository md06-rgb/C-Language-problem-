/*to check the no is +ve,-ve,0 using switch case*/
#include<stdio.h>
int main()
{
	int num;
	printf("enter a number :");
	scanf("%d",&num);
	switch(num<0)
	{
		case 1:
	      printf("%d is negative \n",num);	
		  break;	
		case 0:	
	    switch(num>0)		
		{
		case 1:
	      printf("%d is positive \n",num);	
		   break;
		   	case 0:
	      printf("%d is zero \n",num);	
	     	break;	
		default:
	      printf("invalid number");	
	    }
	   break;	
	}
	return 0;
	
}

