//to check whether three point are co-linear 

#include<stdio.h>

int main()
{
	float x1,y1,x2,y2,x3,y3,m,n;

	   
	    printf("enter value of x1 & y1 coordinate\n");
	scanf("%f%f",&x1,&y1);
	
		printf("enter value of x2 & y2 coordinate\n");
	scanf("%f%f",&x2,&y2);
	
		printf("enter value of x3 & y3 coordinate\n");
	scanf("%f%f",&x3,&y3);

	m=(x2-x1)/(y2-y1);
	n=(x3-x2)/(y3-y2);
  
if(m==n)
 
	printf("point are co-linear\n");
else

    printf("point are not co-linear\n");
}
	
