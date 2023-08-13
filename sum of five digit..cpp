#include<stdio.h>
int main()
{
   int num,a,b,c,d,e,s;
	printf("enter a five digit number\n");
	scanf("%d",&num);
	if(num<10000||num>99999)
	{
	printf("invalid number");
	return 0;
	}
	
	a=((num%1000)%100)%10;
	b=((num%1000)%100)/10;
	c=(num%1000)/100;
	d=(num/1000)%10;
	e=(num/10000);
	s=a+b+c+d+e;
	printf("%d\n",s);
	return 0;
}
