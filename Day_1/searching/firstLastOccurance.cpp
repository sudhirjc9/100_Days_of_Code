#include<bits/stdc++.h>
using namespace std;

int firstOccurance(int arr[], int size, int num){

    int left = 0, right = size;

    while(left <= right)
    {
        int mid = (left + right)/2;
        if(arr[mid] ==num)
        {
            if(mid ==0  || arr[mid-1] !=num)
                return mid;
            right = mid-1;
        }

        else if(arr[mid] <= num)
            left = mid+1;
        else
            right = mid - 1;
    }

    return -1;
}

int lastOccurance(int arr[], int size, int num){

    int left = 0, right = size;

    while(left <= right)
    {
        int mid = (left + right)/2;
        if(arr[mid] ==num)
        {
            if(mid ==size-1  || arr[mid+1] !=num)
                return mid;
            left = mid+1;
        }

        else if(arr[mid] <= num)
            left = mid+1;
        else
            right = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[]={1,10,10,10,20,20,30};
    int num = 10;

    cout<<"first Occurance of "<<num<<" is "<<firstOccurance(arr,7,num)<<endl;
    cout<<"last Occurance of "<<num<<" is "<<lastOccurance(arr,7,num)<<endl;

    cout<<"total occurance of "<<num<<" is "<<(lastOccurance(arr,7,num) - firstOccurance(arr,7,num))+1<<endl;

}