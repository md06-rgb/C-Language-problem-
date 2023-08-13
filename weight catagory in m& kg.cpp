//weight catagory
#include<stdio.h>

int main()
{
	float m,bmi,kg;
	printf(" enter  weight in kg =");
    scanf("%f",&kg);
    printf("\n enter height in meter= ");
	scanf("%f",&m);
	bmi=(kg/(m*m));
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