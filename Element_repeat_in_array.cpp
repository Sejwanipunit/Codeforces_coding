#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];

    unordered_map<int,int> freq;

    for(int i = 0; i < n; i++){
        cin>>a[i];
        freq[a[i]]++;
    }
    int c = n/k;
    vector<int> v;
    for(auto l : freq){
        if(l.second > c){
            v.push_back(l.first);
        }

    }
    
    for(auto elements: v){
        cout<<elements<<" ";
    }


}