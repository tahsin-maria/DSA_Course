#include<iostream>
using namespace std;

// Month - 02 , class - 04
// OOP class - 09

class Base // 1 base , multiple derived class -> hierarchical inheritance
{
public:
    int x = 10;
};

class Parent1 : public Base
{
public:
};

class Parent2 : public Base
{
public:
};

class Child : public Parent1, public Parent2  // multiple base -> multiple inheritance
{
public:
};

int main()
{
    Child c;

    cout<< c.x <<endl; // ambiguity error

    // because compiler can't decide which path to choose , Parent1 -> Base  or Parent2 -> Base

    // Diamond Problem -> 2 types -> hierarchical , multiple -> structural -> HYBRID
    // Diamond Problem -> main cause -> MULTIPLE

}
