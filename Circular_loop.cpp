#include <bits/stdc++.h>

using namespace std;

struct Petrolpump {
    public:
        int petrol;
        int distance;
};

class Solution{
    public:

int tour(Petrolpump p[], int n){
    int start = 0;
    int end = 1;
    int curr_petrol = 0;

    curr_petrol += p[start].petrol-p[start].distance;;

    while(start != end || curr_petrol<0){
        while(curr_petrol<0 && start != end){
            curr_petrol -= p[start].petrol-p[start].distance;
            start = (start+1)%n;
            
            if(start == 0){
                return -1;
            }
        }
        curr_petrol += p[end].petrol-p[end].distance;
        end = (end + 1)%n;
    }
    return start;
}
};

int main(){
    int n;
    cin>>n;
    Petrolpump p[n];
    for(int i = 0; i <n;i++){
        cin>>p[i].petrol>>p[i].distance;
    }
    Solution obj;
    cout<<obj.tour(p,n)<<endl;
    
}