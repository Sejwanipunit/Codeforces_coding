#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    bool flag = false;
    int n = s.length();
    string ans = INT_MIN;
    string a;
    long long b;

    for(int i=0;i<n;i++){
        flag = false;
        a = "";
        while(s[i] >= '0' && s[i] <='9'){
            if(s[i] == '9')
                flag = true;
            
            a += s[i];
        }

        if(!flag && ans != ""){
            
        }    
    }
    cout<<ans<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
}