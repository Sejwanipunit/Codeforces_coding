#include <bits/stdc++.h>

using namespace std;


int main(){
	int n,x;
	cin>>n;
	int a[n];
	int sum = 0;
	int count=0;
	
	for(int i=0;i<n;i++){
        cin>>x;
        
        if(x>0){
        	sum+=x;
		}
		
		else{
			if(sum<1){
				count++;
			}
			else{
				sum--;
			}
		}
	}
	cout<<count;
}
