#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,c=0;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
    for(int i=0;i<n;i++){
		if(a[i]==1){
			c++;
		}
	}
	
	if(c>=1){
		cout<<"HARD"<<endl;
	}
	else{
		cout<<"EASY"<<endl;
	}
	
}
