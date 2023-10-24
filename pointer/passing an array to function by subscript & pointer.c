//passing an array to function by subscript & pointer
#include<stdio.h>
void dis(int *,int);
void dis1(int [],int);
int main()
{
	int a[5],i;
	for(i=0;i<=4;i++)
	{
		printf("Enter a number :");
		scanf("%d",&a[i]);
		
	}
	printf("\n\nusing pointer\n");
	dis(a,5);  //passing &a[0](address of 1st elements) is same as  name of array.
	printf("\n\nusing subscript\n");
	dis1(a,5);  //passing &a[0](address of 1st elements) is same as  name of array.
	return 0;
}
void dis(int *a,int n)
{
	int i;
   for(i=0;i<n;i++)
	{
		printf("elements =%d\n",*a);
		a++;
    }
	
}
void dis1(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	
			printf("elements =%d\n",i[a]);

}