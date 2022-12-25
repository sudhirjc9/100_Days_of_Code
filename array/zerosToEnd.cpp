#include<bits/stdc++.h>
using namespace std;

void zeroToEnd(int arr[], int n)
{
    int res=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
            {
                swap(arr[res] ,arr[i]);
                res++;
            }
    }
}

int main()
{
    int arr[]={8,5,0,10,0,20};

    zeroToEnd(arr,6);

    for(auto &x: arr)
        cout<<x<<" ";
}