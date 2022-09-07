#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink = k*l/nl;
    int salt = p/np;
    int lime = (c*d);
    int t = min(drink,salt);
    int ans = min(t, lime);

    cout<<ans/n;
}