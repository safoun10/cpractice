#include <stdio.h>

int main()
{
    int i, num, result;

    printf("--------------------------------------------------------------------------\n");
    printf("Welcome to the multiplication table!\nEnter your number: ");
    scanf("%d", &num);
    printf("--------------------------------------------------------------------------\n");

    for (i = 1; i <= 10; i++)
    {
        result = num * i;
        printf("%d * %d = %d\n", num, i, result);
    }

    printf("--------------------------------------------------------------------------\n");
    return 0;
}