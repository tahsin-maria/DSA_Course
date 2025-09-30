#include<stdio.h>

int main(){
    int row= 4;
    /*

   * //i=1 ,space = 3 = 4 - 1 = row - i
  *** //i=2 , space = 2 = 4 -2 = row -i          // i =2 -> 2*2 -1 =3
 ***** //i =3 , space = 1 = row - i
******* // i= 4 , space = 0 = row - i           //7 = 2*4 - 1 = 2*row - 1

*/

for(int i =1 ;i<=row ;i++) //outer loop
{
    for(int space = 1 ; space <= row - i ; space++) //inner loop for space
    {
    // printf(" ");
    }

    for(int star = 1; star <= 2*i - 1 ; star++) //inner loop for star
    {
        //printf("%d",star);
    }

    //printf("\n");
}


for(int i =row ;i>=1 ;i--) //outer loop
{
    for(int space = 1 ; space <= row - i ; space++) //inner loop for space
    {
     printf(" ");
    }

    for(int star = 1; star <= 2*i - 1 ; star++) //inner loop for star
    {
        printf("*");
    }

    printf("\n");
}
}
