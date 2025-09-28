#include <stdio.h>

int main(){
    unsigned int i, end_num, total;

    printf("Enter end Number: ");
    scanf("%u", &end_num);

    for (i = 0; i <= end_num; i++)
    {
        total = total + i;
        printf("%u\n", total);
    }

    printf("\nYour total is %u", total);

    return 0;   
}