#include<stdio.h>

// create a function for adding two integers

//function decalaration
//syntax

//return_type  function_name(parameters);

 //declaration of add() function
//int add(int x,int y);


void add(int x , int y) //function definition
{
    int sum = x + y;  // x =1 , y=5
    //sum = 6
    printf("The sum is = %d\n",sum);

}


int main() // function
{

    int a = 1 ,b = 5;


    // a + b =?

    //calling the function
   // add(a , b); // no return

    // a-> x = 1  , b-> y =5
    //printf("Result = %d\n", add(a , b) ); // 6
}


//function definition

//syntax

// return_type function_name(parameters){}

/*int add(int x , int y)
{
    int sum = x + y;  // x =1 , y=5
    //sum = 6
    return sum; //return sum to main() function
}*/






