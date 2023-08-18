#include<stdio.h>
int main()
{
	float x,y;
	
	printf("enter x coordinate and y coordinate \n");
	scanf("%f%f",&x,&y);
	if(x==0&&y==0)
	printf("origin");
	else
    if(x>0&&y>0)
	printf("first quardant\n");
	else if(x<0&&y>0)
       printf("second quardant\n");
     else if(x<0&&y<0)
        printf("third quardant");
     else if(x>0&&y<0)
            printf("fourth quardant");

	return 0;
}

