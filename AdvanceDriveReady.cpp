#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    int arr[5] = {10,1,23,4,5};
    // .          x1 x2
    //in python list 
    vector<int>A;
    A.push_back(10);//[10]
    A.push_back(20);//[10,20]
    A.push_back(30);//[10,20,30]
    A.insert(A.begin()+2,40);//
    A.pop_back();//[10,20]
    cout<<A[1]<<endl;//20
    sort(arr+1,arr+3);
    sort(A.begin(),A.end());//accending order
    sort(A.rbegin(),A.rend());//decending order
    reverse(A.begin(),A.end());//reverse
    //loops on vector
    for(int i = 0 ; i < A.size() ; i++){
        cout<<A[i]<<" ";
    }
    for(auto i : A){
        cout<<i<<" ";
    }
    //find an element in a vector
    auto it = find(A.begin(),A.end(),20);
    if(it == A.end()){
        cout<<"not find";
    }
    else{
        cout<<"find";
    }
    //erase an element in a vector
    //A =[10,20,30]
    //
    A.erase(A.begin()+2);//20
    vector<int>B(2,100);//[100,100]
    vector<int>C;
    C.pb(10);
    C.pb(20);
    C.pb(30);
    C.pb(40);
    C.pb(50);
    //C = [10,20,30,40,50]
    //Binary search
    bool present = binary_search(C.begin(),C.end(),30);//true


    //map
    //map, unordered_map, multi map
    map<int,int>mpp;// key sorted
    mpp[2] = 100;
    mpp[1] = 200;
    mpp[3] = 300; // mpp = {1:200,2:100,3:300}
    mpp.insert({4,400});
    // mpp = {1:200,2:100,3:300,4:400}
    // .                   i
    //loop on map
    for(auto i : mpp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    mpp[5]++;
    // mpp = {1:200,2:100,3:300,4:400,5:1}


    //unordered_map
    unordered_map<int,int>ump;// key unsorted
    ump[2] = 100;
    ump[1] = 200;
    ump[3] = 300; 
    ump.insert({4,400});
    for(auto i : ump){
        cout<<i.first<<" "<<i.second<<endl;
    }
    ump[5]++;
    //multi map
    multimap<int,int>mp;// key sorted
    mp.insert({1,100});
    mp.insert({1,200});
    mp.insert({1,300});//

    //list
    list<int>ls;
    ls.push_back(10);
    ls.push_back(20);
    ls.push_front(30);//[30,10,20]
    ls.pop_back();//[30,10]
    ls.pop_front();//[10]
    ls.insert(ls.begin(),100);//[100,10]
    ls.insert(ls.begin(),2,200);//[200,200,100,10]

    //set
    set<int>st;
    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(10);//
    //st = {10,20,30}

    //unordered_set
    unordered_set<int>ust;
    ust.insert(20);
    ust.insert(10);
    ust.insert(30);//

    //multiset
    multiset<int>mst;
    mst.insert(10);
    mst.insert(10);
    mst.insert(20);
    mst.insert(30);//{10,10,20,30}

    //stack
    stack<int>stk; // LIFO
    stk.push(10);
    stk.push(20);
    stk.push(30);//{10,20,30}
    //stk.pop();//30 // {10,20}
    stk.top();//
    st.size();
    st.empty();// true or false

    //queue
    queue<int>q; // FIFO
    q.push(10);
    q.push(20);
    q.push(30);//{10,20,30}
    //q.pop();//10 // {20,30}
    q.front();//20  
    q.back();//30
    q.size();
    q.empty();// true or false

    //priority_queue
    priority_queue<int>pq; // max heap
    pq.push(10);
    pq.push(20);
    pq.push(30);//{30,20,10}
    pq.pop();//30 // {20,10}
    pq.top();//20

    //min heap
    priority_queue<int>pq1;
    pq1.push(-1*10);
    pq1.push(-1*20);
    pq1.push(-1*30);//{-30,-20,-10}
    pq1.pop();//-10
    pq1.top();//-1*-20 = 20

    //pair
    pair<int,int>p;
    p = {10,20};
    p.first = 10;
    p.second = 20;
    vector<pair<int,int>>v;
    v.push_back({10,20});
    v.push_back({30,40});
    v.push_back({50,60});//[{10,20},{30,40},{50,60}]

    //tuple
    tuple<int,int,int>t;
    t = {10,20,30};
    t = make_tuple(10,20,30);
    get<0>(t);//10

    //deque
    deque<int>dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);//{30,10,20}
    dq.pop_back();//{30,10}
    dq.pop_front();//{10}
    




}
