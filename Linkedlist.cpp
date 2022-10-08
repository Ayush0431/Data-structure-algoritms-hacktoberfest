#include<iostream>
#include<string.h>
using namespace std;
struct node{
int data;
node *next;

node(){
data=0;
next=NULL;
}

node(int x){
data=x;
next=NULL;}
};
node*push(node *head,int n){
node*temp=head,*newNode;
newNode=new node(n);
newNode->next=head;
return newNode;
}
int isEmpty(node*head)
{
    return head == NULL;
}

int printStack(node *head){
    int count=0;
    cout<<endl;
node *temp=head;
if(head==NULL){
    cout<<"Empty"<<endl;
    return 0;
}else{
    cout<<"The modified string is :"<<endl;
while(temp!=NULL){
        count++;
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<endl<<endl<<"The number of elements are :"<<count<<endl<<endl;
return count;
}
}
 node* pop(node*head){
    node*temp2=head;
    node*temp=head->next;
    delete(temp2);
    return temp;
}
 int top(node*head){
    return head->data;
}


int main()
{
    node*head=NULL;
    head=push(head,4);
    head=push(head,5);
    head=push(head,7);

}