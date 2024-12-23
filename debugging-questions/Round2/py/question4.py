# This code counts the number of words in a given string.
def count_words(s):
    count = 0
    for i in range(len(s)):
        if s[i] == ' ':
            count += 1  
    return count  

s = "Merry   Christmas and Happy Coding!"
print("Word count:", count_words(s))
