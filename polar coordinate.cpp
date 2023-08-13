#include<stdio.h>
#include<math.h>
int main()
{
float x,y;
float theta,r; 

printf("\n enter x & y coordinate:"); 
scanf("%f%f",&x,&y);
r=sqrt(x*x+y*y);
theta=atan2(y,x);
theta=theta*180/3.14;
	printf("polar coordinater r=%f theta=%f",r,theta);
	return 0;
}