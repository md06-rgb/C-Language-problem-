/* wap on fibonnaci using function */
#include<stdio.h>

int fibo(int num)
{
  if(num==0)
  return 0;
  else if (num==1)
  return 1;
  else
   return (fibo(num-1) + fibo(num-2));

}
int main()
{
	int num,fib;
	printf("Enter a number :");
	scanf("%d",&num);
	fib=fibo(num);
	printf("fibonnaci number =%d",fib);
	
	return 0;
}
