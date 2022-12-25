#include<bits/stdc++.h>
using namespace std;

int b_search_Iterative(int arr[], int size, int num)
{
    int left = 0, right = size;

    while(left <= right)
        {
            int mid = left + (right-left)/2;
            if(arr[mid] == num)
                return mid;
            else if(arr[mid] < num)
                left = mid +1;
            else
                right = mid -1;
        }

    return -1;
}


int r_search_Iterative(int arr[], int left, int right, int num){
    
    if(left>right)
        return -1;

    int mid = (left +right)/2;

    if(arr[mid]== num)
        return mid;
    else if(arr[mid] > num)
        r_search_Iterative(arr, left, mid-1, num);
    else
        r_search_Iterative(arr, mid+1, right, num);
    //return -1;
}


int main()
{
    int arr[]={10,20,30,40,50,60,70};
    cout<<"Iterative b_search "<<b_search_Iterative(arr,7,60)<<endl;
    cout<<"recurssive b_search "<<r_search_Iterative(arr,0,6,60)<<endl;

}