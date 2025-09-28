#include<stdio.h>

int main(){
    int n = 15;
    int k = 3;
    int count = 0;

    for(int i = 1 ; i<= n ; i++ )
    {
        //for block
        if( i % k ==0 ){
            count++;
            printf("%d\n",k);
        }

    }

    printf(" count = %d\n",count);

    printf("\n");
    printf("\n");

}









