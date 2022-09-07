#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,Q;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int min1=INT_MAX;
    int max1 = INT_MIN;
    for(int i=0;i<N;i++){
        if(min1>arr[i]){
            min1 = arr[i];
        }
        if(arr[i]>max1){
            max1 = arr[i];
        }
    }

    cin>>Q;
    while(Q--){
        int K,ans=INT_MAX;
        cin>>K;
        int minfr = INT_MAX;
        int sum = 0;
        for(int i=min1;i<=max1;i++){
            for(int j=0;j<N;j++){
                if(arr[j]>=i){
                    sum += i;
                }else{
                    sum += arr[j];
                }
            }
            if(sum>K){
                minfr = min(minfr,sum);
                ans = min(ans,i);
            }
        }
        cout<<ans;
    }

}