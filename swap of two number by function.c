//swap of two number by function
#include<stdio.h>
void swap(int,int);
int main()
{
	int a,b;
	printf("Enter a two number a & b :");
	scanf("%d%d",&a,&b);
	swap(a,b);
//	return 0;
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("swap of enter number is a=%d b=%d\n",a,b);
}