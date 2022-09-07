#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int k = a[0];
    int count = 0; 
    for(int i=0;i<n;){
        for(int j =i;j<i+k;j++){
            k = INT_MIN;
            if(a[j]> k){
                k = a[j];
            }
            if(k == 0){
                cout<<"-1";
                return 0;
            }
        }

        i = i+k;
        count++;
    }
    cout<<count-1;
}