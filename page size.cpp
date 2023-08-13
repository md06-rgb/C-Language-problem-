#include<stdio.h>
int main()
{
	float y;
	int x,length=1189,breadth=841;
	for(x=0;x<9;x++)
	{
		printf("A%d=length is %d: breadth is %d:\n",x,length,breadth);
		y=length;
		length=breadth;
		breadth=length/2.0;
	}
	return 0;
	
}