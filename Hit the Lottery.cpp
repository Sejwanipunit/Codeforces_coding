#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int count=0;
	cin>>n;
	
	while(n){
		if(n>=100){
			count++;
			n = n-100;
		}
		else if(n>=20){
		    count++;
			n = n-20; 
		}
		else if(n>=10){
			count++;
			n = n-10;
		}
		else if(n>=5){
			count++;
			n = n-5;
		}
		else if(n>=1){
			count++;
			n = n-1;
		}
	}
	cout<<count<<endl; 
}

