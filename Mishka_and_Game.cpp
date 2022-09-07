#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int m[n];
    int c[n];

    for(int i=0; i<n; i++){
        cin>>m[i]>>c[i]; 
    }

    int M=0,C=0,t=0;
    for(int i=0; i<n; i++){
        if(m[i]>c[i]){
            M++;
        }
        else if(c[i]>m[i]){
            C++;
        }
        else{
            t++;
        }
    }

    if(M>C){
        cout<<"Mishka"<<endl;
    }
    else if(M==C){
        cout<<"Friendship is magic!^^"<<endl;
    }
    else{
        cout<<"Chris"<<endl;
    }



   
}