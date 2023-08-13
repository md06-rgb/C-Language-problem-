//point lies on origin or x axis or y axis
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter x and y coordinate \n");
	scanf("%d%d",&x,&y);

	if((x==0)&&(y!=0))
	printf("point lies on y axis");
	else
		if((x==0)&&(y==0))
			printf("point lies on origin \n");
		else 
		    if((x!=0)&&(y==0))
			printf("point lies on x axis");
	
	
	
	return 0;
}