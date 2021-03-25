#include<iostream>
#include<stack>
using namespace std;
int main()
{
    //last in first out-->LIFO
    stack<int>st;
    st.push(1);
    //cout<<st.top();
    st.push(2);
    st.push(3);
    st.emplace(5);
    cout<<st.top();
    st.pop();//top will be removed
    st.size();//gives size of stack
    cout<<st.empty();//gives true if stack is empty or false
    stack<int>st1,st2;
    st1.swap(s2);//swaps the stacks s1 and s2


}
