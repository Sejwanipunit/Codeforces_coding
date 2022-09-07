#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }

        int b[n];
        for(int i=1; i<=n; i++){
            b[i] = 0;
        }
        int one =0;
        for(int i=1; i<=n; i++){
            if(a[1] != a[i]){
                b[i] = 1;
                one++;
            }
            else{
                b[i] = 0;
            }
        }

        if(one == 1){
            for(int i=1; i<=n; i++){
                if(b[i]==1){
                    cout<<i<<endl;
                }
            }
        }
        else{
            for(int i=1;i<=n;i++){
                if(b[i]==0){
                    cout<<i<<endl;
                }
            }
        }
    }
}