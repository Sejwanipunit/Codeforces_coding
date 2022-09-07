#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int a=0,b=0;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(isupper(s[i])){
			a++;
		}
		else{
			b++;
		}
	}
	if(a>b){
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		cout<<s<<endl;
	}
	else if(a==b || a<b){
	    transform(s.begin(), s.end(), s.begin(), ::tolower);
	    cout<<s<<endl;
	}
}
