#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int l = 0, j = n-1;
    for(int i=0; i<=j;){
        if(a[i] <0){
            swap(a[l], a[i]);
            i++;
        }else if(a[i]> 0){
            swap (a[i], a[j]);
            j--;
        }
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}