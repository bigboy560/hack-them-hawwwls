/*A workshop needs to calculate the total weight of gifts being packed. Each gift has a specific weight, and the weights are stored in an 
array(or list in Python). Santa wants to exclude gifts weighing less than 5 kg (to save on shipping small items) but due to a logical error,
  the program miscalculates the total weight.*/
#include <stdio.h>
int main() {
    int gift_weights[] = {4, 7, 2, 8, 6}; 
    int num_gifts = 5; 
    int total_weight = 0;
    for (int i = 0; i < num_gifts; i++) {
        if (gift_weights[i] < 5) 
            total_weight += gift_weights[i];
    }
    printf("Total weight of selected gifts: %d kg\n", total_weight);
    return 0;
}



// Why did Santa's helper see the doctor? 
    // Because he had low "elf" esteem! 