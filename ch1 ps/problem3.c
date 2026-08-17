// celcius to f F = C*(9/5) +32

#include <stdio.h>

int main() {
    float c,f;
    printf("Enter temperature in celcius: ");
    scanf("%f",&c);
    f = c*(9/5) + 32;
    printf("Temperature in Fahrenheit is: %f", f);
    

    
    return 0;
}