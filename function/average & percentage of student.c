#include<stdio.h>
void function(float *av,float *per)
{
	int i,sm=0,a[3];
	float n;
	printf("Enter no. of marks :");
	scanf("%f",&n);
	
	printf("Enter marks of student :");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sm=sm+a[i];
		
	}
	 
	 *av=sm/n;
	  *per=sm/n;
}
int main()
{
	float av,per;
	
	function(&av,&per);
	printf("average =%f\n percentage =%f",av,per);
	
	return 0;
}