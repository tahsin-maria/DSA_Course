#include<iostream>
using namespace std;

// Abstraction

class Animal // abstract class ( atleast one pure virtual function)
{
public:
    virtual void sound() = 0; //pure virtual function
   // virtual functions with no definition are called pure virtual function
};

class Cat : public Animal
{
public:


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
   // Animal a; // we can't declare object of an abstract class
    Cat c;
    Dog d;

    Animal* aa; // aa is a base class pointer

    aa = &c;
    aa -> sound(); //calls Cat sound()

    aa = &d;
    aa -> sound(); //calls Dog sound()



}
