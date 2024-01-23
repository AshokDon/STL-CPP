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





}
