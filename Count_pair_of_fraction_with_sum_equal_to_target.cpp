#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    double N[n];
    double D[n];

    for(int i =0;i<n;i++){
        cin>>N[i];
    }
    for(int i =0;i<n;i++){
        cin>>D[i];
    }

    unordered_map<double,int> m;
    int count = 0;

    for(int i=0;i<n;i++){
        if(m.find((D[i]-N[i])/D[i])!=m.end()){
            count += m[(D[i]-N[i])/D[i]];
        }
        m[N[i]/D[i]]++;
    }
    cout<<count;
}