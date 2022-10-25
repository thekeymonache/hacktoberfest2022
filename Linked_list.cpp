#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
        node *next;
        node(int x){
            data=x;
            next=NULL;
        }
};
node *insert(node *head,int x){
    node *temp;
    temp= new node(x);
    temp->next = head;
    return temp;
}
node *insert_end(node *head,int x){
    node* temp= new node(x);
    if(head==NULL){
       
        return temp;
    }
    
        node *itr;
        itr=head;
        while(itr->next!=NULL){
            itr = itr->next;
        }
        itr->next=temp;
        return head;
    
}
bool search(node* head,int x){
    int pos=1;
    node *crnt = head;
    while(crnt!=NULL){
        if(crnt->data==x)return true;
        else {
            pos++;
            crnt=crnt->next;
        }
    }
    return false;
}
node *deleted(node *head){
    if (head == NULL)
        return NULL;
 
    
    node* temp = head;
    head = head->next;
 
    delete temp;
 
    return head;
}

void printl(node *head){
    node *curr;
    curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
    node *head =new node(10);
   
    int i_front;
    cout<<"Enter the number to insert in front"<<endl;
    cin>>i_front;
    int i_end;
    cout<<"Enter the number to insert in end"<<<endl;
    cin>>i_end;

    head = insert(head ,i_front);
    head = insert_end(head ,i_end);
    int x;
    
    head = deleted(head);
    cout<<"Enter the number to search for"<<endl;
    cin>>x;
   search(head,x)?cout<<"yes found"<<endl:cout<<"not found "<<endl;
    printl(head);
}
