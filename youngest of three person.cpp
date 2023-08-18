//write a program to calculate the age of three person
#include<stdio.h>
int main()
{
	int num,a,r,s;
	printf("enter age of ram: age of shyam: age of ajay");
	scanf("%d%d%d",&r,&s,&a);
	if(r<s&&r<a)
		printf("ram is younger\n");
		else if(s<a&&s<r)
	printf("shyam is younger\n");
	else if(a<s&&a<r)
	printf("ajay is younger\n");
	return 0;
}
