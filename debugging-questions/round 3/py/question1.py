#The given Python code is supposed to implement basic operations for a BST: insertion and in-order traversal. 
# However, the code has several logical errors that cause it to malfunction. 
# Participants must debug the program and fix the errors to make it work as intended.
class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def insert(root, data):
    if root is None:
        return Node(data)
    if data < root.data:
        insert(root.left, data)  
    elif data > root.data:
        insert(root.right, data)  
    return root


def in_order_traversal(root):
    if root is not None:
        in_order_traversal(root.left)
        print(root.data, end=" ")
        in_order_traversal(root.right)


if __name__ == "__main__":
    values = [50, 30, 70, 20, 40, 60, 80]
    root = None

    for i in range(len(values) + 1):  
        root = insert(root, values[i])

    print("In-order Traversal of the BST:")
    in_order_traversal(root)

    del root  
