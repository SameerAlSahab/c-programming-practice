#include <stdio.h>

int main() {

char mode;
float discount, final; 
int amount, notes;

printf("Select mode [D/W]: \n");
scanf("%c", &mode);

switch (mode) {
case 'D':
case 'd':
printf("Enter your purchase amount: \n");
scanf("%d", &amount);

if (amount >= 5000) {
discount=20;
}
else if (amount >= 2000) {
discount=10;
}
else {
discount=0;
}

final = amount - (amount * discount / 100);
printf("You have to pay %.2f BDT with %.f %% discount", final, discount);

return 0;
break;
case 'w':
case 'W':
printf("Enter amount for withdraw. \n");
scanf("%d", &amount);

// Must be between BDT 500 to 50K 
if (amount >= 500 && amount <= 50000 && amount % 500 == 0) {
notes = amount / 500;
printf("Dispensing %d notes of 500 Tk", notes);
}
else {
printf("Invalid amount of money.");
}
return 0;
break;
  default:
  printf("Invalid option selected");
  return 0;
}

return 0;
}

