#include<bits/stdc++.h>
using namespace std;

int* learders(int arr[], int n)
{
    int *ptr = new int[n];
    int greater = arr[n-1];
    ptr[0] = arr[n-1];
    int k=0;
    for(int i =n-2; i>=0; i--)
        {
            if(arr[i] > greater)
            {
                ptr[++k] = arr[i];
                greater = arr[i];
            }

        }
        return ptr;
}

int main()
{
    int arr[]={7,10, 4,3,6,5,2};
    int *ptr=learders(arr,7);

    for(int i=0; i<7; i++)
        cout<<ptr[i]<<" ";

}