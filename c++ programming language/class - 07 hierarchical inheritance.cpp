#include<iostream>
using namespace std;

//hierarchical inheritance
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
// destructor gets called in the reverse order of constructor
int main()
{
    B bb;
    //C ob;
}
