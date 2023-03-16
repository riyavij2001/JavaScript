#include <bits/stdc++.h>
using namespace std;

stack<int> deleteMid(stack<int> st)
{
    stack<int> temp;
    int count = 0;
    while(!st.empty())
    {
        int top = st.top();
        temp.push(top);
        st.pop();
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if(i==(count/2))
        {
            temp.pop();
            continue;
        }
        int top = temp.top();
        st.push(top);
        temp.pop();
    }
    return st;
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st = deleteMid(st);
    while (!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}