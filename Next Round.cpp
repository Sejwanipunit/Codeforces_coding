#include<iostream>

using namespace std;

int main(){
	int n,k;
	int c = 0;
	cin>>n>>k;
	
	int a[n];
	
	for(int i=1;i<n+1 && k<=n;i++){
		cin>>a[i];
	}
	if(k<=n){
	for(int i=1;i<n+1;i++){
		if(a[i]>0){
		    if(a[i]>=a[k]){
			c++;
		}
	
	}
	
}
if(c>=0){
	cout<<c;
}
}
else{
 cout<<"0";

}
}
