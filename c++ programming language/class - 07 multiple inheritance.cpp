#include<iostream>
using namespace std;

//multiple inheritance
class A
{
public:
    A()
    {
        cout<<"A cons"<<endl;
    }
    ~A()
    {
        cout<<"A des"<<endl;
    }
};

class B
{
public:
    B()
    {
        cout<<"B cons"<<endl;
    }
    ~B()
    {
        cout<<"B des"<<endl;
    }
};

// First base class -> A
// Second base class -> B
class C : public B, public A
{
public:
    C()
    {
        cout<<"C cons"<<endl;
    }
    ~C()
    {
        cout<<"C des"<<endl;
    }
};
// destructor gets called in the reverse order of constructor
int main()
{
    //B bb;
    C ob;
}
