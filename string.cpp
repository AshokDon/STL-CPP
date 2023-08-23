#include<bits/stdc++.h>

using namespace std;
void TakeInput(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
int main(){
	TakeInput();
	string s0;
	string s1("hello");
	string s3 = "how are you";
	string s4 = s3;
	char a[]={'a','b','c','\0'};
	string s5(a);
	cout<<s0<<endl;
	cout<<s1<<endl;
	//cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;
	cout<<s5<<endl;

	//append 
	s0.append("I love c++");
	cout<<s0<<endl;
	s0+=" and Python";
	cout<<s0<<endl;

	//remove
	s0.clear();

	//compare

	s0 = "Apple";
	s1 = "Mango";
	cout<<s1.compare(s0)<<endl;

	// s1 > s0;
	// s0 > s1;

	//find substrings 
	string s = "i want to have apple juice";
	int idx = s.find("apple");
	cout<<idx<<endl;
	s.erase(idx,6);
	cout<<s<<endl;

	//array of strings

	int n;
	cin >> n;
	cin.get();
	string arr[n];
	
	for(int i = 0 ; i < n ; i++){
		getline(cin,arr[i]);
	}
	sort(arr,arr+n);
	for(int i = 0 ; i < n ; i++){
		cout<<arr[i]<<endl;
	}
	//string tokenization
	char A[100]="this is a rainy day";
	char *ptr = strtok(A," ");
	cout<<ptr<<endl;
	
}
