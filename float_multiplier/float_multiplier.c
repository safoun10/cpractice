#include <stdio.h>

int main(){
    float a, b, product;

    printf("Enter first number: ");
    scanf("%f", &a);
    
    printf("Enter second number: ");
    scanf("%f", &b);

    product = a * b;

    printf("\n The product of %.3f and %.3f is %.3f\n", a, b, product);

    return 0;
}