#include <stdio.h>

int main()
{
    int x = 1;
    char c = '1';
    float float_number = 3.1416;
    double double_num = 23.133984;

   // printf("enter an integer:");
    //scanf("%d",&x); // 10

    int n = 19; //arithmetic operator + , -, /,*
    n = n / 3 ; // float 6. -> int

    //printf("The value of n=%d\n",n); // string

    n = n - 3 ;
   // printf("The value of n=%d\n",n);

 //It's a single line comment

 /*
 It's a
 multi
 line
 comment
 */

 x = 4;
 int y = 10 % 2 ;
 printf("The value of y=%d\n",y);
 // y = 0

   //Conditionals // x = 1
   int w;
   scanf("%d",&w); // 2

   if(w % 2 == 0) //even -> YES
   {
       if( w == 2) // 1 ,1 -> 2 -> NO
       {                     // nested conditionals
        printf("NO\n");
       }

       else
       {
        printf("YES\n");
       }

   }

   else // Odd - > NO
   {
    printf("NO");
   }

   //w = 4,6,8,10-> YES

   // w = 2 -> NO



double d = 3 /2 ; // x = 1.5
printf("%.5lf" , d);




    return 0;
}



