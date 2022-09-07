#include <bits/stdc++.h>

using namespace std;

int Findpeak(int arr[], int n){
    int i=0, j=n-1;
    int ans;
    int mid = i + (j-i)/2;
    while(i<j){
    
        if(arr[mid] < arr[mid+1]){
            i = mid+1;
        }
        else{
            j = mid;
        }
        mid = i + (j-i)/2;
    }
    return i;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];4
    }
    cout<<Findpeak(arr, 4);
}