#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>qu;//FIFO-->first in first out
    qu.push(1);
    qu.push(2);
    qu.emplace(5);
    qu.back()+=5;
    //cout<<qu.back()<<endl;
    qu.pop();
    //cout<<qu.front();
    //priority queue
    priority_queue<int>pq;//it stores in decending order
    pq.push(1);//{1}
    pq.push(10);//{10,1}
    pq.push(5);//{10,5,1}
    pq.emplace(8);//{10,8,5,1}
    cout<<pq.top()<<endl;//prints 10
    pq.pop();//10 will be removed
    cout<<pq.top()<<endl;//8 will be printed

    //minimum heap-- to store in accending oredr
    priority_queue<int,vector<int>,greater<int>>pq1;
    pq1.push(10);//{10}
    pq1.push(8);//{8,10}
    cout<<pq1.top();



}
