#include<bits/stdc++.h>
using namespace std;

void removeDublicates(int arr[], int &n)
{
    int i=0;
    for(int j=0; j<n;)
    {
        if(arr[i] !=arr[j])
            {
                i++;
                j++;

            }
        else
            {
                while(arr[i] == arr[j])
                    j++;
                arr[i+1]=arr[j];
                i++;
                j++;
            }
    }
    n=i;
}

void removeDublicates1(int arr[], int n)
{
    int res=1;
    for(int i=1; i<n; i++)
    {
        if(arr[i] !=arr[res-1])
            {
                arr[res]=arr[i];
                res++;
            }
    }
}


int main()
{
    int arr[]={10,20,20,30,30,30,30};
    int n=7;
    removeDublicates1(arr,n);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}