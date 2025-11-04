#include<iostream>
using namespace std;

// month - 02 , class - 01

int fun()
{
    cout<<" Hello World "<<endl;
    return 1;
}


char fun(int x , char c)
{
    cout<<"The value of c and x are : "<<x <<" "<<c<<endl;
    return c;
}

void fun(int x)
{
    x++;
    cout<<"The value of x = "<<  x <<endl;
}

/*double fun(int a) //ambiguity error
{
    return 1.00;
}
*/

double fun(char a) //no ambiguity error
{
    return 1.00;
}

//conditions for function overloading
//function names must be same
//parameter list must be different (different in numbers or types)
//returns type can be same or different


// function overloading with default arguements
void f(int x=0 , int y=0)
{
    cout<<" x = "<<x<<", y = "<<y<<endl;
}

//another ambiguity error problem
void a(int i , int x , char c = 'm') //a(9)
{
    cout<<i<<" "<<c<<endl;
}

void a(int x) //a(99)
{
    cout<<x<<endl;
}


//other ambiguous problems
void car(float x)
{
    cout<<x<<endl;
}

void car(double x)
{
    cout<<x<<endl;
}



int main()
{
    int a = 10, b = 88 ;
    char ch;

    cout<<fun()<<endl;


    ch = fun(b , 'z');

    fun(a);
    //cout<<fun(b)<<endl; //ambiguity error
    cout<<fun(ch)<<endl;


//function overloading with default arguements
    f();
    f(1);
    f(1,99);

    //another ambiguity error problem
   // a(1,'s'); // OK
   // a(99); // Error

   //other ambiguous problems
   float f = 1.2;
   double d = 2.44;

   car(f); //ok
   car(d);  //ok

   car(10); // ambiguity due to automatic type conversion
//int -> char , char_>int , float -> int , int -> float , double ->int
}
