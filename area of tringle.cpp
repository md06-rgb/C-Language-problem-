//area of tringle
#include<stdio.h>
#include<math.h>
int main()

{
	float a,b,c,s,area;
	printf("enter a three side of tringle\n");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*((s-a)*(s-b)*(s-c)));
	printf("area of tringle is %f\n",area);
	return 0;
}