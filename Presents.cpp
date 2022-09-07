#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int b[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    for(int i=1;i<=n;i++){
        b[arr[i]] = i;
    }

    for(int i=1;i<=n;i++){
        cout<<b[i]<<" ";
    }

}
