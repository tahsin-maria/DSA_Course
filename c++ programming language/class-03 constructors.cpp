#include<iostream>
using namespace std;

class Student
{
private: //attributes
    string name;
    int age;
    int roll;

public:

    //constructor -> a special function that is automatically called when an obj is created
    //syntax
    //classname() { ... }

    // a custom default constructor

    Student() //initializes an obj
    {
        cout<<"Default Constructor called"<<endl;


        name = "Othoy";
        age = 21;
        roll = 1087;

        cin>>name;
        cin>>age;
        cin>>roll;

        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"roll : "<<roll<<endl;
    }

    void setter(string n,int a,int r)
    {
        name = n;
        age = a;
        roll = r;
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"roll : "<<roll<<endl;
    }

    //void getter()
    //{
    //}

};



int main()
{
    Student s;// built-in default constructor gets called when there's no other constructor
    //custom default constructor
    cout<<endl;
    cout<<endl;

    Student ss;
    // s.setter("Othoy",21,1087);
    // s.getter();
}
