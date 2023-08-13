//using switch & function to develop a calculator
#include<stdio.h>
#include<stdlib.h>
int cal(int);
 int main()
{
	int n;
   while(1){
	printf("\n1. Add");
	printf("\n2. Subtract");
	printf("\n3. multiply");
	printf("\n4. Division");
	printf("\n5. Exit");
	printf("\n\n Enter your choice :");
		
	scanf("%d",&n);
   	cal(n);
	return 0;
}
}
   int cal(int n)
  {
	float a,b,c;

    switch(n)
	{
    	case 1:
    	printf("Enter two no.");
	      scanf("%f%f",&a,&b);
    		c=a+b;
	     printf("\n sum is %f",c);
	     break;
	   case 2:
	   	printf("Enter two no.");
	      scanf("%f%f",&a,&b);
    		c=a-b;
	     printf("\n subtraction is %f",c);
	     break;
	    case 3:
	    	printf("Enter two no.");
	      scanf("%f%f",&a,&b);
    		c=a*b;
	     printf("\n multiplication is %f",c);
	     break;
	     case 4:
	   	printf("Enter two no.");
	      scanf("%f%f",&a,&b);
    		c=a/b;
	     printf("\n division is %f",c);
	     break;
	     case 5:
    		exit(0);
	     default :
	     	printf("\ninvalid number");
	     	return 0;
        }//end of switch
 }//end
