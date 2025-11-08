#include<iostream>
using namespace std;

//month - 02 , class - 02
// class - 07 oop
// multi - level inheritance

class Grandpa
{
    int age;
public:
    void setter(int a) //setter function
    {
        age = a;
        cout<<"Grandpa setter"<<endl;
    }
    void getter() //getter function
    {
        cout<<"It's Grandpa class"<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

class Dad : public Grandpa
{
    int net_worth;
public:
    void setter(int n)
    {
        net_worth = n;
        cout<<"Dad setter"<<endl;
    }
    void getter()
    {
        cout<<"It's Dad class"<<endl;
        cout<<"Net_worth : "<<net_worth<<endl;
    }
};

// Grandpa -> Dad -> Son
class Son : public Dad
{
public:
    void getter()
    {
        cout<<"It's Son class"<<endl;
    }
};

int main()
{

    /*Grandpa gp;
    gp.setter(75);
    gp.getter();
    cout<<endl;*/

    /*
    Dad d;
    d.setter(10000);
    d.getter();
    cout<<endl;*/

    Son s;

    s.setter(12);
    cout<<endl;
    s.setter(1000);

    //s.getter();


}
