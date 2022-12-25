#include<bits/stdc++.h>
using namespace std;

bool equilibriumPoint(int arr[], int n)
{
    int total_sum, left_sum=0;
    for(int i=0; i<n; i++)
        total_sum+=arr[i];

    for(int i=0; i<n; i++)
    {
        total_sum-=arr[i];
        if(left_sum ==total_sum){
            cout<<"left_sum and right_sum is equal to "<<left_sum<<endl;
            return true;
        }
        left_sum+=arr[i];
    }

    return false;
}
int main()
{
   // int arr[]={3,4,8,-9, 20,6};
      int arr[]={4,2,-2};
    cout<<equilibriumPoint(arr,3);
}