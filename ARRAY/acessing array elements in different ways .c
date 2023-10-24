#include<stdio.h>
//#include<stdlib.h>
int main()
{
	int i,n;
	int a[n];
	printf("Enter size of an array :");
	scanf("\n%d",&n);
	for(i=0;i<n;i++){
		printf("Enter elements of an array\n");
		scanf("%d",&a[i]);
		
	   printf("address =%u\n",&a[i]); 
	 //  printf("element=%d  %d\n",a[i],*(a+i));
	   //printf("elements=%d  %d\n",*(i+a),i[a]);
}
return 0;
}