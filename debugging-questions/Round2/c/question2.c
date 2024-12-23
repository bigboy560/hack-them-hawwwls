// This code reverses the elements of an array.
#include <stdio.h>

void reverse_array(int arr[], int n) {
    for (int i = 0; i <= n / 2; i++) { 
        int temp = arr[i];
        arr[i] = arr[n - i]; 
        arr[n - i] = temp;
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverse_array(arr, n);
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
