#include <stdio.h>

int main(){
    int first_num, second_num, temp;
    printf("Enter your first number: ");
    scanf("%d", &first_num);
    
    printf("Enter your second number: ");
    scanf("%d", &second_num);

    temp = first_num;
    first_num = second_num;
    second_num = temp;

    printf("Your first number is: %d \n", first_num);
    printf("Your second number is: %d", second_num);

    return 0;
}