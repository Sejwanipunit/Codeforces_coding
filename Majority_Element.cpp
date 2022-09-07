 #include <bits/stdc++.h>

 using namespace std;       
        
 int main(){  
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }  
        int max =0;
        for(int i=0;i<n;i++){
            if(a[i]>max){
                max=a[i];
            }
        }
        
        int b[max+1];
        for(int i=0;i<max+1;i++){
            b[i]=0;
        }
        for(int i=0;i<n;i++){
             b[a[i]] += 1;
        }
        bool f = false;
        for(int i=0;i<max+1;i++){
            if(b[i]>(n/2)){
                f = true;
                cout<<i;
            }
        }
        if(f==0){
            cout<<"-1";
        }
        
 }