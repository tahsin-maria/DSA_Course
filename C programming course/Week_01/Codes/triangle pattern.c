#include<stdio.h>

int main(){
    /*

*
**
***
****
*****

*/
int row = 5;
char alphabet = 'A';
for(int i=1 ; i<=5 ;i++) //row
{
    for(int j = 1 ; j<=i ; j++) //column
    {
        //row number = column number

       // printf("*");

      // printf("%c",alphabet);
     // printf("%d",j);
    }
   // alphabet = alphabet + 1; // 'A' ->48 + 1 = 49 -> 'B'
   // printf("\n");
}


alphabet = 'A';
for(int i=5 ; i>=1 ;i--) //row
{
    for(int j = 0 ; j<i ; j++) //column
    {
        //row number = column number

        //printf("*");

      // printf("%c",alphabet+j);
     // printf("%d",j);
    }
    //alphabet = alphabet + 1; // 'A' ->48 + 1 = 49 -> 'B'
    printf("\n");
}
}
