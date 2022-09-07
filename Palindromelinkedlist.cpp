#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    int getlength(Node* head){
        int size=1;
        Node* temp = head;
        while(temp->next!=NULL){
            size++;
            temp=temp->next;
        }
        return size;
    }
    bool isPalindrome(Node *head)
    {
        int n = getlength(head);
        int arr[n];
        cout<<n<<endl;
        Node* temp = head;
        int i = 0;
        while(temp!=NULL && i<n){
            arr[i] = temp->data;
            temp=temp->next;
            i++;
        }
        for(i=0;i<n;i++){
            cout<<arr[i]<<" "<<endl;
        }
        i = 0;
        int j=n-1;
        while(i<=j){
            if(arr[i]==arr[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
};

int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}