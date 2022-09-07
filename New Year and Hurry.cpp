#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	int count = 0;
	int time = 0;
	cin>>n>>k;
    
    for(int i=1;i<=n;i++){
    	time  = time + 5*i;
    	if(time <= 240 - k ){
    		count ++;
		}
	
	}
	
	cout<<count;
	
}
