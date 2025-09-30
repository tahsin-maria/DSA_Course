#include<stdio.h>

//nested loops

int main()
{

// nested for loop
    for(int i=1 ; i <= 5 ; i++) //outer loop
    {
        for(int j=1 ; j<=3 ; j++)  //inner loop
        {
           // printf("i = %d, j = %d\n",i,j);
        }

       // printf("\n");


    }


/*

****  // row -> 3 , column -> 4
****
****

*/
int row = 3;
int column = 4;

for(int i = 1 ; i<=row ; i++) //outer loop -> row
{
    for(int j = 1 ; j<=column ; j++)  //inner loop -> column
    {
      printf("*");
    }

    printf("\n");
}


}
