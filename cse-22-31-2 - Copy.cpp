/*&write a program to calculate precentage of marks of a student by 
taking input marks obtained by the student in five subjects.
assume maximum marks as 500.*/
#include<stdio.h>
int main()
{
	float m,ph,c,e,h,sum,p,total=500;
	
	printf("enter five marks\n");
	scanf("%f%f%f%f%f",&m,&ph,&c,&e,&h);
	sum=m+ph+c+e+h;
	p=(sum/total)*100;
	printf("%f",p);
	return 0;
}

