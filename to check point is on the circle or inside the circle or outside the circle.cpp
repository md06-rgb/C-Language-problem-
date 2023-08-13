//point is inside or outside or lies on the circle 
#include<stdio.h>
int main()
{
	int x,y,r,a,b;
	printf("enter x and y coordinate and radius of circle  \n");
	scanf("%d%d%d",&x,&y,&r);
    a=x*x+y*y;
    b=r*r;
	if(a==b)
       	printf("point lies on circle");
	else
	{
			if(a<b)
			      printf("point inside the circle \n");
		else 
			printf("point outside the circle");
    }
	
	return 0;
}