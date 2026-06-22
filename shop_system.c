#include <stdio.h>

int main() {
  float price, quantity, cost, discount, final;

printf("Enter the product price (BDT) : ");
scanf("%f", &price);

printf("Enter the product quantity (pieces): ");
scanf("%f", &quantity);

cost = price * quantity;

if ( cost >= 10000 ) {
   discount=10;
}

else {
   discount=0;
}

final = cost - ( cost * discount / 100 );
printf("The final cost is %.2f with %.f %% discount", final, discount);

return 0;
}
