#include<stdio.h>
int main()
{
	int num,a,b,c,i;
	printf("enter a five digit number:");
	scanf("%d",&num);
	if(num<=9999||num>=99999)
	{
	printf("invalid number");
	return 0;
	}
	for(i=1;i<=5;i++)
{
	a=num%10;
	b=num/10;
	c=b%10;
}
	return 0;
}
