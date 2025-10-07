#include<stdio.h>

int main()
{
    int arr_1D[3] = { 1, 5, 6 };   //1D array

    //a[2],a[0]

    // syntax -> data_type array_name[number_of_1D_array][number_of_elements_of_each_1D_array]
    //grid

    int row = 2, column = 2;

    int a[2][2] = { {3,5},
                    {1,9}  //(row,column) -> a[row][column]
                  };
                  //2D array
    //size -> row x column -> 2 x 2

    //a[1][2]
    //output
    for(int r = 0 ; r < 2 ; r++ ) //row
    {
        for(int c = 0 ; c < 2 ; c++) //column
        {
            //printf("index -> (%d,%d) -> %d \n",r, c, a[r][c]);
        }
    }

    long long int sum = 0;

        for(int r = 0 ; r < 2 ; r++ ) //row
    {
        for(int c = 0 ; c < 2 ; c++) //column
        {
            sum = sum + a[r][c];
        }
    }

   // printf("The sum is = %lld\n",sum);



 int even =0,odd=0;
    for(int r = 0 ; r < 2 ; r++ ) //row
    {
        for(int c = 0 ; c < 2 ; c++) //column
        {
          if(a[r][c] %2 == 0) //even
          {
              even++;
              printf("even = %d\n",a[r][c]);
          }
          else if(a[r][c] %2 != 0)
          {
              odd++;
              printf("odd = %d\n",a[r][c]);
          }
        }
    }

   // printf("The sum is = %lld\n",sum);










}
