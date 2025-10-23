#include<iostream>
using namespace std;

class Student
{
private: //attributes
    string name;
    int age;
    int roll;

public:
    //default constructor
    Student()
    {
        cout<<"Default Constructor called"<<endl;

        name = "Othoy";
        age = 21;
        roll = 1087;

    }

    // a parameterized constructor

    Student(string n,int a,int r)
    {
        cout<<"Parameterized Constructor called"<<endl;

        name = n;
        age = a;
        roll = r;

    }

    void display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"roll : "<<roll<<endl;
    }

};



int main()
{
    Student s("olivia",23,7888); //calls parameterized
    s.display();
    cout<<endl;
    cout<<endl;

    Student ss; // calls default
    ss.display();

}
