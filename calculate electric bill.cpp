#include<stdio.h>
int main()
 {
    int consumerno, pr_reading, cu_reading, units;
    char consumername[50], connectiontype[20];
    float amount = 0.0;
    printf("enter consumer no.: \n");
    scanf("%d", &consumerno);
    printf("enter consumer name:\n ");
    scanf(" %s", consumername);
    printf("enter Previous Month Reading:\n ");
    scanf("%d", &pr_reading);
    printf("enter current month reading:\n ");
    scanf("%d", &cu_reading);
    printf("enter type of eb connection (domestic or commercial): ");
    scanf("%s", connectiontype);

    // Calculate units consumed
    units = cu_reading - pr_reading;

    // Calculate bill amount based on connection type and units consumed
    if (connectiontype, "domestic")
    { 
  	    printf("enter 1");
  	    return 0;
   	}
     
		   if (units <= 100) {
            amount = units * 1;
        } else if (units <= 200) {
            amount = 100 * 1 + (units - 100) * 2.5;
        } else if (units <= 500) {
            amount = 100 * 1 + 100 * 2.5 + (units - 200) * 4;
        } else {
            amount = 100 * 1 + 100 * 2.5 + 300 * 4 + (units - 500) * 6;
        }
       else if (connectiontype, "commercial")
	 {
	 	printf("enter 2");
	 	return 0;
	 }
        if (units <= 100) {
            amount = units * 2;
        } else if (units <= 200) {
            amount = 100 * 2 + (units - 100) * 4.5;
        } else if (units <= 500) {
            amount = 100 * 2 + 100 * 4.5 + (units - 200) * 6;
        } else {
            amount = 100 * 2 + 100 * 4.5 + 300 * 6 + (units - 500) * 7;
        }
       else 
        printf("invalid connection type entered.\n");
        return 0;


    // Display the bill amount
    printf("\n electricity bill\n");
    printf("consumer no.: %d\n", consumerno);
    printf("consumer name: %s\n", consumername);
    printf("previous month reading: %d\n", pr_reading);
    printf("current month reading: %d\n", cu_reading);
    printf("type of eb connection: %s\n", connectiontype);
    printf("units consumed: %d\n", units);
    printf("amount to be paid: Rs. %.2f\n", amount);
	return 0;  

}
