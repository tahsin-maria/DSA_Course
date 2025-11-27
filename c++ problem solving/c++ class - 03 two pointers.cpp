#include<bits/stdc++.h>
using namespace std;

// month - 02 , class - 07
// c++ class - 03

// Two pointers -> pattern

int main()
{
    int a[5] = {9, 1, 5, 4, 7}; //sorted array (in ascending order)
    sort(a,a+5); //sorted now
    //
    int target = 9;

    int left, right;
    left = 0;   // left = first index
    right = 4; // right = size - 1 -> last index

   //1 4 5 7 9
   //target = 9
    while(left < right)
    {
        int sum = a[left] + a[right] ; // sum = a[0] + a[3] // sum = 1 + 7 = 8
        // sum = 8
        if(sum == target)
        {
            cout<<"indices are : "<<left<<" "<<right<<endl;
            break;
        }
        else if(sum < target)
        {
            left++;

        }
        else if( sum > target)
        {
            right--;
        }

    }


}
