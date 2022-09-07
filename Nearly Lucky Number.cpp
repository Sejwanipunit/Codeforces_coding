#include<iostream>

using namespace std;

int main(){
	string n;
	cin>>n;
	int a=0;
	for(int i=0;i<n.length();i++){
		if(n[i]=='4' || n[i]=='7'){
			a++;
		}
	}
	if(a==4 || a==7){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	
}
