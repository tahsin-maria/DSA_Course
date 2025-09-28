#include<stdio.h>

int main(){ //5! = 1.2.3.4.5 = 120
    // n! = n(n-1)(n-2) ... 1

    int n = 5;
    long long int fact = 1;

    for(int i = 1 ; i<= n ; i++ )
    {
        //for block
        fact = fact * i;
        printf("i = %d , fact = %lld\n",i , fact);

    }

    printf("Factorial = %lld\n",fact);

    printf("\n");
    printf("\n");

}











