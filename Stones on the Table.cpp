#include<iostream>     

using namespace std;

int main(){
	int n;
	int c=0;
	string s;
	
	cin>>n>>s;
	
	for(int i=0;i<s.length()-1;i++){
		if(s[i]==s[i+1]){
			c++;
		}
		else{
			continue;
		}
	}
    cout<<c<<endl;
}
