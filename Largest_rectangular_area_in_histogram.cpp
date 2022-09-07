#include <bits/stdc++.h>

using namespace std;


vector<int> nextSmallerElement(int arr[], int n){
    stack<int> s;

    s.push(-1);

    vector<int> ans;

    for(int i=n-1;i>=0;i--){
        while(s.top() != -1 && arr[s.top()]>=arr[i]){
            s.pop();
        }
        ans.push_back(s.top());
        s.push(i);
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

vector<int> prevSmallerElement(int arr[], int n){
    stack<int> s;

    s.push(-1);

    vector<int> ans;

    for(int i=0; i<n;i++){
        while(s.top() != -1 && arr[s.top()]>=arr[i]){
            s.pop();
        }
        ans.push_back(s.top());
        s.push(i);
    }

    return ans;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    vector<int> next(n);
    next = nextSmallerElement(arr, n);

    vector<int> prev(n);
    prev = prevSmallerElement(arr, n);

    int maxArea = INT_MIN;

    for(int i=0;i<n;i++){

        int l = arr[i];

        if(next[i] == -1){
            next[i] = n;
        }

        int b = next[i] - prev[i] - 1;
        int area = l*b;
        maxArea = max(maxArea, area);
    }


    cout<<maxArea;
}