#include<iostream>
 
using namespace std;
 
int main(){
	int k,n,w;
	int sum=0,b;
	cin>>k>>n>>w;
	for(int i=1;i<=w;i++){
		sum = sum+(k*i);
		}
	b = sum-n;
	
	if(b<0){
		cout<<"0"<<endl;
	}
	else{
		cout<<b<<endl;
	}
	
}
