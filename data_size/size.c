#include <stdio.h>

int main(){

    int age = 20;
    int age2 = 21;

    int integer;
    long int long_integer;
    unsigned short int unsigned_short_integer; // why not saying it positive or something? why unsigned?
    char character;
    float float_number;
    double double_of_something; // double of what?
    void doSomething(); // it won't do anything I'm pretty sure...
    void *pointer; // huh? where does it point? pointer of what? to what? why?

    int array_numbers[10];
    int *pointer_of_age = &age;

    // struct my
    // {
    //     int money[0];
    //     char grade;
    //     float height;
    // };

    // union someoneElse
    // {
    //     int power[100];
    //     char blood;
    //     float weight;
    // };

    // enum httpStatus
    // {
    //     OK = 200,
    //     CREATED = 201,
    //     BAD_REQUEST = 400,
    //     NOT_FOUND = 404,
    //     INTERNAL_SERVER_ERROR = 500
    // };



    printf("memory size of an integer: %zu bytes \n", sizeof(integer));
    printf("memory size of a long integer: %zu bytes \n", sizeof(long_integer));
    printf("memory size of an unsigned short integer: %zu bytes \n", sizeof(unsigned_short_integer));
    printf("memory size of a character: %zu bytes \n", sizeof(character));
    printf("memory size of a float: %zu bytes \n", sizeof(float_number));
    printf("memory size of a double: %zu bytes \n", sizeof(double_of_something));
    printf("memory size of a function: %zu bytes \n", sizeof(doSomething()));
    printf("memory size of a pointer: %zu bytes \n", sizeof(pointer));
    printf("memory size of an array: %zu bytes \n", sizeof(array_numbers));
    printf("memory size of an pointer of a separate variable: %zu bytes \n", sizeof(pointer_of_age));



}