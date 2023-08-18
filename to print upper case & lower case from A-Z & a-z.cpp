//to print upper case & lower case from A-Z & a-z

#include<stdio.h>
int main()
{
	char i='A',j='a';
	 printf("upper case\n");
 while(i<='Z')
 {
   printf("\n%c",i);
   i++;	
 }
 printf("\nlower case\n");
	 while(j<='z')
 {
   printf("\n%C",j);
     j++;	
 }
	return 0;
	
	
}
