#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	int count=0;
	cin>>n;
	int h[n];
	int a[n];
	
	for(int i=0;i<n;i++){
		
		cin>>h[i]>>a[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(h[i]==a[j]){
				count++;
			}
		}
	}
	cout<<count<<endl;
}
