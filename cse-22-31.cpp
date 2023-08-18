//write a program to calculate the sum of 3 digit of a number
#include<stdio.h>
int main()
{
	int a,b,c,e,s;
	printf("enter three digit number\n");
	scanf("%d",&a);
	if(a<99||a>999)
{
	printf("invalid number");
	return 0;
}
		b=a%10;
		c=(a/10)%10;
		e=a/100;
		s=b+c+e;
		printf("sum of three digit is %d",s);
	
	
	return 0;
}
