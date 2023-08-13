#include<stdio.h>
#include<math.h>
int main()
{
   float b,h,a;
	printf("enter three side of tringle\n");
	scanf("%d%d",&b,&h);
	
	a=(1/2.0)*b*h;
	printf("%d\n",a);
	return 0;
}