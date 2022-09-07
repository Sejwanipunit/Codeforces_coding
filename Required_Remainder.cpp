#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;

        int ans = n%x;

        if(ans>=y){
            n = n-ans+y;
        }
        else{
            n = n-ans-x+y;
        }
        cout<<n<<endl;
    }
}