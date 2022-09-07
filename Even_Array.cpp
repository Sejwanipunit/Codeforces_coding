#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int count =0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int even = 0;
        int odd = 0;
        for(int i=0; i<n; i++){
            if(i%2 != a[i]%2){
                if(a[i]%2==0){
                    even++;
                }
                else{
                    odd++;
                }
            }
        }
        if(even != odd){
            cout<<"-1"<<endl;
        }
        else{
            cout<<odd<<endl;
        }
    }
}