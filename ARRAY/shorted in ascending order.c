#include<stdio.h>
int main()
{
	int a[10],n,i,j,temp;
	printf("how many elements ?\n");
	scanf("%d",&n);
	
	printf("Enter the elements :");
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]); 
	
	printf("shorted elements are:\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
return 0;	
}