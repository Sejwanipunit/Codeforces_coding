#include<bits/stdc++.h>

using namespace std;

int BinarySearch(int a[], int n,int k){
    int s=0;
    int e=n-1;
        while(s<n){

        int mid = (s+e)/2;
        if(mid==k){
            return mid;
        }

        else if(mid>k){
            e = mid-1;
        }

        else{
            s = mid+1;
        }
    }
    return -1;
}

int main(){
    int n,k;

    cin>>k>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<BinarySearch(a,n,k)<<endl;

    return 0;
}