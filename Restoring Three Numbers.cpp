#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;
	int arr[4];
		for(int i=0;i<4;i++){
			cin>>arr[i];
		}
		
		sort(arr,arr+4);
		
		a = arr[3] - arr[0];
		b = arr[1]-a;
		c = arr[0] - b;
		
		cout<<a<<" "<<b<<" "<<c;
		
	}
