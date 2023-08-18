#include<stdio.h>
int main()
{
float M1;
float M2;
float M3;
float M4;
float M5;
float percentage;
printf("marks in maths");
scanf("%f",&M1);
printf("marks in physics");
scanf("%f",&M2);
printf("marks in chemistry");
scanf("%f",&M3);
printf("marks in history");
scanf("%f",&M4);
printf("marks in urdu");
scanf("%f",&M5);
float Total=M1+M2+M3+M4+M5;
printf("percentage is:%f",100*Total/500);
return 0;
}



