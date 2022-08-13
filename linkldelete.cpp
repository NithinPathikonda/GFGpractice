#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
int x;
Node *head;
Node *temp , *p , *nn;
int main()
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        nn=new Node;
        nn->next=NULL;
        cin>>nn->data;
        if(head==NULL)
        {
            head=temp=nn;
        }
        else
        {
            temp->next=nn;
            temp=temp->next;
        }
    }
    temp=head;
    cout<<"The numbers entered are "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<"enter the position to delete the node"<<endl;
    cin>>x;
    


temp=head;
int count=0;
    while(temp!=NULL)
    {
    count++;
    temp=temp->next;
    }
        cout<<count;
if(x==1)
{
    temp=head;
    head=temp->next;
    delete temp;
}
else if(x==count)
{
    temp=head;
    while(temp->next!=NULL)
    {
        p = temp;
        temp=temp->next;
    }
    delete temp;
    p->next=NULL;

    
}
else 
{
int j=1;
temp=head;
while(j<x)
{
    p=temp;
    temp=temp->next;
    j++;
}
p->next=temp->next;
delete temp;
}

temp=head;
cout<<"The linked list after deletion of node"<<endl;
for(int i=0;i<n-1;i++)
{
    cout<<temp->data;
    temp=temp->next;
}
}
