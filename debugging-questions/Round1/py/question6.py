# 6) Christmas Lights Toggle:
# A mall is decorating with a set of Christmas lights that should alternate between "on" and "off."

def decorate_lights(num_lights):
    lights = [0] * num_lights 
    for i in range(num_lights):
        lights[i] = 1  
        print(f"Light {i + 1}: {'On' if lights[i] == 1 else 'Off'}")
num_lights = int(input("Enter the number of lights: "))
decorate_lights(num_lights)

