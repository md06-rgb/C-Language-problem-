#include<stdio.h>
#include<stdlib.h>
void year(int);
int main()
{
	int yr;
	printf("Enter a year :");
	scanf("%d",&yr);
	
	year(yr);
	return 0;
}
 void year(int yr)
 {
 	if(yr%4==0)
 	printf("leap year is %d",yr);
 	else
 	{
	 printf("not leap year");
 	exit;
    }
 }