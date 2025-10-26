#include<iostream>
#include<cstring>
using namespace std;

//this pointer - special implicit pointer ,
//which is present in member function by default
// syntax - this (keyword)


class A
{
    int id;
    string name;
    double salary; //attributes

public:

    A(int id,string name,double salary) // parameters
    {
        cout<<"Parameterized called"<<endl;
        this->id = id;    // attributes = parameters
        this->name = name;
        this->salary = salary;
    }


    void show()
    {
        cout<<"Id :"<< this->id<<endl;
        cout<<"name :"<< this->name<<endl;
        this->show_sal();
    }

    void show_sal()
    {
         cout<<"salary :"<<this->salary<<endl;
    }
};


int main()
{
    A o2(1087 , "Othoy" , 100000000);

    o2.show();
}

