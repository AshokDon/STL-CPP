#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int>ms;//it can store duplicates
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    ms.erase(1);//it erases all ones present in set
    ms.erase(ms.find(1));//it erases the fist one in the set
    for(auto it:ms){
        cout<<it<<" ";
    }
    ms.count(1);//give the count of ones in set
    //what if you want erase two ones
    ms.erase(ms.find(1),ms.find(1)+2);
}
