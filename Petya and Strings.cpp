#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  
int main(){
	string a,b;
	cin>>a>>b;
	transform(a.begin(), a.end(), a.begin(), ::toupper);
	transform(b.begin(), b.end(), b.begin(), ::toupper);
	if(a.compare(b) >0){
		cout<<"1"<<endl;
	}
	else if(a.compare(b)==0){
		cout<<"0"<<endl;
	}
	else{
		cout<<"-1"<<endl;
	}
}
