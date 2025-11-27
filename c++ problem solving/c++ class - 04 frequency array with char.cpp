#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[]= "ABBAKOINIUTG";
    // letter -> 26
    int freq[26] = {0};

    // freq[] = { 1 , 2 , 0 , 0 , 0 , 0 , ...}
    for(int i=0 ; a[i] != '\0' ; i++)
    {
        char ch;
        ch = a[i]; // a[2] = b
        int n = ch - 'A' ; // b - a = 1
        freq[ n ]++; // freq[1] = 0
    }

    for(int i=0; i < 26 ; i++) // size of frequency array
    {
        if(freq[i] > 1)
        {
            cout<< char(i + 'A') <<" -> " << freq[i] <<endl;
        }

    }

}
