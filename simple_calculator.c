#include <stdio.h>

int main() {
  float num1, num2, ans;
  char mode;

printf("Enter two numbers: ");
scanf("%f %f", &num1, &num2);

printf("What to you want to do? [+,-,/,x,%]: ");
scanf(" %c", &mode); // a blank gap before %c means it will skip newline or enters without the operator , otherwise it would go default 

switch (mode) {
case '+':
ans = num1 + num2;
break;
case '-':
ans = num1 - num2;
break;
case 'x':
ans = num1 * num2;
break;
case '/':
ans = num1 / num2;
break;
default:
printf("Unsupported operation");
return 0;
}

printf("Result is %.2f", ans);
return 0;
}



