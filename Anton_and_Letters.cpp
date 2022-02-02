#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string s;
	set <char> k;
	getline(cin,s);
	int n = s.length();
	
	for(int i=0;i<n;i++){
		if(isalpha(s[i])){
			k.insert(s[i]);
		}
	}
	cout<<k.size()<<endl;
}
