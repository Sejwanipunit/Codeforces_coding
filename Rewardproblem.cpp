#include <bits/stdc++.h>

using namespace std;

int solve(int n, int arr[]){
    sort(arr,arr+n);
    int ans = INT_MIN;
    map<int,bool> visited;
    for(int i=0; i<n;i++){
        int sum = 0;
        int l=i+1, r=n-1;
        while(l<r){
            if((arr[i]<=arr[l]<=arr[r]) && (visited[arr[i]] == false || visited[arr[l]] == false || visited[arr[r]] == false)){
                visited[arr[i]] = true;
                visited[arr[l]] = true;
                visited[arr[r]] = true;
                sum += arr[l];
            }
            r--;
        }
        ans = max(ans,sum);
    }
    return ans;
}

int main(){

    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<solve(n,arr)<<endl;
    }

}

