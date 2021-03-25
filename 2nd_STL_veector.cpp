#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //an empty vector
    vector<int>arr;
    arr.push_back(1);//{1}
    arr.emplace_back(2);//{1,2}
    cout<<arr[1]<<endl;
    //2D vector
    vector<vector<int>>mat={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<mat.size();i++)
    {
        for(int j=0;j<mat[i].size();j++)
        {
            cout<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    //vector with pair elemts
    vector<pair<int,int>>ve;
    ve.push_back({4,5});//{{4,5}}
    ve.emplace_back(7,8);//{{4,5},{7,8}}
    //vector of size 5
    //every one as 100
    vector<int>vat(5,100);//{100,100,100,100,100}
    vector<int>vat(5);//{0,0,0,0,0}
    vector<int>vat(5,13);
    //copy one vector into another
    vector<int>vet1(vet);//vet1={13,13,13,13,13}

    return 0;
}
