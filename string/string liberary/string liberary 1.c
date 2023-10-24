#include<stdio.h>
int main()
{
	char s[4][10]={"bhopal","pune","jaipur","goa"};
	
	//printf("enter 4 name :");
//	fgets(s,40,stdin);
	
	printf("%s",&s[0],&s[0]);
	return 0;
}
 