// calculate electric bill 

#include<stdio.h>
#include<string.h>
int main()
{
	int consumer_num;
	float cur_reading,pre_reading,amount=0.0,units;
	char consumer_name[30],connection_type[30];
	
	printf(" enter consumer number :");
	scanf("%d",&consumer_num);
	printf(" enter consumer name:");
	scanf("%s",consumer_name);
    printf(" enter connection type (domestic or commerical):");
    scanf("%s",connection_type);
    printf(" enter previous month reading:");
    scanf("%f",&pre_reading);
    printf(" enter current month reading: ");
    scanf("%f",&cur_reading);
    
    //unit calculation
	units=cur_reading-pre_reading; 
    
	if(strcmp(connection_type,"domestic")==0)
    {
//    	printf("Electricity bill")
//		printf("\n\nconnection type is domestic");
//    	printf("\n consumer number :%d",consumer_num);
//    	printf("\n consumer name :%s",consumer_name);
    	
    	if(units<=100){
		
    	 amount=units*1;
//    	 printf("\n amount to be paid :%f",amount);
       }
    	else if(units<=200)
    	{
    		
		 amount=100*1+(units-100)*2.5;
//    	 printf("\n amount to be paid :%f",amount);
        }
    	else if(units<=500){
		
    	 amount=100+100*2.5+(units-200)*4;
//       	 printf("\n amount to be paid :%f",amount);
       }
		else
	    {
		  amount= 100+100*2.5+300*4+(units-500)*6;
//		  printf("\n amount to be paid :%f",amount);   	
	    }
    }
	else if(strcmp(connection_type,"commerical")==0)
	{
//		printf("\n\nconnection type is commerical");
//    	printf("\n consumer number :%d",consumer_num);
//    	printf("\n consumer name :%s",consumer_name);
    	
    	if(units<=100){
		
    	 amount=units*2;
//    	 printf("\n amount to be paid :%f",amount);
      }
    	else if(units<=200){
		
    	 amount=100*2+(units-100)*4.5;
//    	 printf("\n amount to be paid :%.2f",amount);
     }
    	else if(units<=500)
    	{
		 amount=200+100*4.5+(units-200)*6;
//    	 printf("\n amount to be paid :%f",amount);
       }
		else{
		
		 amount= 200+100*4.5+300*6+(units-500)*7;
//		 printf("\n amount to be paid :%f",amount);
	  }
   }
  else
    printf("invalid connection type:");
        printf("\n\nElectricity bill");
        printf("\n connection type is %s",connection_type);
    	printf("\n consumer number :%d",consumer_num);
    	printf("\n consumer name :%s",consumer_name);
    	printf("\n previous month reading:%.2f",pre_reading);
    	printf("\n current month reading:%.2f",cur_reading);
    	printf("\n unit comsumed:%.2f",units);
    	printf("\n amount to be paid :%.2f",amount); 
	return 0;
}