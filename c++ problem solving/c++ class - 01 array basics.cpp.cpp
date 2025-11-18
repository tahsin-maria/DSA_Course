#include<iostream>
using namespace std;

int main()
{
    // 1 2 3 4
    // 4 2 3 1
    // 4 3 2 1  // condition -> left < right
    // 1 2 3 4 5 // left != right



    // 4 3 2 1

    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    // reverse an array in place

    /*
    int left, right;
    left = 0; // first index
    right= n-1; //last index

    while( left < right )
    {
        swap( a[left], a[right]);

        left++;
        right--;
    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    */



    /*
    //insert at position or index

    // 1 2 99 3 4
    // a[i] = a[i-1]
    // a[i-1] = 3
    // a[i] = 4

    // val = 99
    // idx = 2

    // array size fixed -> n++;

    n++;

    int v,idx;
    cout<<"Insert value and index :"<<endl;
    cin>>v>>idx;

    for(int i=n-1 ; i > idx ; i--)
    {
        a[i] = a[i-1];
    }

    a[idx] = v;

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    */


    /*
    //delete from position or index
    int idx;
    cout<<"Insert index :"<<endl;
    cin>>idx;

    // 1 2 4
    // a[i] = a[i+1]
    // idx = 2

    for(int i = idx; i<n-1 ; i++)
    {
        a[i] = a[i+1];
    }
    n--;


    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    */


    // copy from one array to another
    int b[n];
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }

    for(int i=0; i<n; i++)
    {
        a[i] = b[i];
    }

    // 9 7 6 0
    // 9 7 6 0

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

}
