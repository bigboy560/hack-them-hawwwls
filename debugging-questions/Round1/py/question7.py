# 7) Best Gingerbread Cookie:
# Anna is decorating gingerbread cookies for Christmas, and she has organized the cookies in a list. 
# The best cookie is determined by:
# • If the list has an odd number of cookies, the best cookie is in the middle.
# • If the list has an even number of cookies, we choose the cookie in the middle-left (closer to the start).
def find_best_gingerbread_cookie(cookies, num_cookies):
    
    middle_index = num_cookies // 2  
    return cookies[middle_index]
num_cookies = int(input("Enter the number of gingerbread cookies: "))
cookies = []
print("Enter the gingerbread cookie types (use numbers for simplicity):")
for i in range(num_cookies):
    cookie_type = int(input(f"Cookie {i + 1}: "))
    cookies.append(cookie_type)
print(f"Best gingerbread cookie: {find_best_gingerbread_cookie(cookies, num_cookies)}")

