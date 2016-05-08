#include <iostream>
using namespace std;
typedef struct node
{
     int elem;
     struct node *next;
}Node;

void cll(Node *tail,Node *pNode);
void print(Node *pNode,Node *head);

int main()
{
    node *head,*tail,*pNode=NULL;
    head=new Node;
    if(head==NULL)
    {
        cout<<"Memory insufficient!";
        return 0;
    }
    tail=head;
    cll(tail,pNode);
    print(pNode,head);
    return 0;
}

void cll(Node *tail,Node *pNode)
{
    int i;
    cout<<"Please input integers to build the link(0 TO END):"<<endl;
    cin>>i;
    while(i!=0)
    {
        pNode=new Node;
        if(pNode==NULL)
        {
            cout<<"Memory insufficient!";
            break;
        }
        pNode->elem=i;
        pNode->next=NULL;
        tail->next=pNode;
        tail=pNode;
        cin>>i;
    }
}

void print(Node *pNode,Node *head)
{
    pNode=head->next;
    cout<<"Link elements is: ";
    while(pNode!=NULL)
    {
        cout<<pNode->elem<<"  ";
        pNode=pNode->next;
    }
}
