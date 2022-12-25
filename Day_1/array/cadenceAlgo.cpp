#include<bits/stdc++.h>
using namespace std;

int subArraySum(int arr[], int n)
{
    int res_sum=arr[0];
    int max_sum=arr[0];

    for(int i=1; i<n; i++)
    {
        
        max_sum = max(max_sum+arr[i], arr[i]);
        res_sum = max(res_sum,max_sum);
    }

    return res_sum;
}

int main()
{
    int arr[]={2,3,-8,7,-1,2,3};

    cout<<"Maximum subarray sum: "<<subArraySum(arr,7);
}