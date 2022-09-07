#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,n1,n2;
	int c[n];
	cin>>n>>n1;
	int a;
	for(int i=0;i<n1;i++){
		cin>>a;
		c[a]=1;
	}
	cin>>n2;
	int b;
	for(int i=0;i<n2;i++){
		cin>>b;
		c[b]=1;
	}
	
	bool ans =true;
	for(int i=1;i<=n;i++){
		if(c[i]!=1){
			ans = false;
			break;
		}
	}
	
	if(ans){
		cout<<"I become the guy."<<endl;
	}
	else{
		cout<<"Oh, my keyboard!"<<endl;
	}
	
	
}

