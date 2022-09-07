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