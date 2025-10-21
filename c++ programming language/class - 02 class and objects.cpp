#include<iostream>
#include<cstring> //for strcpy()
using namespace std;

//class - 09 , title - classes and objects
// c++ oop class - 02

//create a basic class
class Student //template / blueprint
{
// access specifier(Encapsulation) -> 3 -> private , public , protected
// by default private
private:
    // member variable -> attributes -> variables of a class
protected:
    float cgpa;

public:
    char name[100];
    int roll,age;

    //member functions -> methods

    void setter(const char *nm, int r, int a );   // taking input

    void getter(); //displays output

    void fun(int n); //member function declaration

}; // no memory allocated here

//syntax
//returnType classname :: functionName(para_list){...}

void Student :: setter(const char *nm, int r, int a )
{
    cout<<"For input"<<endl;
    strcpy(name, nm);
    roll = r;
    age = a;

}


void Student :: getter()
{
    cout<<"For output"<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Roll : "<<roll<<endl;
    cout<<"Age : "<<age<<endl;

}


void Student :: fun(int n) //function definition outside class
{
    int x=90;
    cout<<x;
    cout<<name<<roll<<age<<endl;
    cout<<cgpa<<endl;
}


int main()
{
    // objects -> instance(real world usable copy) of a class
    Student ob1, ob2;  // ob1 is an object of Student class
    // ob1.roll = 2310034;
    // cout<<ob1.roll<<endl;  // 2310034
    //  cout<<ob2.roll<<endl; // garbage value

    //  ob1.age = 21;
    // cout<<ob1.age<<endl;

    // ob1.cgpa = 4.00; // protected member variables are inaccessible from main()
    // strcpy(ob1.name, "Tahsin" );
    //  cout<<ob1.name<<endl;

    cout<<endl;

    ob1.setter("Tahsin", 2310034, 21);
    cout<<endl;

    ob1.getter();
    cout<<endl;
    cout<<endl;


    ob2.setter("Maria",1087,20);
    ob2.getter();

    ob2.fun(2);

}

