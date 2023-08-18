#include<stdio.h>
int main()
{
 
float s,tax;
printf("enter income\n");
scanf("%f",&s);
if(s<150000)
printf("no tax\n");
else
if(s>150001&&s<=300000)
 {
  tax=(s-150000)*0.1;
  printf("tax is\t%f\n",tax);
 }
else if(s>300001&&s<=500000)
  {
	tax=(s-150000)*0.1;
	printf("tax is\t%f\n",tax);
	
  }
else if(s>500000)
   {
    tax=(s-150000)*0.1;
	printf("tax is\t%f\n",tax);	
   }
 return 0;
}
