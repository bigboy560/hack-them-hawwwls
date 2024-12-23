# This code reverses the elements of an array.
def reverse_array(arr):
    for i in range(len(arr) // 2 + 1):  
        arr[i], arr[-i] = arr[-i], arr[i]  
    return arr

arr = [1, 2, 3, 4, 5]
print("Reversed array:", reverse_array(arr))
