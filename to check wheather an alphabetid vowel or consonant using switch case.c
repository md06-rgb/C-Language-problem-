/*to check wheather an alphabetid vowel or consonant using switch case*/
#include<stdio.h>
int main()
{
	char alp;
	printf("enter an alphabet [a-z]&[A-Z]:");
	scanf("%c",&alp);
	switch(alp)
	{
		case 'A':
		case 'a':
	    	printf("vowel");
		break;
		
		case 'E':
		case 'e':
	    	printf("vowel");
		break;
		case 'I':
		case 'i':
	    	printf("vowel");
		break;
		case 'O':
		case 'o':
	    	printf("vowel");
		break;
		case 'U':
		case 'u':
	    	printf("vowel");
		break;
		default:
		printf("consonant");
	}
	return 0;
	
	
}
