#include<iostream>
#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main(){
	set <char> k;
	int n;
	cin>>n;
	string s;
	cin>>s;
	
	transform(s.begin(),s.end(),s.begin(), ::toupper);
	
	for(int i=0;i<n;i++){
		if(isalpha(s[i])){
			k.insert(s[i]);
		}
	}
	
	if(k.size()==26){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}
