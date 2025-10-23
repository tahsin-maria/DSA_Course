#include<iostream>
using namespace std;

class Student
{
private: //attributes
    string name;
    int age;
    int roll;

public:
    // a parameterized constructor

    Student(string n,int a,int r)
    {
        name = n;
        age = a;
        roll = r;
    }

    void display()
    {
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"roll : "<<roll<<endl;
        cout<<endl;
    }

};

void fun(Student obj) //copy object created here
{
    obj.display();
}

int main()
{
    Student s("olivia",23,7888); //calls parameterized
    fun(s); // call/pass by value
}



