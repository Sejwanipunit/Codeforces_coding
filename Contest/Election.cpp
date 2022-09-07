#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int t;
	cin>>t;
	while(t--){
		int count=0;
		long long int arr[3];
		for(int i=0;i<3;i++){
			cin>>arr[i];
		}
		int n = sizeof(arr)/sizeof(arr[0]);
		
		long long int max = *max_element(arr, arr+n);
		
		for(int i=0;i<n;i++){
			if(arr[i]==max){
				count++;
			}
		}
			if(count==3){
				for(int i=0;i<3;i++){
					cout<<"1";
					cout<<" ";
				}
				
			}
			else if (count == 2){
				for(int i=0;i<n;i++){
					if(arr[i]==max){
						cout<<"1";
					}
					else{
						cout<<abs(arr[i]-(max+1));
					}
					cout<<" ";
				}
				
				
			}
			else if (count==1){
				for(int i=0;i<n;i++){
					if(arr[i]==max){
				cout<<"0";
			}
			else{
				cout<<abs(arr[i]-(max+1));
			}
			cout<<" ";
				}
				
				
			}
		cout<<endl;			
		}
		
	}
	
