#include <stdio.h>

/*
Name: Josh Leslie
Student ID: W0228010
Exercise: 3
Course: Programming in C
LMD: 2025/01/22
*/


int main() {
    float num1, num2, sum, diff, prod, quot; // Variables created
    num1 = 10.5; // Assigning values to variables
    num2 = 5.5; // Assigning values to variables
    sum = num1 + num2; // Sum of two numbers
    diff = num1 - num2; // Difference of two numbers
    prod = num1 * num2; // Product of two numbers
    quot = num1 / num2; // Quotient of two numbers


    printf("Values of variables created:\n");   // Displaying values of variables
    printf("The value of num1 = %.2f\n", num1); // Displaying values of variables with 2 decimal places
    printf("The value of num2 = %.2f\n", num2); // Displaying values of variables with 2 decimal places
    printf("============================================\n"); // Separator

  
    printf("Results of operations:\n"); // Displaying results of operations
    printf("The sum of %.2f + %.2f = %.2f\n",num1, num2, sum); // Displaying results of addition with 2 decimal places
    printf("The difference of %.2f - %.2f = %.2f\n",num1, num2,  diff); // Displaying results of subtraction with 2 decimal places
    printf("The product of %.2f * %.2f = %.2f\n",num1, num2,  prod); // Displaying results of multiplication with 2 decimal places
    printf("The quotient of %.2f / %.2f = %.2f\n",num1, num2,  quot); // Displaying results of division with 2 decimal places
    printf("============================================\n"); // Separator

    int num3, num4, remainder; // Variables created
    num3 = 12; // Assigning values to variables
    num4 = 5; // Assigning values to variables
    printf("Values of variables created:\n"); // Displaying values of variables
    printf("The value of num3 = %d\n", num3); // Displaying values of variables
    printf("The value of num4 = %d\n", num4); // Displaying values of variables
    remainder = num3 % num4; // Remainder of two numbers variable created
    printf("Results of operations:\n"); // Displaying results of operations
    printf("The remainder of %d %% %d = %d\n",num3, num4, remainder); // Displaying results of remainder using modulus operator
    printf("============================================\n"); // Separator

    char letter = 'A'; // Variable created
    printf("Values of variables created:\n"); // Displaying values of variables
    printf("The value of letter = %c\n", letter); // Displaying values of variables in character format
    printf("The ASCII value of letter = %d\n", letter); // Displaying ASCII value of character
    printf("============================================\n"); // Separator

    printf("Enter a integer number: "); // Prompting user to enter integer number
    int num5; // Variable created
    scanf("%d", &num5); // Reading integer number
    printf("Enter a float number: "); // Prompting user to enter float number
    float num6; // Variable created
    scanf("%f", &num6); // Reading float number
    printf("The integer number entered is: %d\n", num5); // Displaying integer number entered
    printf("The float number entered is: %.2f\n", num6); // Displaying float number entered with 2 decimal places
    printf("The integer number after incrementing by 1 is: %d\n", ++num5); // Displaying integer number after incrementing by 1
    printf("The float number after incrementing by 1 is: %.2f\n", ++num6); // Displaying float number after incrementing by 1 with 2 decimal places
    printf("The value of integer number is: %d\n", num5); // Displaying integer number
    printf("The value of float number is: %.2f\n", num6); // Displaying float number with 2 decimal places
    printf("The integer number after decrementing by 1 is: %d\n", --num5); // Displaying integer number after decrementing by 1
    printf("The float number after decrementing by 1 is: %.2f\n", --num6); // Displaying float number after decrementing by 1 with 2 decimal places
    printf("============================================\n"); // Separator

    int num7; // Variable created
    printf("Enter a number, positive or negative: "); // Prompting user to enter a number
    scanf("%d", &num7); // Reading number
    printf("The number entered is: %d\n", num7); // Displaying number entered
    if (num7 % 2 == 0 && num7 >=0) // Checking if number is even and is positive
    {
        printf("The number entered is even and positive\n"); // Displaying number is even and positive
    }
    else if (num7 % 2 == 0 && num7 <0)// Checking if number is even and negative
    {
        printf("The number entered is even and negative\n"); // Displaying number is even and negative
    }
    else if (num7 % 2 && num7 >=0) // Checking if number is not even and is positive
    {
        printf("The number entered is odd and positive\n"); // Displaying number is odd and positive
    }
    else // Checking if number is not even and is negative
    {
        printf("The number entered is odd and negative\n"); // Displaying number is odd and negative
    }
    printf("============================================\n"); // Separator
    return 0;
}