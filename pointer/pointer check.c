#include<stdio.h>
int main()
{
	int i,*j;
	int a[]={24,34,12,44,56};
	j=&a[0];
	for(i=0;i<=4;i++,j++,j++){
	printf("address =%u element=%d\n",j,*j);
	 j++;
}
return 0;
}