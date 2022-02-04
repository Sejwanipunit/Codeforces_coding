#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,maxindex=0,minindex=0,count=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max = 0,min=1000;
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max = a[i];
			maxindex =i;	
		}
		if(a[i]<=min){
			min = a[i];
			minindex = i;
		}
	}
	
		if(minindex<maxindex){
			count = (maxindex-0) + (n-(minindex+1)-1);
			cout<<count<<endl;
		}
		else{
			count = (maxindex-0)+(n-minindex-1);
			cout<<count<<endl;
	}
	
}
