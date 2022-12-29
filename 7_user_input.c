#include <stdio.h>

int main() {
    double stock_price;
    double stock_qty;

    char ticker[25]; // stock ticker

    printf("Enter the stock's ticker.\n");
    scanf("%s", &ticker);

    printf("Enter the stock's purchase price.\n");
    scanf("%lf", &stock_price);

    printf("Enter the quantity of stock purchased.\n");
    scanf("%lf", &stock_qty);

    double total_cost = stock_price * stock_qty;

    printf("You purchased %s stock and your total cost is $%.2lf\n", ticker, total_cost);

    return 0;
}