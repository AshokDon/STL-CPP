#include<iostream>
#include<list>
#include<iterator>>
int main()
{
    list<int>lis;
    //append the element
    lis.push_back(1);//{1}
    lis.emplace_back(2);//{2}
    //what if you want push at front
    lis.push_front(5);//{5,1,2}
    list.emplace_front();
}
