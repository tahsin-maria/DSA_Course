#include<stdio.h>

int main(){
    int n= 123;
    int rev = 0; // rev = 321
    int r;
    /*
    123 % 10 = 3 (last digit)
    123/10 = 12
    12 % 10 = 2 (last digit)
    12 / 10 = 1
    1%10 = 1 (last digit)
    1 / 10 = 0
    */
    while(n != 0)
    {
        r = n % 10; // last digit
        rev = rev*10 + r;
        n = n/10;

    }
    printf("%d",rev);
}






