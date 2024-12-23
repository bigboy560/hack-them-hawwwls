# 3) Gift Exchange Logic:
# Santa is organizing a gift exchange among friends. Each friend has a gift they want to give to another friend. 
# The program is supposed to ensure that no one gives a gift to themselves, but there’s a bug 
# that causes some friends to exchange gifts with themselves.

NUM_FRIENDS = 5
def giftExchange(friends):
    for i in range(NUM_FRIENDS):
        print(f"Friend {i} gives a gift to Friend {friends[i]}.")
def main():
    friends = [0, 1, 2, 3, 4]  
    giftExchange(friends)
if __name__ == "__main__":
    main()

