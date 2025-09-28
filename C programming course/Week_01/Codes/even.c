#include<stdio.h>

int main(){

    //0 - N
    // 0 + 2 + 4 + ... = even_sum

    int n = 10;
    long long int even_sum = 0;
    int i = 0 ;
    while( i<= n)
    {
        //for block

        //if-else
        if(i % 2 == 0) //even
        {

            even_sum = even_sum + i;
            printf("i = %d , sum = %lld\n",i , even_sum);
        }
        else // odd
        {
           continue;
        }

       i++;
    }

    printf(" sum = %lld\n",even_sum); //

    printf("\n");
    printf("\n");



      //0 - N
    // 1 + 3 + 5 + ... = odd_sum
   n = 10;
    i = 1;

    printf("Odd numbers from 1 to %d:\n", n);

    while (i <= n) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++;
    }

}





















