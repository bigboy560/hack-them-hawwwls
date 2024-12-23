#Calculate the total cost by multiplying each item's cost by its quantity.
#If the total quantity of ornaments exceeds 5, apply a 10% discount on the total cost
# This code calculates the discounted total cost of ornaments for Christmas.
def discounted_total_cost(costs, quantities):
    total = 0
    total_quantity = 0

    for i in range(len(costs) + 1):  
        total += costs[i] + quantities[i]  
        total_quantity += quantities[i]

    if total_quantity > 5:
        total = total - (total / 10) 

    return total

costs = [5, 10, 20]  
quantities = [2, 1, 3]  
print("Discounted total cost:", discounted_total_cost(costs, quantities))
