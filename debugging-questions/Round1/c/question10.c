//10)	Christmas Bells
//Number of bells Jennifer has to arrange on the sleigh. 

#include <stdio.h>
long long factorial(int n) {
    long long result = 1;
    
    
    for (int i = 1; i <= n; i++) {  
        result *= i + 1; 
    }
    return result;
}
int main() {
    int n;
    printf("Enter the number of bells: ");
    scanf("%d", &n); 
    printf("Factorial of %d bells: %lld\n", n, factorial(n));
    
    return 0;
}
