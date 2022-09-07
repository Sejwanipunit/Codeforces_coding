#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n,count=0;
	cin>>n;
	int a[n];
	int b[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		
		int s = abs(a[i]-b[i]);
		
		if(s>=2){
			count++;
		} 
	}
	cout<<count<<endl;
}
