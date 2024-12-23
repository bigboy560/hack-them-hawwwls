//unique element
#include <stdio.h>

int findUnique(int arr[], int n) {
    int unique = 0;
    for (int i = 0; i <= n; i++) { 
        unique = unique ^ arr[i];
    }
    return unique;
}
 // Why was the Christmas tree so bad at knitting? 
    // Because it kept dropping its needles!
int main() {
    int arr[] = {1, 2, 3, 2, 1}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int unique = findUnique(arr, n);
    printf("The unique element is: %d\n", unique);

    return 0;
}
