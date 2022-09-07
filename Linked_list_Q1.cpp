#include <bits/stdc++.h>

using namespace std;

class Node{

    public:
    int data;
    Node* next;


    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

void insertionAtStart(Node* &head, int d){
    if(head==NULL){
        Node* temp = new Node(d);
        temp->next = NULL;
        head = temp;
    }else{
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
    }
}

Node* reverse(Node* head){

    Node* curr = head;
    Node* prev = NULL;

    while(curr!=NULL){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

void print(Node* &head){
    Node* temp = head; 
    
    while(temp!=NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){

    Node* head = NULL;

    insertionAtStart(head,1);
    insertionAtStart(head,2);
    insertionAtStart(head,3);
    insertionAtStart(head,4);
    insertionAtStart(head,5);
    insertionAtStart(head,6);
    insertionAtStart(head,7);
    insertionAtStart(head,8);

    int k = 18;

    Node* temp1 = reverse(head);

    // while(temp1 != NULL){
    //     cout<<temp1->data<<" ";
    //     temp1 = temp1->next;
    // }
    int sum = 0;
    Node* prev = NULL;
    while(sum<=k) {
        sum += temp1->data;
        prev = temp1;
        temp1 = temp1->next;
    }

    prev->next = NULL;
    Node* ans = NULL;

    ans = reverse(head);
    while(ans != NULL){
        cout<<ans->data<<" ";
        ans = ans->next;
    }

    // print(ans); 
}