//Month - 02 , class - 06
// c++ , class - 02

#include<bits/stdc++.h>
using namespace std;

//bubble sort -  ascending order , descending order

int main()
{
    int a[] = {-1,2,0}; // size = 4
    int size = 3;
    // -1 0 2  // a[j] < a[j+1]
    //  2 0 -1

    /*
    // ascending order
    for(int i = 0 ; i < size-1; i++) // 3-1 = 2 , i< 2
    {
        cout<<"value of i = "<<i<<endl;

        for(int j = 0 ; j < size - 1 - i ; j++ ) // 3 -1 -1 = 1
        {
            cout<<"value of j = "<<j<<endl;

            if( a[j] > a[j+1]) //a[0] > a[1]
                //
                // -1 0 2
            {
                swap(a[j], a[j+1]);
            }


        }
        cout<<endl;
    }



    for(int i=0; i<size; i++)
    {

        cout<<a[i]<<" ";
    }

    cout<<endl;

    // -1 0 2
    // 2 0 -1
    //descending order
    for(int i = 0 ; i < size-1; i++) // 3-1 = 2 , i< 2
    {
        cout<<"value of i = "<<i<<endl;

        for(int j = 0 ; j < size - 1 - i ; j++ ) // 3 -1 -1 = 1
        {
            cout<<"value of j = "<<j<<endl;

            if( a[j] < a[j+1])
                //
                // -1 0 2
            {
                swap(a[j], a[j+1]);
            }


        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=0; i<size; i++)
    {

        cout<<a[i]<<" ";
    }

    */

    //ascending order
    sort(a,a+size);

    //descending order
    sort(a,a+size,greater<int>());

    // 2 0 -1
    for(auto i : a)
    {

        cout<< i <<" ";
    }

    cout<<endl;

    //merging two arrays into another one

    int b[2] = {1,2};
    int c[5];

    int k=0;

    for(int i=0; i<size; i++) // the size of array a
    {
        c[k] = a[i]; //c[2] = a[2]

        k++; //3
    }

    for(int i =0; i< 2; i++) // the size of array b
    {
        c[k] = b[i]; //c[4] = b[1]
        k++; //5
    }

    for(int i=0; i< k; i++)
    {
        cout<<c[i]<<" ";
    }

}

