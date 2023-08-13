//insured driver using ligical operator
#include<stdio.h>
int main()
{
	int age;
	char ms,sex;
	printf("enter ms:");
		scanf("%c\n",&ms);
	printf("enter sex:");
		scanf("%c\n",&sex);
	printf("enter age:");
	scanf("%d\n",&age);
	
 if((ms=='M')||(ms=='U'&& sex=='M'&& age>30) ||(ms=='U'&& sex=='F' && age>25))
	//marital status== A is married & u is unmarried
	
	printf("driver insured\n");
	else
		printf("driver not insured\n");
	
	
	return 0;
}