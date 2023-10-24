#include<stdio.h>
struct date
{
	int d,m,y;
};
struct date inputdate();
void showdate(struct date);
 int main()
{
	struct date dob[4];  //declare variable
    	int i,d1;
		printf("\nEnter date of birth of 4 person :");
		for(i=0;i<4;i++)
		dob[i]=inputdate();
		
		for(i=0;i<4;i++)
		showdate(dob[i]);
		
	
	 return 0;
}
void showdate(struct date d1)
  {
	 
	 printf("\n%d-%d-%d",d1.d,d1.m,d1.y);  //we can use %d/%d/%d
   }

struct date inputdate()
{
	struct date d2;
	printf("\nEnter date :");
	scanf("%d/%d/%d/",&d2.d,&d2.m,&d2.y);
	
	return d2; //return d2 value for d1
	
}