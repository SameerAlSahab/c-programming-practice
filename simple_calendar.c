#include <stdio.h>

int main() {
int day, month, leapyear;

printf("Enter day as number: ");
scanf("%d", &day);

switch (day) {
        case 1: printf("Sunday\n"); break;
        case 2: printf("Monday\n"); break;
        case 3: printf("Tuesday\n"); break;
        case 4: printf("Wednesday\n"); break;
        case 5: printf("Thursday\n"); break;
        case 6: printf("Friday\n"); break;
        case 7: printf("Saturday\n"); break;
        default: printf("Invalid input! Enter a number between 1 and 7.\n");
}

printf("Enter month as number: ");
scanf("%d", &month);


switch (month) {
  case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    printf("31 days"); break;
  case 4: case 6: case 9: case 11:
    printf("30 days"); break;
  case 2:
  printf("Is it a leap year? [0 for false and 1 for true]: ");
  scanf("%d", &leapyear);

    if (leapyear == 1) {
      printf("29 days.");
    }
    else {
      printf("28 days.");
    }
    break;
  default:
    printf("Invalid number");
    return 0;
}
  
return 0;
}
