#include <bits/stdc++.h>

using namespace std;

int main(){
	int k,r,n;
	cin>>k>>r;
	int i =1;
	
	while(true){
		if((k*i)%10==0){
			cout<<i<<endl;
			break;
		}
		else if((k*i)%10==r){
			cout<<i<<endl;
			break;
		}
		i++;
	}
	
	

}
