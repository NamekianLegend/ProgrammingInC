/**************************
 * Title: Exerecise 2
 * Author: Josh Leslie
 * Student ID: W0228010
 * LMD: January 14th 2025 
 * Class: Programming in C
 *************************/

#include <stdio.h>

int main()
{
    float radius = 2.5; /*Radius of the circle*/
    const double Pi = 3.14159; /*Variable for Pi*/
    double circumference = 2 * Pi * radius; /*Variable for circumference of the circle, the equation is 2 multiplied by Pi mutiplied by the radius*/
    int circumferenceInt = (int)circumference; /*casting circumference variable from a double to an int as a new variable*/
    printf("The circumference of the circle is: %f\n", circumference); /*Prints the circumference of the circle as a float*/
    printf("The circumference of the circle is: %d\n", circumferenceInt); /*Prints the circumference of the circle as an int*/
    printf("The radius of the circle is: %.2f\n", radius); /*Prints the radius of the circle as a float with 2 decimal places*/
    printf("The circumference of the circle is: %.3f\n", circumference); /*Prints the circumference of the circle as a float with 3 decimal places*/

    const double planck = 6.626 * 10e-34; /*Variable for Planck constant. Plancks constant is 6.626 mutiplied by 10 to the power of -34*/
    printf("The Planck constant is: %e\n", planck); /*Prints the Planck constant in scientific notation*/

    return 0;
}