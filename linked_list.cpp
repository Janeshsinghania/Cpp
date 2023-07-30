#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int value)
    {
        data=value;
        next=NULL;
    }
};

void insertatHead(node* &head, int value){ //insert at beginning
    node* n=new node(value);
    n->next=head;
    head=n;
}

void insertnode(node* &head, int value) //insert at tail
{
    node* n=new node(value);
    if (head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node*head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteHead(node* &head){ //delete from beginning
    node* delete1=head;
    head=head->next;
    delete delete1;
}

void deletion(node* &head , int value){
    node* temp=head;
    while (temp->next->data!=value)
    {
        temp=temp->next;
    }
    node* deletion=temp->next;
    temp->next=temp->next->next;
    delete deletion ;
}

node* reverse(node* &head){  //reverse a string
    node* previousptr= NULL;
    node* currptr= head;
    node* nxtptr;

    while(currptr!=NULL){
        nxtptr=currptr->next;
        currptr->next=previousptr;

        previousptr=currptr;
        currptr=nxtptr;
    }
    return previousptr;
}

node* reversek(node* head, int k){ //reverse k nodes
    node* previousptr= NULL;
    node* currptr= head;
    node* nxtptr;
    int count=0;

    while(currptr!=NULL && count<k){
        nxtptr=currptr->next;
        currptr->next=previousptr;
        previousptr=currptr;
        currptr=nxtptr;
        count++;
    }
    if (nxtptr!=NULL)
    {
        head->next=reversek(nxtptr,k);
    }
    return previousptr;
}
int main()
{
    node* head=NULL;
    insertnode(head,1);
    insertnode(head,2);
    insertnode(head,3);
    display(head);
    // insertatHead(head,4);
    // display(head);
    // deletion(head,3);
    // display(head);
    // node* newhead=reverse(head);
    node* newhead=reversek(head,2);
    display(newhead);
    

}