#include<iostream>
#include<iterator>
#include<map>
using namespace std;
int main()
{
    map<int,int>dic;//key:value pair
    //stores data in sorted , sorted will be on keys
    map<int,pair<int,int>>dic1;//one key may have set of pairs
    map<pair<int,int>,int>dic2;//set of keys may have one value
    dic[1]=2;//dic={{1,2}}
    dic.emplace({3,1});
    dic.insert({2,4});
    {{1,2},
     {2,4},
     {3,1}
    }
    for(auto it:dic)
    {
        cout<<it.first<<" "<<it.second;
    }
    dic2[{2,3}]=10;//set of keys have one value
    cout<<dic[2];//prints 4
    cout<<dic[5];//gives 0 as it is not preasent

    auto it=dic.find(3);//gives the position where 3 is found
    auto it=dic.find(5);//position to the end as 5 is not present
    //lower and upper bound works
    auto it=dic.lower_bound(3);
    auto it=dic.upper_bound(5);
    //erase swap begin end size will works
    //we have multi map which allowes you to store same key and value
    //pair for multiple times
    //unordered_map




}
