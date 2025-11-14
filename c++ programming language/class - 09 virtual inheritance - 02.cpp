#include<iostream>
using namespace std;

class Parent1
{
public:
    Parent1()
    {
        cout<< "Parent1\n";
    }
};

class Parent2
{
public:
    Parent2()
    {
        cout<< "Parent2\n";
    }
};


class Parent3
{
public:
    Parent3()
    {
        cout<< "Parent3\n";
    }
};

class Child :  public Parent1,virtual public Parent2,public Parent3 // multiple base -> multiple inheritance
{
public:
    Child()
    {
        cout<< "Child\n";

    }
};

int main()
{
    Child c;
}
