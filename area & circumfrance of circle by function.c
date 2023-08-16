#include<stdio.h>
void area_cr(float r,float *ar,float *cr);
int main()
{
	float ar,cr,r;
	
	printf("enter a ridus of circle \n ");
	scanf(" %f",&r);
	
	area_cr(r,&ar,&cr);
	printf("area of circle = %f \n circumfarance of circle= %f",ar,cr);
	return 0;
}
void area_cr(float r,float *ar,float *cr)
{

	
	*ar=3.14*r*r;
	* cr=3.14*r*2;
	
}