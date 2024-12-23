// 5) Cake Decoration Pattern:
// The elves are decorating a multi-layer cake for Christmas. 
// Each layer of the cake should be decorated with the same string pattern. 
// The number of layers and the decoration pattern are given, but the program has a logical error in how it prints the decoration for each layer.

#include <stdio.h>
void decorate_cake(int layers, char decoration[]) {
    int i;
    for (i = 0; i < layers; i++) {
        printf("Layer %d decorated with: %c\n", i + 1, decoration[i % 4]); 
    }
}
int main() {
    int layers = 4; 
    char decoration[] = "*#@&";  
    decorate_cake(layers, decoration);
    return 0;
}
