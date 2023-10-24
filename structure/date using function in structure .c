#include<stdio.h>

struct date
{
	int d,m,y;
};
struct date inputdate();
 int main()
{
	struct date d1;  //declare variable
    	d1=inputdate();   //function call

	   printf("%d-%d-%d",d1.d,d1.m,d1.y);  //we can use %d/%d/%d
	 return 0;
}
struct date inputdate()
{
	struct date d2;
	printf("\nEnter date :");
	scanf("%d/%d/%d/",&d2.d,&d2.m,&d2.y);
	
	return d2; //return d2 value for d1
	
}