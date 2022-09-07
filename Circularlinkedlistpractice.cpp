/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;


class Node{

    public:
    Node* next;
    int data;

    Node(int d){
        this->next = NULL;
        this->data = d;
    }

};

void insertionatdata(Node* &tail, int d, int target){
    
    if(tail == NULL){
        Node* newnode = new Node(d);
        tail = newnode;
        newnode->next = newnode;
    }else{
        Node* temp = tail;
       
        while(temp->data!=target){
            temp= temp->next;
        }
        
        Node* newnode = new Node(d);
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void deletionatdata(Node* &tail, int target){
    Node* temp = tail;
    Node* temp2 = tail;
    while(temp->data!=target){
        temp2 = temp;
        temp=temp->next;
    }
    temp2->next = temp->next;
    temp->next=NULL;
    free(temp);

}

void print(Node* &tail){
    Node* temp = tail;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=tail);
    cout<<endl;
}

int main(){
    Node* tail = NULL;
    insertionatdata(tail,10,20);
    print(tail);
    insertionatdata(tail,20,10);
    print(tail);
    insertionatdata(tail,30,20);
    print(tail);
    insertionatdata(tail,40,30);
    print(tail);
    deletionatdata(tail,30);
    print(tail);
}
