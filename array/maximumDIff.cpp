#include<bits/stdc++.h>
using namespace std;


int maxDiff(int arr[], int n)
{
    int MinElement = arr[0];
    int res = INT_MIN;
    for(int i=1; i<n; i++)
    {
        MinElement=min(MinElement,arr[i]);
        res = max(res, arr[i] - MinElement);
    }

    return res;
}

int main()
{
    int arr[]={7,9,5,6,3,2};
    cout<<maxDiff(arr,6);
}