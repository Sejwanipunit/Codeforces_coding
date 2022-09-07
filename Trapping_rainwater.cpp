#include <bits/stdc++.h>

using namespace std;

int main(){
    int heights[] = {3,0,0,2,0,4};

    int n = 6;
    int L[n];

    int R[n];

    L[0] = heights[0];

    for(int i=1;i<n;i++){
        L[i] = max(L[i-1], heights[i]);
    }

    R[n-1] = heights[n-1];

    for(int i=n-2;i>=0;i--){
        R[i] = max(R[i-1], heights[i]);
        
    }

    int Total_water = 0;
    
    for(int i=0;i<n;i++){
        int temp = min(L[i],R[i]);
        Total_water += temp - heights[i];
    }

    cout<<Total_water;
}