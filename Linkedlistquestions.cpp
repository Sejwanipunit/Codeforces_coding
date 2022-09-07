#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* &head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

class Solution
{
    public:

    Node* detectLoop(Node* &head)
    {
        
        Node* fast = head;
        Node* slow = head;
        
        while(fast!=NULL && slow!=NULL){
            fast = fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow = slow->next;
            if(slow==fast){
                slow = head;
                while(slow!=NULL){
                    slow = slow->next;
                    fast=fast->next;
                    if(slow==fast) return slow;
                }
            }
        }
        return head;
    }
};



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        Node* loop = ob.detectLoop(head);
        cout<<loop->data<<endl;
	    return 0;
    }
}
