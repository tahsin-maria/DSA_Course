#include<iostream>
using namespace std;


class Base // 1 base , multiple derived class -> hierarchical inheritance
{
public:
    Base()
    {
        cout<< "Base\n";
    }

};

class Parent1 :  virtual public Base
{
public:
    Parent1()
    {
        cout<< "Parent1\n";
    }
};

class Parent2 :  virtual public Base
{
public:
    Parent2()
    {
        cout<< "Parent2\n";
    }
};
//shared copy of Base

class Child : public Parent1, public Parent2  // multiple base -> multiple inheritance
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
