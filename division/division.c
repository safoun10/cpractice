#include <stdio.h>
#include <math.h>

int main(){
    int dividend, divisor, quotient, remainder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("\nThe quotient of %d and %d is %d\n", dividend, divisor, quotient);
    printf("The remainder of %d and %d is %d\n", dividend, divisor, remainder);

    return 0;
}