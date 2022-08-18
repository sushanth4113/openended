#include<stdio.h>
float celToFahFun(float);
void main()
{
    float Celsius, Fahrenheit;
    printf("Enter Temperature Value (in Celsius): ");
    scanf("%f", &Celsius);
    Fahrenheit = celToFahFun(Celsius);
    printf("\nEquivalent Temperature Value (in Fahrenheit) = %0.2f", Fahrenheit);
}
float celToFahFun(float cel)
{
    return ((cel*1.8)+32);
}
