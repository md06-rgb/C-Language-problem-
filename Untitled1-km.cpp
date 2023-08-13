#include<stdio.h>
int main()
{ 
  float meters,feet,inches,centi_m,km;
  printf("Enter the distance in km\n");
  scanf("%f",&km);
  meters=km*1000.0;
  centi_m=km*100000.0;
  feet=km*3280.84;
  inches=km*3937.1;
  printf("%f%f%f%f\n",meters,centi_m,feet,inches);
//  printf("The distance in centimeters = %f\n",centi_m); printf("The distance in feet = %f\n",feet);
return 0;
}