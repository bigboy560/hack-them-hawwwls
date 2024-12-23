#include <stdio.h>
#include <string.h>
#include <ctype.h>
int are_anagrams(char *str1, char *str2) {
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }
    for (int i = 0; i < strlen(str1); i++) {
        if (strchr(str2, str1[i]) == NULL) {
            return 0;  
        }
    }
    return 1;
}
int main() {
    char str1[] = "Santa";
    char str2[] = "satan";
    if (are_anagrams(str1, str2)) {
        printf("'%s' and '%s' are anagrams!\n", str1, str2);
    } else {
        printf("'%s' and '%s' are not anagrams.\n", str1, str2);
    }
    return 0;
}
