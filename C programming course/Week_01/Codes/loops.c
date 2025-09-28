#include<stdio.h>

int main()
{

    //loops -> for , while , do-while

   /* for(initialization , condition , updating)
    {
        // for block
    }
    */

    for(int i = 5 ; i <= 100 ; i*=2) //decrement
      {
       //for block
       printf("The value of i is = %d\n",i);
      }

      printf("\n");
       printf("\n");


      //while loop

      int var = 5;
      while(var <= 100)
      {

          //while block
          printf("The value of var is = %d\n",var);
          var *=5 ; // 25 * 5
      }

      printf("%d",var); // 25 * 5 = 125

       printf("\n");
       printf("\n");

       //do-while

       int x = 0;
       do
       {
           //do-while block
        printf("The value of x is = %d\n",x);
        x++; //increment

       }while(x <= 5);

         printf("%d",x); // 25 * 5 = 125




}


















