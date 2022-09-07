#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        if(a==b){
           int ans = (2*a)*(2*a);
           cout<<ans<<endl;
           
        }
        else if(a%b ==0 || b%a==0){
            int c = max(a,b);
            int ans = c*c;
            cout<<ans<<endl;
            
        }
        else{
           int c = min(a,b);
           int ans = (c*2)*(c*2);
           if(c*2>max(a,b)){
               cout<<ans<<endl;
           }
           else{
               int c = max(a,b);
               int ans = c*c;
               cout<<ans<<endl;
           }
           }
          
           
        }
}
