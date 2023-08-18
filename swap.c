#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter two number a and b:");
	scanf("%d",&a);
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("after swapping %d %d",a,b);
	return 0;
}
	

