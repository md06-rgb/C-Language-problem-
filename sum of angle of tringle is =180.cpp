//to check tringle is valid or not 

#include<stdio.h>
 int main()
{
	float ang1,ang2,ang3,tri;
    printf("enter three angle of triangle:");
    scanf("%f%f%f",&ang1,&ang2,&ang3);
    tri=ang1+ang2+ang3;
   // tri=tri*3.14/180;
    if(tri==180)
    printf("triangle is valid");
    else
    printf("triangle is invalid");
		return 0;
}