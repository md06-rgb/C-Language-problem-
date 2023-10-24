#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *fp=NULL;
	char str[25];
	fp=fopen("ab,txt","w");
	
	
	if(fp==NULL)
	{
		printf("error");
		exit(1);
		
	}
	 printf("enter a string:");
	 gets(str);
	//for(int i=0; i!=strlen(str);i++)//we can use also  fputs(str,fp);
	    fputs(str,fp);
	
	fclose(fp);

	return 0;
}