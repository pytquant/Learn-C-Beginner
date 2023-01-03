#include <stdio.h>

/*
Use if and else conditional statement to program the below conditions
Buy, Sell and Hold rating on a stock based on its price
Buy if price is below $50
Sell if Price is above $100
Hold between the above price range
*/ 

int main() {
    
    double current_price;
    printf("Enter the current stock price.\n");
    scanf("%lf", &current_price);

    if (current_price > 0 & current_price <= 50) {
        printf("The rating on the stock is a Buy!\n");
    } else if (current_price > 50 & current_price <= 100) {
        printf("The rating on the stock is a Hold!\n");
    } else if (current_price > 100) {
        printf("The rating on the stock is a Sell!\n");
    } else if (current_price == 0) {
        printf("The company is bankrupt and out of business!\n");
    } else {
        printf("Stock price cannot be negative\n");
    }

    return 0;
}