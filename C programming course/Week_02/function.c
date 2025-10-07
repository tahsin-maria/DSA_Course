#include<stdio.h>
#include<math.h> // needed for pow,sqrt,abs

//function -> a block of codes -> does  a task
// 2 types -> built-in , user-defined


// pow(number , power)
// sqrt(number)
// abs(number)
// ceil(),round(),floor()

//scanf() , printf()

int main()
{
 int n = 16;
 double root = sqrt(n);  //for square root
 int power = pow( n , 5); //for power
 int neg = -100;
 int a = abs(neg); // absolute value

 float f= 4.7;
 int c = ceil(f); // 5
 int fl = floor(f); //4
 int r = round(f); //5

 printf("%d", r);
}
