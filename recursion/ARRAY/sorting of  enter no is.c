#include<stdio.h>

 int main()
{
	
int i,j,temp,a[20],n;
	printf("\nEnter no of elements in array :");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{
	printf("\nEnter elements of array :");
	scanf("%d",&a[i]);
   }
	
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
		
	}printf("\n\nsorting of given number :");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
	return 0;
	
}
