#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int Max = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
        Max = max(Max,a[i]);
    }
    int long count =0;
    for(int i=0;i<n;i++){
        count += Max - a[i]; 
    }

    cout<<count;

}