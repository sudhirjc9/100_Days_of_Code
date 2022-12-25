// This solution works on sorted array only.

#include<bits/stdc++.h>
using namespace std;

void freq(int arr[], int n)
{
    int seen = arr[0], count = 1, i;
    for(i=1; i<n; i++)
    {
        if(arr[i]==seen)
            count++;
        else{

            cout<< arr[i-1]<<" "<<count<<endl;
            seen = arr[i];
            count = 1;
        }
    }
    cout<< arr[i-1]<<" "<<count<<endl;  // because loop gets terminnated and the last element is not printed because of this so we have to print it individially

}

int main()
{
    int arr[] = {10,10,10,25, 30,30};
    freq(arr, 6);
}