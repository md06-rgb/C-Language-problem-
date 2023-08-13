//area of right angle triangle by function
#include<stdio.h>
void area();
int main()
{
	area();
	return 0;
}
void area()
{
	float b,h,a;
	printf("enter a base & height of right angle triangle :");
	scanf("%f%f",&b,&h);
	a=1/2.0*(b*h);
	printf("area of right angle triangle is %f",a);

}
