/*WAP to demonstrate call by value or  call by refrence*/
#include<stdio.h>
void value(int,int);
void ref(int,int);
int main()
{
	printf("1. for call by value : \n");
	printf("2. for call by refreance : \n");
	
	int num;
	printf("enter a number 1 or 2:");
	scanf("%d",&num);
	if (num==1)
	{
	 int a,b;	
	  printf("enter a two number :");
	  scanf("%d%d",&a,&b);
	 value(a,b);
   
    }
    else if (num==2)
    {
    	 int a,b;	
	  printf("enter a two number :");
	  scanf("%d%d",&a,&b);
	 ref(&a,&b);
	  printf("swap of a=%d & b=%d",a,b);
    }
    else
    printf("invalid number");
}
void ref(int *b,int *b)
{
	int t;
	 t=*a;
	*a=*b;
	*b=t;
}
void value(int a,int b)
{
  int t;
  t=a;
  a=b;
  b=t;	
	printf("swap of a=%d & b=%d",a,b);
}
