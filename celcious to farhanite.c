#include<stdio.h>
#include<conio.h>
float celToFahFun(float);
int main()
{
    float Celsius, Fahrenheit;
    printf("Enter Temperature Value (in Celsius): ");
    scanf("%f", &Celsius);
    Fahrenheit = celToFahFun(Celsius);
    printf("\nEquivalent Temperature Value (in Fahrenheit) = %0.2f", Fahrenheit);
    getch();
    return 0;
}
float celToFahFun(float cel)
{
    return ((cel*1.8)+32);
}