#include<iostream>
using namespace std;

void f(int x) //copy -> doesn't change the original variable
{
    cout<<x<<endl;
    x = 12;
    cout<<x<<endl;
}

void f(int &x) // reference parameter
{
    cout<<x<<endl;
    x = 12;
    cout<<x<<endl;
}

int main()
{
    int a = 9;
    f(a); //pass by reference
    cout<<a<<endl;
}
