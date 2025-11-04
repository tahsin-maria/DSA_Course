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
//syntax -> class classname : access_specifier classname{};
class Child : public Parent   //Derived class or Child class
{
public:
    void print()
    {
        cout<<"It's the derived class function"<<endl;
    }
};

int main()
{
    Parent m;
    m.sets("Olivia",30,120000);
    m.display();
    cout<<endl;

    //advantage of inheritance -> code reusability
    Child c;
    c.sets("Nimi",35,199999);
    c.display();
    c.print();

}
