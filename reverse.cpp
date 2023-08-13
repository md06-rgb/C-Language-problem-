#include<stdio.h>
#include<math.h>
int main()
{
int num,a,n,b,c;
int d,r; 

printf("\n enter a 5 digit number:"); 
scanf("%d",&num);
if(num<9999||num>99999){

	printf("invalid number");
	return 0;
}


a = num % 10; 
n=(num/10)%10;
b=(num/100)%10;
c=(num/1000)%10;
d=(num/10000); 
r=a*10000+n*1000+b*100+c*10+d;
printf("the reverse of the 5 digits is %d\n",r);

return 0;
}
