# 8) Roasting a Christmas Turkey:
# Belle is getting ready to roast a Christmas turkey. 
# The program finds the ideal temperature by converting from Fahrenheit to Celsius.
# The ideal temperature for roasting a Christmas turkey is between 160°C and 180°C.
def fahrenheit_to_celsius(fahrenheit):
    
    return (fahrenheit - 32) * 1.5  
fahrenheit = 350 
celsius = fahrenheit_to_celsius(fahrenheit)
print(f"Temperature in Celsius: {celsius:.2f}")
if 160 <= celsius <= 180:
    print("Perfect temperature for roasting the Christmas turkey!")
else:
    print("The temperature is not ideal for roasting. Adjust the oven temperature.")
