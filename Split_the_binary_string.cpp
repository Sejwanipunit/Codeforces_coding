#include<bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin>>str;
    int count0 = 0;
    int count1 = 0;
    int ans =0;

    for(int i=0; i<str.size(); i++){
        if(str[i] == '0'){
            count0++;
        }
        else{
            count1++;
        }

        if(count0 == count1){
            ans++;
        }
    }

    if(count0 != count1){
        cout<<"-1";
    }
    cout<<ans;
}