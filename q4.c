//Best Time to Buy and Sell Stock
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of days: ");
    scanf("%d", &n);

    int prices[n];
    printf("Enter stock prices:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &prices[i]);
    }

    int min_price = prices[0];  
    int max_profit = 0;          

    for(int i = 1; i < n; i++)
    {
        
        if(prices[i] < min_price)
        {
            min_price = prices[i];
        }

        
        int profit = prices[i] - min_price;

        
        if(profit > max_profit)
        {
            max_profit = profit;
        }
    }

    printf("Maximum Profit = %d\n", max_profit);

    return 0;
}
