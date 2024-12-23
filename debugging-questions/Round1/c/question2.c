// 2) Christmas Tree Decoration:
// Sarah needs to decorate a Christmas tree. Each tree is represented as a string, 
// where '*' represents a decoration and ' ' (space) represents an empty spot. 
// The program should decorate the tree by adding decorations in the empty spots (' '). 
// However, there's a bug in the program that prevents the tree from being decorated correctly.


#include <stdio.h>
void decorate_tree(char tree[], int size) {
    for (int i = 0; i < size; i++) {
        if (tree[i] == ' ') {  
            tree[i] = '*';
        }
    }
}
// What do you call an elf who sings? 
    // A wrapper!
int main() {
    char tree[] = "  *   *  *   ";  
    int size = sizeof(tree) / sizeof(tree[0]);
    decorate_tree(tree, size);
    printf("Decorated Tree: %s\n", tree);
    return 0;
}

