#include<iostream>

using namespace std;

int main(){
	
	int m,n;
	
	cin>>m>>n;
	if(m*n<2){
		cout<<"0";
	}
	else{
		cout<<(m*n)/2<<endl;
	}
}
