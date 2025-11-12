#include<iostream>
using namespace std;

//runtime polymorphism / dynamic binding / late binding -> virtual function( function overriding)
// compile time polymorphism / static binding / early binding -> function overloading , operator overloading

class Animal
{
public:
    int age;

    void sound()
    {
        cout<<" Animal sound " <<endl;
    }
};

class Cat : public Animal
{
public:
    void sound()
    {
        cout<<" Cat sound "<<endl;
    }

};

class Dog : public Animal
{
public:
    void sound()
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

    //cout<<a.age<<endl; // we use the dot operator for this
    //a.sound();
    //c.sound();
    //d.sound();

    //int n = 9;
    //int* ptr = &n; // pointers store address
    //cout<< ptr <<endl; // pointer to an int


    Animal* aa; // a pointer to an object of Animal class
    //object pointer
    //cout<<aa->age<<endl; // we use the arrow operator here
    //aa->sound();

    aa = &a;
    aa -> sound(); // -> refers to dereferencing

    // base class pointer can point to derived class obj
    aa = &c;
    aa -> sound();

    aa = &d;
    aa -> sound();

}
