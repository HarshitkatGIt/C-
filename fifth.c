//---------------------------------------------------   Celsius into Fahrenheit -------------------------------------------------------------------------------------------//
/*                                                   Variable decleration and assigning                                                                                      */
#include <stdio.h>
int main()
{
/*                                                               Decleration                                                                                                */
    float c,f,cel,fahr;

/*                                                              Taking Inputs                                                                                                */
    printf("Enter Temperature in °C :");
    scanf("%f", &c);
/*                                                               Assigning                                                                                                   */
    f = (c*9/5)+32;
    printf("Temparture in °F = %f\n",f);

//---------------------------------------------------   Fahrenheit into Celsius  -------------------------------------------------------------------------------------------//
   
/*                                                              Taking Inputs                                                                                                */  
    printf("Enter Temperature in °F :");
    scanf("%f", &fahr);
/*                                                               Assigning                                                                                                   */
    cel = 0.556*(fahr-32);

    printf("Temparture in °C = %f",cel);
    
    return 0;
}
