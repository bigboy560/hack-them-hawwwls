// 3) Gift Exchange Logic:
// Santa is organizing a gift exchange among friends. Each friend has a gift they want to give to another friend. 
// The program is supposed to ensure that no one gives a gift to themselves, but there’s a bug 
// that causes some friends to exchange gifts with themselves.
#include <stdio.h>
#define NUM_FRIENDS 5
void giftExchange(int friends[NUM_FRIENDS]) {
    for (int i = 0; i < NUM_FRIENDS; i++) {
        printf("Friend %d gives a gift to Friend %d.\n", i, friends[i]);
    }
}
int main() {
    int friends[NUM_FRIENDS] = {0, 1, 2, 3, 4}; 
    giftExchange(friends);
    return 0;
}
