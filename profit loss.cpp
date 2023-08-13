//profit loss

#include<stdio.h>
int main()
{
	float cp,sp,profit,loss;
    printf("enter cost price:");
    scanf("%f",&cp);
		
	printf("enter selling price:");
    scanf("%f",&sp);
		
		if(sp>cp)
     {
		printf("seller has made profit\n");
		profit=sp-cp;
		printf("profit is %f", profit);
	 }if(sp<cp)
	 {
		printf("seller has made loss\n");
	  loss=cp-sp;
		printf("loss is %f", loss);
     }
     if(sp==cp)
     printf("seller has neither loss nor profit \n");
     
	return 0;	
		
		
}
