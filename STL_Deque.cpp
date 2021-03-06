#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>de;
    de.push_back(1);
    //cout<<de[0];
    de.emplace_back(2);
    //cout<<de[0]<<" "<<de[1];
    de.push_front(5);
    //cout<<de[0];
    de.emplace_front(10);
    //cout<<de[0];
    de.pop_front();//removes first element
    de.pop_back();//removes the last element
    cout<<de.back()<<endl;
    cout<<de.front();
}
