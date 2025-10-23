#include<iostream>
using namespace std;

class Student
{
private: //attributes
    string name;
    int age;
    int roll;

public:

    // a parameterized constructor with default arguements

    Student(string n="",int a=0,int r=0)
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
    Student s("olivia",23,7888);
    s.display();
    cout<<endl;
    cout<<endl;

    Student ss;
    ss.display();

}
