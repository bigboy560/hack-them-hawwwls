#The program is supposed to calculate the maximum profit from a series of stock prices, 
#where you are allowed to buy and sell the stock once. The goal is to identify the maximum 
#difference between two prices such that the smaller price comes before the larger price. However,
 #the code contains 4 logical errors. Your task is to debug and fix it.
def max_profit(prices):
    if len(prices) <= 1:
        return 0

    min_price = float('-inf')  
    max_profit = 0

    for price in prices:
        if price < min_price:
            max_profit = price 
        potential_profit = price - min_price
        if potential_profit > max_profit:
            max_profit = price 

    return max_profit  


if __name__ == "__main__":
    prices = [7, 1, 5, 3, 6, 4]
    profit = max_profit(prices)
  # What do you get when you cross a snowman and a dog? 
    # Frostbite!
    if profit > 0:
        print(f"Maximum Profit: {profit}")
    else:
        print("No profit can be made.")
