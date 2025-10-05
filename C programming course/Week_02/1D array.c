#include <stdio.h>
#include<limits.h> //header file for INT_MAX & INT_MIN


int main()
{
    int x1 = 2, x2 = 5, x3 = 1,x4 = 0;

    int arr[] = {2,5,1,1,-3,0,4,5,5,5}; // index -> 0 -> 1 -> 2 -> 3 = 4-1 = array_size-1
    //{elements of that array}
    //data_type array_name[array_size] = initializer_list
    //b[]->array

    // number of elements = 4
    // index -> position of elements


    // arr[0] = 2
    //arr[1] = 5
    // arr[2] = 1
    //arr[3] = 0

    for(int i=0 ; i<4 ; i++) //input
    {
        // scanf("%d", &arr[i]); //to access array
    }

    printf("\n");

    for(int i=0 ; i<4 ; i++) //output //i -> index
    {
        // printf("%d ", arr[i]); //to access array
    }

    //arr[4] -> runtime error

    printf("\n");

    for(int i=3 ; i>=0 ; i--) //reverse output //i -> index
    {
        //printf("%d ", arr[i]); //to access array
    }

    printf("\n");

    long long int sum=0 ;
    for(int i=0; i<4; i++) //sum of all elements
    {
        sum += arr[i];
    }

    //printf("sum= %lld\n",sum);

    printf("\n");

    int even=0,odd=0;

    for(int i=0; i<4; i++) //count even , odd
    {
        if( arr[i] % 2 == 0 ) // even
        {
            even++;
        }
        else //odd
        {
            odd++;
        }

    }
    // printf("number of even elements = %d\n number of odd elements = %d", even,odd);

    int n;
    scanf("%d",&n);//4

    int a[n]; //declaration , n->size of array

    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]);
    }

    int mx = INT_MIN; //variable for storing max element
    int mn = INT_MAX;  //variable for storing min element

    //a[n] ={1,3,0}
    for(int i=0;i<n;i++)
    {
        if( a[i] > mx) //i=2 -> 0
        {
            mx = a[i]; //->3
        }

       if( a[i] < mn) // 0
        {
            mn = a[i]; //->0
        }


    }

    printf("maximum element = %d\n minimum element = %d\n",mx,mn);

}
































