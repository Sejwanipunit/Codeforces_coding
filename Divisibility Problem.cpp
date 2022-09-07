#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int long a,b;
		int count=0;
		cin>>a>>b;
		
		if(a%b==0){
			cout<<"0"<<endl;
		}
		else{
		int w=a%b;
		cout<<b-w<<endl;
	}
}
}
