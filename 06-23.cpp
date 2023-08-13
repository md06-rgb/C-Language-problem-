#include<stdio.h>
int main()
{
float ph,ch,mt,bio,en,total=500,sum,per;
printf("enter the  marks of physics\n");
scanf("%f",&ph);
printf("enter the  marks of chemistry\n");
scanf("%f",&ch);
printf("enter the  marks of math\n");
scanf("%f",&mt);
printf("enter the  marks of bio\n");
scanf("%f",&bio);
printf("enter the  marks of english\n");
scanf("%f",&en);
sum=(ph+ch+mt+bio+en)/500.0;
per=sum*100.0;
printf("percentage is %f\n",per);
return 0;
}