#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i]; 
    }
    int flag = 0;
    int first = 0, last=0;
    for(int i=0;i<n;i++){
        if(a[i] == k && flag == 0 ){
            first = i;
            last = i;
            flag++;
        }else if(a[i] == k && flag > 0){
            last = i;
        }
    }
    cout<<first<<" "<<last;


}