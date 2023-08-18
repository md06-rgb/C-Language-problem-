//write a program to calculate the sum of 3 digit of a number
#include<stdio.h>
int main()
{
	int a,b,c,e,s;
	printf("enter four digit number\n");
	scanf("%d",&a);
	if(a<999||a>9999)
{
	printf("invalid number");
	return 0;
}
		b=a%10;
		c=(a%100)%10;
		e=(a%10)/10;
		s=a/1000;
		printf("%d%d%d%d\n",b,c,e,s);
	
	
	return 0;
}
