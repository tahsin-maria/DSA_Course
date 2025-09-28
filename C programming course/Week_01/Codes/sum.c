#include<stdio.h>

int main(){
    // 1 + 2 + 3 + ... + N = SUM

    int n = 5;
    long long int sum = 0;

    for(int i = 1 ; i<= n ; i++ )
    {
        //for block
        sum = sum + i;
        //printf("i = %d , sum = %lld\n",i , sum);
        //printf("%d + ",i);
    }

    printf(" sum = %lld\n",sum); // 15

    printf("\n");
    printf("\n");

    int i = 1;
    sum =0;

    while(i <= n){
        sum = sum + i;
        i++;
    }
     printf(" sum = %lld\n",sum);

     printf("\n");
    printf("\n");

    sum = 0;
    i = 1;
    do{
        sum = sum + i;
        i++;
    }while(i <= n);
    printf(" sum = %lld\n",sum);

}
