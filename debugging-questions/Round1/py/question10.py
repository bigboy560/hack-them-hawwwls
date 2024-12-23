
#10)	Christmas Bells
#Number of bells Jennifer has to arrange on the sleigh. 

def factorial(n):
    result = 1
    
    for i in range(1, n + 1):
        result *= i + 1  
    return result
n = int(input("Enter the number of bells: "))  
print(f"Factorial of {n} bells: {factorial(n)}")
