#include <bits/stdc++.h>

using namespace std;
 

void insertToBottom(stack<int> &S, int N)
{
    stack<int> t;

    while(!S.empty()){
        t.push(S.top());
        S.pop();
    }
    S.push(N);

    while(!t.empty()){
        S.push(t.top());
        
        t.pop();
    }
}

int main()
{
  
    stack<int> S;
    S.push(5);
    S.push(4);
    S.push(3);
    S.push(2);
    S.push(1);
 
    int N = 7;
 
    insertToBottom(S, N);

    while(!S.empty()){

        cout<<S.top()<<" ";

        S.pop();
    }

    return 0;
}