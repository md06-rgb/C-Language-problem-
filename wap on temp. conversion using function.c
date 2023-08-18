/*wap on temp. conversion using function*/
#include<stdio.h>

void tempt(int num)
{
  	float f,c;
  	if(num==1)
	  {
	  	printf("enter temperature in fahrenheit:");
        scanf("%f",&f);
        c=(f-32)/1.5;
  
  	   printf(" celsius =%f",c);
      }
     else if(num==2)
	  {
	  	printf("enter temperature in celsius :");
        scanf("%f",&c);
        f=c+32*1.5;
  
  	   printf("fahrenheit =%f",f);
      }
    else 
    printf("invalid number ");
    
}
int main()
{
	int num;
	printf("1. for fahrenheit to celsius:\n");
	printf("2. for celsius to fahrenheit:\n");
	

	printf("\n Enter your choice number 1 or 2 :");
	scanf("%d",&num);
	
   tempt( num);
	return 0;
}
