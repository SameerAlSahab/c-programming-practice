#include <stdio.h>

int main() {

int subject;
float cgpa, credits;

printf("Input your bachelors subject (1 for CSE) : ");
scanf("%d", &subject);

switch (subject) {
case 1:
  printf("You are CSE.\n");
  break;
default:
  printf("Sorry your subject is not here!"); 
  return 0;
}

// Here we see if student have criteria 

  float sem1, sem2, sem3;
  printf("Enter the credit number of last 3 semesters: ");
  scanf("%f %f %f", &sem1, &sem2, &sem3);

  credits = sem1 + sem2 + sem3;

if (credits >= 35) {
printf("You have sufficient credits.\n");
}
else {
printf("You do not meet enough credit requirements");
  return 0;
}

printf("Enter your CGPA (total): ");
scanf("%f", &cgpa);

// Safety guard 
if ((cgpa < 0) || (cgpa > 4.00)) {
printf("Invalid input"); 
  return 0;
}

printf("CGPA = %.2f\n", cgpa);
printf("Total Credits = %.1f\n", credits);

if (cgpa == 4.00) { 
printf("You got 100%% scholarship");
}

else if (cgpa >= 3.90) {
printf("You got 75%% scholarship"); 
}

else if (cgpa >= 3.80) {
printf("You got 50%% scholarship");
}

else {
printf("You got no scholarship");
}

return 0;
}




  
    
    
