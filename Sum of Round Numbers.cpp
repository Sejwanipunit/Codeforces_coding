#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> vec;
		
		if(n%10!=0){vec.push_back(n%10);}
		int ans = n%10;
		n -= ans;
		if(n%100!=0){vec.push_back(n%100);}
		 ans = n%100;
		n -= ans;
		if(n%1000!=0){vec.push_back(n%1000);}
		 ans = n%1000;
		n -= ans;
		if(n%10000){vec.push_back(n%10000);}
		if(n>=10000 && n%10000 ==0){vec.push_back(n);}
		
		cout<<vec.size()<<endl;
		
		for(int i=0;i<vec.size();i++){
			cout<<vec[i]<<" ";
		}
		
	}
}
