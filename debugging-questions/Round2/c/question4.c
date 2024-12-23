// This code counts the number of words in a given string.
#include <stdio.h>
#include <string.h>

int count_words(char str[]) {
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            count++; 
        }
    }
    return count; 
}

int main() {
    char str[] = "Merry   Christmas and Happy Coding!";
    printf("Word count: %d\n", count_words(str));
    return 0;
}
