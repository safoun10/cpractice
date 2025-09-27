#include <stdio.h>

int main()
{
    int first, second, third;

    // flush the input buffer to avoid any input except integers

    printf("\nThis program finds the largest among three numbers.\n");
    printf("Please enter three integers (positive, negative or zero):\n");
    printf("The limit for inputs is from 2 billion to -2 billion.\n");
    printf("----------------------------------------------------------------------\n");
    printf("Enter first number: ");
    if (scanf("%d", &first) != 1)
    {
        printf("Invalid first input! Please enter an integer.\n");
        return 1; // stop program
    }

    printf("Enter second number: ");
    if (scanf("%d", &second) != 1)
    {
        printf("Invalid second input! Please enter an integer.\n");
        return 1; // stop program
    }

    printf("Enter third number: ");
    if (scanf("%d", &third) != 1)
    {
        printf("Invalid third input! Please enter an integer.\n");
        return 1; // stop program
    }

    printf("----------------------------------------------------------------------\n");
    // logic to find the largest number
    if (first > second && first > third)
        printf("%d ~ the first number is the largest number.", first);
    else if (second > first && second > third)
        printf("%d ~ the second number the largest number.", second);
    else if (third > first && third > second)
        printf("%d ~ the third number is the largest number.", third);
    else if (first == second && first == third)
        printf("All numbers are equal.");
    else if (first == second && first > third)
        printf("%d ~ the first and %d ~ the second number are the largest numbers.", first, second);
    else if (first == third && first > second)
        printf("%d ~ the first and %d ~ the third number are the largest numbers.", first, third);
    else if (second == third && second > first)
        printf("%d ~ the second and %d ~ the third number are the largest numbers.", second, third);
    else
        printf("This program should not reach here!");

    printf("\n----------------------------------------------------------------------\n");
    printf("Thank you for using this program.\n\n");
    return 0;
}