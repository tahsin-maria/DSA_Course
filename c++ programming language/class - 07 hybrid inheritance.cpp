#include<iostream>
using namespace std;

//hybrid inheritance
class A //base
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

class B : public A // B derived class
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


class C : public A //c-> derived class
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

class D : public B, public C
{
public:
    D()
    {
        cout<<"D cons"<<endl;
    }
    ~D()
    {
        cout<<"D des"<<endl;
    }
};

// A -> B , C (hierarchical)
// D <- B , C ( multiple )

// hybrid -> 2 types of inheritance exists here


// destructor gets called in the reverse order of constructor
int main()
{

    D ob;
}
