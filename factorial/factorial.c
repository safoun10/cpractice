#include <stdio.h>

int main()
{
    int end_num, i;
    unsigned long long total = 1;

    printf("Enter end Number: ");
    scanf("%d", &end_num);

    if (end_num == 0)
    {
        printf("Factorial = 1");
    }
    else if (end_num < 0)
    {
        printf("No factorial for negative numbers!");
    }
    else
    {
        for (i = 1; i <= end_num; i++)
        {
            total = total * i;
            printf("%llu\n", total);
        }
        printf("\nYour total is %llu\n", total);
    }

    return 0;
}