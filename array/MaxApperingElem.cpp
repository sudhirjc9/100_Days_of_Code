#include<bits/stdc++.h>
using namespace std;

int maxApperEle(int left[], int right[], int n)
{
    int freq[101] = {0};
    for(int i=0 ; i<n; i++)
    {
        freq[left[i]]++;
        freq[right[i]+1]--;
    }

    int res = 0;
    for(int i=1; i<101; i++)
        {
            freq[i]+=freq[i-1];
            if(freq[i]> freq[res])
                res = i;
        }

        return res;
}

int main()
{
    int left[] = {1,2,4};
    int right[] = {4,5,7};

    int res = maxApperEle(left, right, 3);
    cout<<res;
}