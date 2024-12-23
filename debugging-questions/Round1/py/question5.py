# 5) Cake Decoration Pattern:
# The elves are decorating a multi-layer cake for Christmas. 
# Each layer of the cake should be decorated with the same string pattern. 
# The number of layers and the decoration pattern are given, but the program has a logical error in how it prints the decoration for each layer.

def decorate_cake(layers, decoration):
    for i in range(layers):
        print(f"Layer {i + 1} decorated with: {decoration[i % len(decoration)]}")
layers = 4  
decoration = "*#@&"  
decorate_cake(layers, decoration)

