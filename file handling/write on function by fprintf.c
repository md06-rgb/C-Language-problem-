#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *fp=NULL;
	char str[25];
	int a=1;
	fp=fopen("ab,txt","w");
	
	
	if(fp==NULL)
	{
		printf("error");
		exit(1);
		
	}
	 printf("enter a string:");
	 gets(str);
	// gets() OR for(int i=0; i!=strlen(str);i++) with fputs(str,fp); OR
	    fprintf(fp,"%d %s ",a,str);
	
	fclose(fp);

	return 0;
}