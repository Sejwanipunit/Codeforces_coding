#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool visit[26];
        for(int i=0;i<26;i++){
            visit[i] = false;
        }
        bool flag = true;
        for(int i=0; i<n;i++){
            char ch = s[i];
            if(ch-'A'){
                if(s[i-1] != ch){
                    flag = false;
                    break;
                }
                else{
                    visit[ch-'A']=true;
                }
            }
          
        }
          if(flag){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
    }
}