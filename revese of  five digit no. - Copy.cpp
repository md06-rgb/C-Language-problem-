#include<stdio.h>
int main()

{
	int num,x,y;
	printf("enter a five digit number\n");
	scanf("%d",&num);
	if(num<10000||num>99999)
	{
		printf("invalid number");
		return 0;
	}
	while(num!=0)
 {
	y=num%10;
	x=x*10+y;
	num=num/10;
 }
	printf("reverse is %d\n",x);
	return 0;
	
}