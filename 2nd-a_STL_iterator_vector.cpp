#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vet={10,20,30,40};
    vector<int>::iterator it=vet.begin();//it refers to address of that point
    // so if you want value at that point use *
    cout<<*(it)<<endl;
    //it++;
    it=it+2;
    cout<<*(it);

    vector<int>::iterator it=vet.end();//it point the address of end-1
    vector<int>::iterator it=v.rend();//it point the address of second position that means 20 address
    vector<int>::iterator it.rbegin();//it point the address of last value

    cout<<vet[0]<<" "<<vet.at(0)<<endl;//to access the values in vector
    cout<<vet.back()<<endl;//access the last value

    //ways to print the vector
    for(vector<int>::iterator it=vet.begin();it!=vet.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it=vet.begin();it!=vet.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it:vet)
    {
        cout<<it<<" ";
    }
    //erase function
    vet.erase(vet.begin());//it erase the first value
    vet.erase(vet.begin()+1);//it erase second value
    //what if you want erase range of elements
    //{10,20,30,40,50}
    vet.erase(vet.begin()+1,vet.begin()+4);//{10,50}
    //insert function in vector
    vet.insert(vet.begin(),300);//300 will be inserted at the begining
    vet.insert(vet.begin()+1,2,10)//now two 10's will be inserted from second
    vector<int>copy(2,10);//{10,10}
    vet.insert(vet.begin(),copy.begin(),copy.end());
    //to erase the last element
    vet.pop_back();
    //v1={1,2}
    //v2={4,5}
    v1.swap(v2);//v1={4,5} v2={1,2}
    vet.clear();//to erase all the values
    cout<<vet.empty();//gives true if vector is empty



}
