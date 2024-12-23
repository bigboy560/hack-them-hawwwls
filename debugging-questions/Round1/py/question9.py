def are_anagrams(str1, str2):
    
    if len(str1) != len(str2):
        return False
    for char in str1:
        if char not in str2:
            return False  
    return True
str1 = "Santa"
str2 = "satan"
if are_anagrams(str1, str2):
    print(f"'{str1}' and '{str2}' are anagrams!")
else:
    print(f"'{str1}' and '{str2}' are not anagrams.")

