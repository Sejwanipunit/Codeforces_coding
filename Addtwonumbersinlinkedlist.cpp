Node* reverseList(Node* head){
        Node* curr= head;
        Node* prev = NULL;
        Node* next = NULL;
        
        while(curr!=NULL){
            next = curr->next;
            curr->next=prev;
            prev = curr;
            curr=next;
            
        }
        return prev;
    }
    
    void insertattail(Node* &head, Node* &tail, int val){
        Node* temp = new Node(val);
        if(head==NULL){
            head = temp;
            tail = temp;
            return;
        }else{
            tail->next = temp;
            tail = temp;
        }
        
    }
    
    Node* add(Node* first, Node* second){
        
        int carry = 0;
        Node* anshead = NULL;
        Node* anstail = NULL;
        
        while(first!=NULL && second!=NULL){
            
            int sum = first->data + second->data + carry;
            
            int d = sum%10;
            
            carry = sum/10;
            
            insertattail(anshead, anstail, d);
            
            first = first->next;
            second = second->next;
        }
        while(first!=NULL){
            int sum = carry+first->data;
            int d = sum%10;
            
            carry = sum/10;
            
            insertattail(anshead, anstail, d);
            first=first->next;
        }
        while(second!=NULL){
            int sum = carry+second->data;
            int d = sum%10;
            
            carry = sum/10;
            
            insertattail(anshead, anstail, d);
            second=second->next;
        }
        
        while(carry!=0){
            int sum = carry;
            int d = sum%10;
            insertattail(anshead, anstail, d);
            carry = sum/10;
        }
        return anshead;
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first = reverseList(first);
        second = reverseList(second);
        
        Node* ans = add(first,second);
        
        ans = reverseList(ans);
        
        return ans;
    }