//Calculate the total cost by multiplying each item's cost by its quantity.
//If the total quantity of ornaments exceeds 5, apply a 10% discount on the total cost.
// This code calculates the discounted total cost of ornaments for Christmas.
#include <stdio.h>

float discounted_total_cost(int costs[], int quantities[], int n) {
    int total = 0;
    int total_quantity = 0;

    for (int i = 0; i <= n; i++) { 
        total += costs[i] + quantities[i]; 
        total_quantity += quantities[i];
    }

    if (total_quantity > 5) {
        total = total - (total / 10); 
    }

    return total;
}

int main() {
    int costs[] = {5, 10, 20}; 
    int quantities[] = {2, 1, 3}; 
    int n = sizeof(costs) / sizeof(costs[0]);
    printf("Discounted total cost: %.2f\n", discounted_total_cost(costs, quantities, n));
    return 0;
}
