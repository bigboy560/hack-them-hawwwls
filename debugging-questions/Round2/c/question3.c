// This code checks if a given number is a prime number.
#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 1; 
    for (int i = 2; i <= n / 2; i++) { 
        if (n % i == 0) {
            return 1; 
        }
    }
    return 0; 
}
  // What do you get if you cross a Christmas tree and an iPad? 
    // A pine-apple!
int main() {
    int num = 29;
    if (is_prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n");
    }
    return 0;
}
