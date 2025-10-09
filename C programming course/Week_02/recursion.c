#include<stdio.h>
// 1 2 3 4 ... n
void printNum(int n) // recursive function
{
    //base case
    if(n==0) //n=0
    {
        return;
    }
    // n - 1 = 0 //calling printNum() again
    printf("%d " , n);
    printNum(n-1);
}

int main()
{
    int num;
    scanf("%d", &num);

    printNum(num); //function calling
}

