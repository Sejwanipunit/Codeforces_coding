#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int s = 0;
    int mi = INT_MAX;
    int i=0, j =0;

    while(i<=j && j<n){
        while(s<=k && j<n){
            s += a[j++];
        }  
        while(s>k && i<j){
            mi = min(mi, j-i);
            s -=a[i++];
        }
    }
    cout<<mi;

}