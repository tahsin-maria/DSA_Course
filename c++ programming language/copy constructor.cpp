#include<iostream>
#include<cstring>
using namespace std;

//copy constructor

class A
{
    int id;
    string name;
    double salary;

public:
    A()
    {
        cout<<"Default called"<<endl;
    }

    A(int i,string n,double s)
    {
        cout<<"Parameterized called"<<endl;
        id = i;
        name = n;
        salary = s;
    }

    //syntax -> custom copy constructor
    // classname(const classname &obj){...}
    A(const A &o)
    {
        cout<<"Copy constructor called"<<endl;
        id = o.id ;   // o3 - o or o1
        name = o.name;
        salary = o.salary;
    }

    void show()
    {
        cout<<"Id :"<<id<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"salary :"<<salary<<endl;
    }
};

//copy constructor gets called 3 times
//1 . pass by value
//2 . returning temporary object by value
//3 . initializing a new object by an old object.

void f(A ob) //pass by value
{
    cout<<"f called"<<endl;
}

A ff() //returns an object of class A by value
{
    A t;
    return t; //returning obj

}

int main()
{
    A o1(1087, "Othoy", 100000000);
    //A o2;

    // object assignment
    // o2 = o1; // default copy constructor (built-in)
   // o2.show();
    //o1.show();

    //using a copy constructor

    A o3 = o1; // calls copy constructor
    o3.show();

    f(o3);
    A n = ff();

}




