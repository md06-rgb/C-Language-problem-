#include<stdio.h>
struct students
	{
		char name;
		int student_id;
		int class;
		int roll_no;
		
	};
int main()
{
	struct students s1;
	printf("Enter student detail :");
	scanf("%c%d%d%d",s1.name,s1.student_id,s1.class,s1.roll_no);
	return 0;
	
}