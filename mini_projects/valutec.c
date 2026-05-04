//valutec
/*
Mini-project: Currency Converter
Hryvnia → Dollar
Exchange rate: 1 USD = 41.50 
*/
#include <stdio.h>

int main() {
float uah_amount;
float usd_amount;

printf("hryvnia to dollars\n");
printf("Enter the amount in hryvnia: ");
scanf("%f", &uah_amount);

// 1 dollar = 41.50 hryvnia
usd_amount = uah_amount / 41.50;

printf("%.2f hryvnia = %.2f dollars\n", uah_amount, usd_amount);

return 0;
}
