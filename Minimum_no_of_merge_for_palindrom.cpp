#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    int count = 0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0,j=n-1;i<=j;){

        if(a[i] == a[j]){
            i++;
            j--;
        }else if(a[i]<a[j]){
            a[i] = a[i-1] + a[i];
            count++;

        }else{
            a[j] = a[j-1] + a[j];
            count++;
        }
    }
    cout<<count;
}