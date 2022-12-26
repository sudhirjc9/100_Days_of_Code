#include<bits/stdc++.h>
using namespace std;

class twoStack{
    int cap, size;
    int *arr;
    int top1, top2;

public:
    twoStack(int n)
    {
        cap = n;
        arr = new int[cap];
        top1 = -1;
        top2 = n;
    }

    bool push1(int val)
    {
        if(top1 < top2-1)
        {
            top1++;
            arr[top1] = val;
            return true;
        }
        return false;
    }
    bool push2(int val)
    {
        if(top1 < top2-1)
        {
            top2--;
            arr[top2] = val;
            return true;
        }
        return false;
    }

    int pop1()
    {
        if(top1 > -1)
        {
            int x = arr[top1];
            top1--;
            return x;
        }
        return -99;
    }
    int pop2()
    {
        if(top2 < cap)
        {
            int x = arr[top2];
            top2++;
            return x;
        }
        return -99;
    }

    int size1()
    {
        return top1+1;
    }

    int size2()
    {
        return cap - top2;
    }

};


int main()
{
    twoStack st(5);
    st.push1(10);
    st.push1(20);
    st.push2(30);
    st.push2(40);

    cout<<st.size1()<<endl;
    cout<<st.size2()<<endl;

}