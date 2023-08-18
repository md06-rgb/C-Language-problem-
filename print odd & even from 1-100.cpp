//print odd & even from 1-100

#include<stdio.h> 
int main()
{
	int i=0;
  printf("even number 1 to 100 are :");
	while(i<=100)
	{
		
	printf(" \n %d\n",i);
	  i=i+2;
	   
	}
		printf("\n odd number 1 to 100 are :");
		i=1;
		while(i<=100)
	{
	printf(" \n %d\n",i);
	  i+=2;
	}
	return 0;
}
