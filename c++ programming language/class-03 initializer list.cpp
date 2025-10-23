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
    //initializer list
    Student(string n,int a,int r) : roll(122),age(a),name(n)
    {
        cout<<"Parameterized Constructor called"<<endl;
        cin>>name;
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

}
