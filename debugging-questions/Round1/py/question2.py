# 2) Christmas Tree Decoration:
# Sarah needs to decorate a Christmas tree. Each tree is represented as a string, 
# where '*' represents a decoration and ' ' (space) represents an empty spot. 
# The program should decorate the tree by adding decorations in the empty spots (' '). 
# However, there's a bug in the program that prevents the tree from being decorated correctly.
def decorate_tree(tree):
    tree_list = list(tree)
    for i in range(len(tree_list)):
        if tree_list[i] == ' ':
            tree_list[i] = '*'
    return ''.join(tree_list)

tree = "  *   *  *   "
decorated_tree = decorate_tree(tree)
print(f"Decorated Tree: {decorated_tree}") 



 # What do you call an elf who sings? 
    # A wrapper!