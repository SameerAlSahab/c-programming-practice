/*
This program will check triangle type.
*/

#include <stdio.h>

int main() {
  float ang1, ang2, ang3;
  int side1, side2,  side3;
  int mode;

printf("Triangle Checker v1.0");
printf("Welcome!!!\n");

printf(" [1] Check Triangle \n");
printf(" [2] Quit program\n");

scanf("%d", &mode);

switch (mode) {
case 1:
printf("Input the three angels of the triangles: ");
scanf("%f %f %f", &ang1, &ang2, &ang3);

if ( ang1 + ang2 + ang3 != 180 ) {
printf(" This is not a triangle");
return 0;
}

else {
printf("It is a triangle\n");
}

// Right triangle or not 
printf("Input the three sides of the triangles: ");
scanf("%d %d %d", &side1, &side2, &side3);
  
  if (( side1 * side1 + side2 * side2 == side3 * side3 ) || ( side2 * side2 + side3 * side3 == side1 * side1 ) || ( side1 * side1 + side3 * side3 == side2 * side2 ))
  {
    printf("This is a right triangle"); 
  }
  else {
    printf("This is not right triangle");
      }
  
return 0;
break;
case 2:
printf("Exiting program...");
return 0;
break;
default:
printf("Invalid option");
return 0;
}

return 0;
}
