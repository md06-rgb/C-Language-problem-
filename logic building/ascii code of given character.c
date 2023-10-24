// ascii code of input from user read by getch() function  
main()
{
	char c;
	printf("Enter a character:");
	c=getch(); //read input like scanf
	printf("\n%c is %d",c,c);
	getch();
}