#include<iostream>
#include<string>
using namespace std;

//single inheritance

class Parent // Base class or Parent class
{
    int age;
protected:
    int net_worth;
public:
    string name;

    void sets(string n,int a,int nw)
    {
        name = n;
        age = a;
        net_worth = nw;
    }

    void display()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<net_worth<<endl;
    }
};

class Child1 : public Parent
{
public:
    void print()
    {
        cout<<"It's the derived class function"<<endl;
    }


};

class Child2 : public Child1
{
public:
};

int main()
{
    Parent m;
    m.sets("Olivia",30,120000);
    m.display();
    cout<<endl;


    Child1 c;
    c.sets("Nimi",35,199999);
    c.display();
    c.print();

    Child2 c2;
    c2.sets("tia",23,3356);
    c2.display();
    c2.print();


}
