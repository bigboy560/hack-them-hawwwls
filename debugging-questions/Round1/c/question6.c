// 6) Christmas Lights Toggle:
// A mall is decorating with a set of Christmas lights that should alternate between "on" and "off."

#include <stdio.h>

#include <stdio.h>
#include <stdlib.h> 
void decorate_lights(int num_lights) {
    int i;
    int* lights = (int*)malloc(num_lights * sizeof(int)); 
    if (lights == NULL) { 
        printf("Memory allocation failed.\n");
        return;
    }
    for (i = 0; i < num_lights; i++) {
        lights[i] = 0; 
    }
    for (i = 0; i < num_lights; i++) {
        lights[i] = 1; 
        printf("Light %d: %s\n", i + 1, lights[i] == 1 ? "On" : "Off");
    }
    free(lights); 
}
int main() {
    int num_lights;
    printf("Enter the number of lights: ");
    scanf("%d", &num_lights);
    if (num_lights <= 0) {
        printf("Number of lights must be positive.\n");
        return 1;
    }
    decorate_lights(num_lights);
    return 0;
}

