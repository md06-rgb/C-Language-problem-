#include<stdio.h>
#include<conio.h> 
int main()
{ 
  float f,c;
  printf("Enter the temperature in f\n");
  scanf("%f",&f);
  c=(f-32)*5.0/9;
  
  printf("%f\n",c);
  getch ();
  return 0;
} 