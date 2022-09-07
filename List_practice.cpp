#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;

        this -> next = NULL;
    }

};

int insertionAtStart(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertioninMiddle(Node* &head, int position, int data){
    
    if(position == 0){
        insertionAtStart(head, data);
        return;
    }

    Node* temp = head;
    int cnt = 0;
    while(cnt <position-1){
        temp = temp->next;
        cnt++;
    }

    Node* newnode = new Node(data);
    newnode->next = temp->next;
    temp->next = newnode;
}

void deletionatend(Node* &head, Node* &tail){
    if(head==NULL){
        cout<<"List is already empty";
    }
    Node* temp = head;
    while(temp->next!=tail){
        temp = temp->next;
    }
    Node* N1 = temp->next;
    temp->next = NULL;
    tail = temp;
    free(N1);
    N1 = NULL;
}

void deletionatstart(Node* &head){
    Node* temp = head;
    head = temp->next;
    temp->next = NULL;
    free(temp);
}

void deletionatposition(Node* head, int position){
    int cnt = 1;
    Node* temp = head;
    while(cnt!=position){
        temp = temp->next;
        cnt++; 
    }
    Node* N1 = temp->next;
    temp->next = N1->next;
    N1->next = NULL;
    free(N1);
}

void insertionAtEnd(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
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
    Node* node1 = new Node(10);
    Node* tail = node1;
    Node* head = node1;
    print(head);

    insertionAtEnd(tail,12);
     print(head);
    insertionAtEnd(tail,15);
    print(head);
    insertionAtEnd(tail,20);
    print(head);
    insertionAtEnd(tail,30);
    print(head);
    insertionAtEnd(tail,40);
    print(head);
    insertionAtEnd(tail,50);
    print(head);
    insertioninMiddle(head, 3, 18);
    print(head);
    deletionatend(head, tail);
    print(head);
    deletionatstart(head);
    print(head);
    deletionatposition(head,2);
    print(head);

    return 0;
}