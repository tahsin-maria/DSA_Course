#include<iostream>
using namespace std;

class Animal
{
public:
    virtual void sound() //virtual function
    {
        cout<<" Animal sound " <<endl;
    }
};

class Cat : public Animal
{
public:
    void sound() override
    {
        cout<<" Cat sound "<<endl;
    }

};

class Dog : public Animal
{
public:
    void sound() override
    {
        cout<<" Dog sound "<<endl;
    }
};

// Animal -> Cat , Dog

int main()
{
    Animal a;
    Cat c;
    Dog d;

    Animal* aa; // aa is a base class pointer

    aa = &a;
    aa -> sound();

    aa = &c;
    aa -> sound(); //calls

    aa = &d;
    aa -> sound(); //calls



}
