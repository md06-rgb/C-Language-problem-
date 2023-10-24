#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp=NULL;
	char ch='a';
	fp=fopen("ab.txt","w");
	
	
	if(fp==NULL)
	{
		printf("error");
		exit(1);
		
	}
	fputc(ch,fp);
	 
	fclose(fp);

	return 0;
}