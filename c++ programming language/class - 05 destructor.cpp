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

    //destructor
    ~A()
    {
        cout<<"Destructor called"<<endl;

    }

    void display()
    {
        cout<<"n = "<<n<<endl;
    }

};

void f1(A p) // pass by value , copy created
{
    p.display();
    cout<<"f1 function ends here"<<endl;
}

void ff(A &q) // pass by reference , no copy created
{
    q.display();
    cout<<"ff function ends here"<<endl;
}

int main()
{
    A o1(99) , o2(1);
    f1(o1);

    cout<<endl;
    ff(o1);

    cout<<"main function ends here"<<endl;
}
