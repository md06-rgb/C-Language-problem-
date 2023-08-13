include#<stdio.h>
void main()
{ 
  float meters,feet,inches,cm,km;
  printf("Enter the distance in km\n");
  scanf("%f",&km);
  meters=km/1000.0;
  cm=km/100000.0;
  feet=km/3280.84;
  inches=km/3937.1;
  printf("%f%f%f%f\n",meters,cm,feet,inches);
  
} 