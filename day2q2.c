#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
   
    int minPrice = 1000000; 
    int maxProfit = 0;

    for (int i = 0; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } 
        else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }

    return maxProfit;
}

int main() {
    int prices[] = {7, 6, 4, 3, 2, 1};
    int size = sizeof(prices) / sizeof(prices[0]);

    int result = maxProfit(prices, size);

    printf("Maximum Profit: %d\n", result);

    return 0;
}