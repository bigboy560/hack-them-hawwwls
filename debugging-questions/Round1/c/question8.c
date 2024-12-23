// 8) Roasting a Christmas Turkey:
// Belle is getting ready to roast a Christmas turkey. 
// The program finds the ideal temperature by converting from Fahrenheit to Celsius.
// The ideal temperature for roasting a Christmas turkey is between 160°C and 180°C.

#include <stdio.h>
float fahrenheit_to_celsius(float fahrenheit) {
    
    return (fahrenheit - 32) * 1.5;  
}
int main() {
    float fahrenheit = 350;  
    float celsius;
    celsius = fahrenheit_to_celsius(fahrenheit);
    printf("Temperature in Celsius: %.2f\n", celsius);
    if (celsius >= 160 && celsius <= 180) {
        printf("Perfect temperature for roasting the Christmas turkey!\n");
    } else {
        printf("The temperature is not ideal for roasting. Adjust the oven temperature.\n");
    }
    return 0;
}

