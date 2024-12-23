// 7) Best Gingerbread Cookie:
// Anna is decorating gingerbread cookies for Christmas, and she has organized the cookies in a list. 
// The best cookie is determined by:
// • If the list has an odd number of cookies, the best cookie is in the middle.
// • If the list has an even number of cookies, we choose the cookie in the middle-left (closer to the start).

#include <stdio.h>
#include <stdlib.h> 
int find_best_gingerbread_cookie(int cookies[], int num_cookies) {
    int middle_index = num_cookies / 2;  
    return cookies[middle_index];
}
int main() {
    int num_cookies;
    printf("Enter the number of gingerbread cookies: ");
    scanf("%d", &num_cookies);
    int *cookies = (int *)malloc(num_cookies * sizeof(int));
    if (cookies == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }
    printf("Enter the gingerbread cookie types (use numbers for simplicity):\n");
    for (int i = 0; i < num_cookies; i++) {
        printf("Cookie %d: ", i + 1);
        scanf("%d", &cookies[i]);
    }
    int best_cookie = find_best_gingerbread_cookie(cookies, num_cookies);
    printf("Best gingerbread cookie: %d\n", best_cookie);
    free(cookies);
    return 0; }
