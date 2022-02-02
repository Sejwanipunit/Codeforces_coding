#include<iostream>

using namespace std;

int main(){
	int a=0,b=0,n;
	string s;
	
	cin>>n>>s;
	
	for(int i=0;i<n;i++){
		if(s[i]=='A'){
			a++;
		}
		else{
			b++;
		}
	}
	
	if(a>b){
		cout<<"Anton"<<endl;
	}
	else if(b>a){
		cout<<"Danik"<<endl;
	}
	else{
		cout<<"Friendship"<<endl;
	}
}
