#include<stdio.h>


//pointer

int main()
{
    int a = 10;
    //stores value
    //stack memory
    //address of a -> pointer

    int *x; //decalaration of a pointer variable
    // stores address of a variable

    x = &a; //&a -> address of a
    // x = 1000
    // x points to a

    printf("value of a = %d\n", a); // prints 10

    // *x = 10 = a // dereferencing

    printf("value of a = %d\n", *x); //prints 10

    *x = 100;


    printf("value of a = %d\n", a); //100

    printf("address of a = %d\n", &a); //address of a

    printf("address of a = %d\n", x);

    printf("value of a = %d\n", *x);



}
