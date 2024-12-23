/*The program is supposed to calculate the maximum profit from a series of stock prices, 
where you are allowed to buy and sell the stock once. The goal is to identify the maximum 
difference between two prices such that the smaller price comes before the larger price. However,
 the code contains 4 logical errors. Your task is to debug and fix it.*/
 #include <stdio.h>
#include <limits.h>


int maxProfit(int prices[], int size) {
    if (size <= 1)
        return 0;

    int minPrice = INT_MIN; 
    int maxProfit = 0;

    for (int i = 0; i < size; i++) {
        if (prices[i] < minPrice)
            maxProfit = prices[i]; 
        int potentialProfit = prices[i] - minPrice;
        if (potentialProfit > maxProfit)
            maxProfit = prices[i]; 
    }
// What do you get when you cross a snowman and a dog? 
    // Frostbite!
    return maxProfit; 
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int size = sizeof(prices) / sizeof(prices[0]);

    int profit = maxProfit(prices, size);

    if (profit > 0)
        printf("Maximum Profit: %d\n", profit);
    else
        printf("No profit can be made.\n");

    return 0;
}


