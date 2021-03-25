#include<iostream>
#include<utility>
using namespace std;
int main()
{
    //pair dicleration
    pair<int,char>p={1,'h'};
    cout<<p.first<<" "<<p.second<<endl;

    //pair in pair
    pair<int, pair<int,int>>p1={1,{2,3}};

    cout<<p1.first<<" "<<p1.second.first<<endl;

    //pair with array
    pair<int,int>arr[]={{1,2},{3,4}};
    cout<<arr[0].first<<endl;
    //make_pair
    pair<char,int>pa=make_pair('A',2);
    cout<<pa.second;
    return 0;
}
