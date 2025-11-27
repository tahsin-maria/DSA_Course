#include<bits/stdc++.h>
using namespace std;
// Month - 02 , class - 09
// c++ class - 04

// FREQUENCY ARRAY

int main()
{
    int a[10] = { 9, 1, 2, 5, 9, 9, 2, 1, 3, 3};

    int freq[10] = {0}; // initializing a frequency array
    // size = max_element + 1

    // a[i] -> element
    // freq[number] -> element

    //freq[10] = {0 , 2 , 2 , 2 , 0 , 1 , 0 , 0 , 0 , 3}

    for(int i=0 ; i<10 ; i++)

    {
        freq[a[i]]++; //a[9] = 3 , freq[3] = 1 + 1 = 2
    }

    for(int i=0; i < 10 ; i++) // size of frequency array
    {
        cout<< i <<" -> " << freq[i] <<endl;
    }

}
