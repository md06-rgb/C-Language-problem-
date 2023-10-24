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
	
	if(ms=='M'|| ms=='m')
    	printf("driver insured");
	else
  {
//	printf("Enter age, sex :");
//	scanf("%d %c\n",&age,&sex);
	if(sex=='M'|| sex=='m')
	{
		if(age>=30)
			printf("driver insured");
			else
				printf("driver not insured");
	}
	else if(sex=='F'||sex=='f')
	{
		if(age>=25)
		printf("driver insured");
		else 
			printf("driver not insured");
	}
 }
return 0;
}