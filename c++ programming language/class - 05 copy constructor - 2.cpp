#include<iostream>
using namespace std;

class A
{
    int n;

public:


    A(int num)
    {
        cout<<"Parameterized constructor called"<<endl;
        n = num;
    }

    void display()
    {
        cout<<"n = "<<n<<endl;
    }



    A(const A& o) // pass by reference
    {
        cout<<"Copy constructor called"<<endl;
        n = o.n; // o2.n = o1.n
    }
};

void f1(A p) // pass by value
{
    p.display();
    cout<<"f1 function ends here"<<endl;
}

A f2() // returns an obj of class A
{
    A t(12);
    cout<<"f2 function returned"<<endl;
    return t; // the data of obj t gets copied to a temporary obj
}


int main()
{
    A o1(99);
    // this pointer of o1 gets passed automatically

    A o2 = o1; //invokes copy constructor
    // o1 passed explicitly
    // this pointer of o2 gets passed

    cout<<endl;

    f1(o2);
    A o4 = f2();
    o4.display();

}
