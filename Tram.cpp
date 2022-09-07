#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	int n,max=0,s=0;
	cin>>n;
	int a[n];
	int b[n];
	int d[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		s = s-a[i]+b[i];
		d[i]= s;
	}
	for(int i=0;i<n;i++){
		if(d[i]>max){
			max = d[i];
		}
		else{
			max=max;
		}
	}
	cout<<max<<endl;
}
