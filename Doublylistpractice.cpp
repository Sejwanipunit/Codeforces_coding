/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertionatstart(Node* &head,int data){
    Node* temp = new Node(data);
    head->prev = temp;
    temp->next = head;
    head = temp;
}

void insertionatend(Node* &tail, int d){
    Node* temp = tail;
    Node* newnode = new Node(d);
    
    temp->next = newnode;
    newnode->prev = temp;
    tail = newnode;
    
}

void insertionatposition(Node* &head, int position, int d){
    Node* temp1 = head;
    int cnt=1;
    while(cnt!=position){
        temp1= temp1->next;
        cnt++;
    }
    Node* newnode = new Node(d);
    newnode->next = temp1->next;
    temp1->next->prev=newnode;
    temp1->next = newnode;
    newnode->prev = temp1;
}

void deletionatstart(Node* &head){
    Node* temp = head;
    head= temp->next;
    temp->next = NULL;
    head->prev= NULL;
    free(temp);
}

void deletionatend(Node* &tail){
    Node* temp = tail;
    tail = temp->prev;
    tail->next=NULL;
    temp->prev = NULL;
    free(temp);
}

void deletionatposition(Node* &head, int position){
    Node* temp = head;
    int cnt=0;
    while(cnt!=position){
        temp = temp->next;
        cnt++;
    }
    temp->prev->next=temp->next;
    temp->next->prev = temp->prev;
    temp->next = NULL;
    temp->prev=NULL;
    free(temp);
}

void print(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}


int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertionatend(tail,20);
    print(head);
    insertionatend(tail, 30);
    print(head);
    insertionatend(tail, 40);
    print(head);
    insertionatposition(head, 2, 25);
    print(head);
    deletionatstart(head);
    cout<<"After deletion at head"<<endl;
    print(head);
    insertionatstart(head,10);
    deletionatend(tail);
    cout<<"After deletion at tail"<<endl;
    print(head);
    insertionatend(tail, 40);
    deletionatposition(head,2);
    print(head);
    return 0;

}