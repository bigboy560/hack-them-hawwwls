#unique element
def find_unique(arr):
    unique = 0
    for i in range(len(arr) + 1):  
        unique = unique ^ arr[i]   
    return unique
 # Why was the Christmas tree so bad at knitting? 
    # Because it kept dropping its needles!
arr = [1, 2, 3, 2, 1]  
print("The unique element is:", find_unique(arr))
