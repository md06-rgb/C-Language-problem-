//write a program to calculate the reverse of 5 digit  number
#include<stdio.h>
int main()
{
	int num,a,b,c,d,e,s;
	printf("enter four digit number\n");
	scanf("%d",&num);
	if(num<10000||num>99999)
{
	printf("invalid number");
	return 0;
}
		a=num%10;
		b=(num/10)%10;
		c=(num/100)%10;
		d=(num/1000)%10;
		e=(num/10000)%10;
		s=a*10000+b*1000+c*100+d*10+e;
		printf("reverse is %d\n",s);
	
	
	return 0;
}
	

