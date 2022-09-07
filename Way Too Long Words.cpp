#include<iostream>

using namespace std;

int main(){
	int n;
	string s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		int l = s.length();
		if(l<=10){
			cout<<s;
		}
		else{
			cout<<s.at(0)<<(l-2)<<s.at((l-1))<<endl;
		}
		cout<<endl;
	}
	
	
}
