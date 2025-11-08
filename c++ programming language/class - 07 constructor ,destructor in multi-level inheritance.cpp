#include<iostream>
using namespace std;

//month - 02 , class - 02
// class - 07 oop
// multi - level inheritance

class Grandpa
{
public:
    Grandpa()
    {
        cout<<"Grandpa constructor"<<endl;
    }
    ~Grandpa()
    {
        cout<<"Grandpa destructor"<<endl;
    }

};

class Dad : public Grandpa
{
public:
    Dad()
    {
        cout<<"Dad constructor"<<endl;
    }
    ~Dad()
    {
        cout<<"Dad destructor"<<endl;
    }

};

// Grandpa -> Dad -> Son
class Son : public Dad
{
public:
    Son()
    {
        cout<<"Son constructor"<<endl;
    }
    ~Son()
    {
        cout<<"Son destructor"<<endl;
    }
};
//Grandpa -> Dad -> Son
// Son <- Dad <- Grandpa
int main()
{
    //Grandpa gp;
    Dad d;
    cout<<endl;
    Son s;
}
