#include<bits/stdc++.h>
using namespace std;

// check if an array is palindrome or not using two pointers

int main()
{
    char a[] = "DAD"; //sorted array (in ascending order)

    int left, right;
    left = 0;   // left = first index
    right = 2; // right = size - 1 -> last index

    while(left < right)
    {
        if(a[left] != a[right])
        {
            cout<<"Not palindrome!"<<endl;
            return 0;
        }

        left++;
        right--;
    }

    cout<<"Palindrome"<<endl;


}
