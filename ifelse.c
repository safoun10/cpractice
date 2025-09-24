#include <stdio.h>

int main()
{
    int money;
    printf("what is your budget: ");

    scanf("%d", &money);

    if (money > 1000)
    {
        printf("please come in sir, your iphone is ready!");
    }
    else
    {
        printf("get lost you poor!");
    }

    return 0;
}