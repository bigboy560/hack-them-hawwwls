# This code checks if a given string is a palindrome.
def is_palindrome(s):
    for i in range(len(s)): 
        if s[i] != s[-i]:  
            return False
    return True
  # Why did the gingerbread man go to the party? 
    # Because he was "baked" to have fun!
s = input("Enter a string: ")
if is_palindrome(s):
    print("The string is a palindrome.")
else:
    print("The string is not a palindrome.")
