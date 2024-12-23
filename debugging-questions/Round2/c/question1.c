// This code checks if a given string is a palindrome.
#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) { 
        if (str[i] != str[len - i]) { 
            return 0; 
        }
    }
     // Why did the gingerbread man go to the party? 
    // Because he was "baked" to have fun!
    return 1; 
}

int main() {
    char str[100];
    printf("Enter a string: ");
    //use input as madam or whatevaaa just saying 
    scanf("%s", str);
    if (is_palindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
