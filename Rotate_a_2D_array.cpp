#include <bits/stdc++.h>

using namespace std;

void Rotate(int arr[][], int n){

    for(int i=0;i<n;i++){
        reverse(arr[i], arr[i]+n);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void display(int arr[][], int n){
    for( int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    Rotate(arr,n);

    Display(arr,n);
}

