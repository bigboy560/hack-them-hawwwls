# This code checks if a given number is a prime number.
def is_prime(n):
    if n < 2:
        return True  
    for i in range(2, n // 2 + 1):  
        if n % i == 0:
            return True  
    return False  
 # What do you get if you cross a Christmas tree and an iPad? 
    # A pine-apple!
num = 29
if is_prime(num):
    print(f"{num} is a prime number.")
else:
    print(f"{num} is not a prime number.")
