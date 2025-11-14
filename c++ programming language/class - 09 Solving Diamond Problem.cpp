#include<iostream>
using namespace std;


class Base // 1 base , multiple derived class -> hierarchical inheritance
{
public:
    int x = 10;
};

class Parent1 : virtual public Base //virtual inheritance
{
public:
};

class Parent2 : virtual public Base
{
public:
};
//shared copy of Base

class Child : public Parent1, public Parent2  // multiple base -> multiple inheritance
{
public:
};

int main()
{
    Child c;

    cout<< c.x <<endl;


}
