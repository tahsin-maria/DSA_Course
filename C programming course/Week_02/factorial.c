#include<stdio.h>

// 4! = 4 x 3 x 2 x 1
// 4! = 4 x 3!
// 3! = 3 x 2!
// 2! = 2 x 1!
// 1! = 1 x 0!
// 0! = 1
// n! = n x (n-1)!
// n! = n x (n-1) x ((n-1) - 1) x ((n-1)-1)-1

// 0! = 1

//Finding Factorial using recursion

int fact(int n) // n =0
{
    //base case
    if( n == 0 )
    {
        return 1;
    }


    return n*fact(n-1);


}

int main()
{
int n=4;
    printf("fact of %d is = %d\n",n,fact(n)); // n =4
}
