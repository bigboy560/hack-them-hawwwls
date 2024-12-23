#A workshop needs to calculate the total weight of gifts being packed. Each gift has a specific weight, and the weights are stored in an 
#array(or list in Python). Santa wants to exclude gifts weighing less than 5 kg (to save on shipping small items) but due to a logical error,
 # the program miscalculates the total weight.
def calculate_total_weight(gift_weights):
    total_weight = 0
    for weight in gift_weights:
        if weight < 5:  
            total_weight += weight
    return total_weight
gift_weights = [4, 7, 2, 8, 6] 
print("Total weight of selected gifts: {calculate_total_weight(gift_weights)} kg")

 # Why did Santa's helper see the doctor? 
    # Because he had low "elf" esteem!

