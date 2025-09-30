#include<stdio.h>

int main(){
int n;
scanf("%d",&n);
    /*

   * //i=1 ,space = 3 = 4 - 1 = row - i
  *** //i=2 , space = 2 = 4 -2 = row -i          // i =2 -> 2*2 -1 =3
 ***** //i =3 , space = 1 = row - i
******* // i= 4 , space = 0 = row - i           //7 = 2*4 - 1 = 2*row - 1

*/

for(int i =1 ;i<=n ;i++) //outer loop for pyramid
{
    for(int space = 1 ; space <= n - i ; space++) //inner loop for space
    {
     printf(" ");
    }

    for(int star = 1; star <= 2*i - 1 ; star++) //inner loop for star
    {
        printf("*");
    }

    printf("\n");
}

//outer loop for inverted pyramid
for(int i =n-1 ;i>=1 ;i--)
{
    for(int space = 1 ; space <= n - i ; space++) //inner loop for space
    {
     printf(" ");
    }

    for(int star = 1; star <= 2*i - 1 ; star++) //inner loop for star
    {
        printf("%d",star);
    }

    printf("\n");
}
}

