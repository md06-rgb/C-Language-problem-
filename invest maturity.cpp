  //invest maturity
#include<stdio.h>
int main()
{
	int age,im,time;
	float si;
	printf("enter invest amount :");
		scanf("%d",& im);

		if(im<=10000||im>=100000)
        {
			printf("not eligiable ");
		     return 0;
		}
else
      
    {
	 	printf("enter age:");
	    scanf("%d",&age);
	    if(age<=18||age>=55)
	   {
			printf("not eligiable ");
		     return 0;
		}
	     else{
		 
		  if(age<=25) 
         time=30;
     	else if(age>40)
          time=10;
        else
          time=20;
    si=im*5*time/10,0.0;
	printf("\n your maturity will be   %f:",si+im);
    
	}
    }
	
	
	return 0;
}