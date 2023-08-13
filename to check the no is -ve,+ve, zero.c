//to check the no. is -ve,+ve,zero.
#include<stdio.h>
int main()
{
	int num;
	printf("enter a number\n");
	scanf("%d",&num);
	switch(num<0)
	{
	    case 1:
	       printf("%d is negative\n",num);
	         break;
	  	  case 0:
    switch(num>0)
     {
	    case 1:
	       printf("%d is positive\n",num);
	         break; 
	      case 0:
	       printf("%d is zero\n",num);
	         break;
	      defualt:
	      printf("invalid number\n");	
      }
      break;
    }
return 0;
}