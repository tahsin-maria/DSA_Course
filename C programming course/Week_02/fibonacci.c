#include<stdio.h>


// fibonacci series
// 0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , ...

// n = (n-1) + (n-2)

int fib(int i) // i= 5
{
    //base case
    if(i == 0)
    {
        return 0;
    }
    if(i == 1)
    {
        return 1;
    }

    return fib(i - 1) + fib(i - 2); //fib(4) + fib(3)

}


int main()
{
    int n; //number of terms
    scanf("%d", &n);

    for(int i=0;i<=n;i++)
    {
        printf("%d ", fib(i)); //i=5 // fib(5)
        // 0 1 1 2 3 5
    }



}
