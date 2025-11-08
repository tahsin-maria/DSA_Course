#include<iostream>
using namespace std;

// runtime polymorphism -> function overriding
// compile - time polymorphism -> function overloading , operator overloading
class A //abstract class -> cuz it's incomplete
{
public:
    virtual void display()
    {
        cout<<"A function"<<endl;
    }
};

class B : public A
{
public:
    void display() override
    {
        cout<<"B function"<<endl;
    }
};


int main()
{
   A ob;

}
