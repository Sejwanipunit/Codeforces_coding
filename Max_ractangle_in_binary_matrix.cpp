#include <bits/stdc++.h>

using namespace std;

#define MAX 1000

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

int maximumAreaInHistogram(int arr[], int n){
    
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
    return maxArea;
}

class Solution{
  public:

int maxArea(int M[MAX][MAX], int n, int m) {
    
    int arr[n];

    for(int j = 0;j<m;j++){
        arr[j] = M[0][j];
    }

    int area = maximumAreaInHistogram(arr, n);
    int Maxarea = INT_MIN;
    Maxarea = max(Maxarea, area);

    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            arr[j] += M[i][j];
        }
        area = maximumAreaInHistogram(arr,n);
        Maxarea = max(Maxarea, area);
    }
    return Maxarea;
}

};


int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}