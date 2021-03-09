#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,5,6,3,1};
    sort(arr,arr+5);//to sort the array in ascending order
    sort(arr,arr+5,greater<int>);//sort in descending oredr

    int n=7;
    int cnt=__builtin_popcount();//count the set bits in binary representation

    long long n1=165786578687;
    int cnt=__builtin_popcountll();//for long numbers

    string s="123";
    do{
        cout<<s<<endl;
        while(next_permutation(s.begin(),s.end()));

    }
    //max element in an array
    int maxi=*max_element(a,a+n);


}
