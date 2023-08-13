#include<stdio.h>
int main()
{
  
  float bs,gs,a,d;
  printf("enter basic salary\n");
  scanf("%f",&bs);
  a=0.4*bs;
  d=0.2*bs;
  gs=bs+a+d;
  printf("%f\n",gs);
  return 0;
}