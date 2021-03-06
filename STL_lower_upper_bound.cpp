#include<iostream>
#include<iterator>
#include<vector>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    //lower and upper bound works in log(n)
    //we can use in binary search because binary search takes log(n)
    vector<int>vet={1,2,3,4,5};
    int arr[]={1,2,3,4,5};

    int inda=lower_bound(arr,arr+5,4)-arr;//for array
    int indv=lower_bound(vet.begin(),vet.end(),4)-vet.begin();//for vector

    int indx=upper_bound(arr,arr+5,3)-arr;
    int indv=upper_bound(vet.begin(),vet.end(),3)-vet.begin();
    cout<<ind<<endl;



    //problems related to lower_bound and upper_bound
    //find the element x present in the array and print its first  occurrence index, if it not present print -1.

    int n=9;
    int a[n]={1,2,5,5,5,6,7,8,9};
    int x=5;
    int ind=lower_bound(a,a+n,x)-a;
    if(n!=ind && a[ind]==x)
    {
        cout<<ind;
    }
    else{
        cout<<-1;
    }
    //find the element x present in the array and print its first  occurrence index, if it not present print -1.

}
