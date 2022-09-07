#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int sum1=0,sum2=0;
		if(n%4!=0){
			cout<<"NO"<<endl;
		}

	    else{
			cout<<"YES"<<endl;
            for(int i=2;i<=n;i+=2){
				cout<<i<<" ";
				sum1 += i;
			}

			for(int i=1;i<n-2;i+=2){
				cout<<i<<" ";
				sum2 +=i;
			}
			cout<<sum1-sum2<<endl;

	    }
		
    }
}
