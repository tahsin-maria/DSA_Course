#include<bits/stdc++.h>
using namespace std;

// 1 3 5 8 9 12 32 50 90 99
// l = 2 , h = 3
// mid = 2
// 5

int bin_srch(int a[],int n,int val)
{
    int low, high ;
    low = 0;
    high = n-1;
//
    while( low <= high )
    {
        int mid = low + (high - low)/2; // safest

        if( val == a[mid])
        {
            return 1;
        }
        else if( val < a[mid])
        {
            high = mid-1;
        }
        else if( val > a[mid])
        {
            low = mid+1;
        }

    }
    return 0;
}

int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    for(int i=1 ; i<=q; i++)
    {

        int val;
        cin>>val;

        if(bin_srch(a,n,val)==1)
        {
            cout<<"Found\n";
        }
        else
        {
            cout<<"Not found\n";
        }

    }
}
