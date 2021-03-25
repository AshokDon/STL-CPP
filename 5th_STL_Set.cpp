#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    //set arrange them in ascending order , no duplicate will be taken
    std::set<int>se;
    se.insert(1);//{1}
    se.insert(2);//{1,2}
    se.insert(4);//{1,2,4}
    se.emplace(3);//{1,2,3,4}
    //begin(),end(),rbegin(),rend(),size(),empty(), and swap() are same
    auto it=se.find(3);//to check if element is present
    cout<<*(it);
    auto it=se.find(6);//if element is not present goes to last+1 address
    //how to erase
    se.erase(5)//erase 5 {1,2,3,4}
    auto it=se.find(4);
    se.erase(it);//it removes the position and value at that particular address
    auto it1=se.find(2);
    auto it2=se.find(4);
    se.erase(it1,it2);//erase in the given range from first to last-1 --> from it1 to it2-1 it erases 
    //count
    int c=se.count(1);//if it present count is 1 else 0

}
