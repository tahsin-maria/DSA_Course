#include<iostream> //for input/output
using namespace std;

int var = 12; //global variable

inline int mx(int a,int b) // using the keyword "inline"
{
    return (a > b)? a : b ; // ternery operator
    // true -> returns a
    // false -> returns b
}

inline int div(int a) // inline function
{
// return ( a%2 == 0)? 1 : 0 ; //ternery operator

// 1 or any number except 0 = true
// 0 = false

    return (!(a%2));//returns 1
    // !0 = !false = not false = true = 1
    // !1 = not true = false = 0

}


//the time to call a function -> overhead
void fun(int x, int y = var)   // default arguement
{
    int l;//local variable
    cout<<"x = "<<x<<", y = "<<y<<endl;
    var = 1;
    cout<<var<<endl; // 1
}
//restrictions for default arguement
//1 ) default arguements mus be on the right
//if the default arguement is on left then the right all arguements must be made default

//2) local variable or another arguement can't be the value of a default arguement
//global variable or any constant are ok to put as values of the default arguement


void f(int z)
{
    cout<<z<<endl;
    z=12;
    cout<<z<<endl;

}


int main()
{
    //scanf() - c
    // no access specifier in c++
    //input in c++
    // :: -> scope resolution operator
    // >> -> right shift operator , << -> left shift operator
    int v=2; //local variable
    float f;
    cout<<var<<endl;//value = ? 12
    // cin >> v >> f;
    //("%d and %f\n" , v,f)
    //cout << v << " and " << f <<endl;
    //cout<<endl;

    //function and inline function


    //cout<<mx(12,45)<<endl;
    //cout<<div(89)<<endl;

    // reduces overhead
    // fast program execution

    // restrictions for inline function (not to use)
    // loops
    // switch
    // recursion

    //if any of these restrictions get violated the compiler treate the inline function as a normal function

    switch(v)
    {
    //curly braces
    //multiple cases

    case 1 : //if v==1
    {
        cout<<"the value of v is 1"<<endl;
        break;
    }
    case 5 : //v == 5
    {
        cout<<v<<endl;
        break;
    }
    case 90 : //v==90
    {
        if(v > 0)
        {
            cout<<"ok"<<endl;
        }
        else
        {
            cout<<"right"<<endl;
        }
        break;
    }
    default:
    {
        //cout<<"default case executed"<<endl;
    }
    }

    //default arguements
    // fun(); // why error?
    cout<<endl;
    // fun(12); //fun(int x ,int y = 0)
    cout<<endl;
    //fun(12,89);




}


// c -> procedural language
// c++ -> object-oriented language (OOP)
// reference -> "teach yourself c++"





















































