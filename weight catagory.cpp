//weight catagory
#include<stdio.h>

int main()
{
	float wt,bmi,ht_in;
	printf(" enter height in inches= ");
	scanf("%f",&ht_in);
	printf("\n enter  weight in pound=");
    scanf("%f",&wt);
	bmi=(wt/(ht_in*ht_in))*703;
	printf("bmi is %f\n", bmi);
	if(bmi<18.5)
	printf("under weight\n");
	
	 if(bmi>18.4&&bmi<24.9)
	printf("normal weight\n");
	
	 if(bmi>24.9&&bmi<30)
	printf("over weight\n");
	
	 if(bmi>29.0)
	printf("obese\n");
	
	return 0;
	
	
}