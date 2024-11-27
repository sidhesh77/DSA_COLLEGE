#include <iostream>
using namespace std;
struct node
{
    public:
    int data;
    node *next;
    
    node(int data)
    {
        data= data;
        next= nullptr;
    }
    void insertionAthead();
};
void insertionAthead(node * head, int data)
{

    node *newnode = new node(data);
    newnode->next = head;
    head=newnode;
}
void insertionAtGiven(node* head, int position, int data)
{
    // node* newnode=new node(data);
    int value=1;
    while (head!=nullptr)
    {
        value++;
    }
    node * givennode = head;
    if (position==1)
    {
         node *newnode = new node(data);
    newnode->next = head;
    head=newnode;
    }
    else if (position>1 && position < value)
    {
        node *givennode=head;
        while (position!=value)
        {
            givennode=givennode->next;
        }
        node *newnode = new node(data);
        newnode->next = givennode->next;
        givennode->next =newnode;
    }
}
void printing(node * head )
{
    node *value= head;
    while(value!=nullptr)
    {
        cout<< value->data << "  ";
        value = value->next;
    }
}
int main()
{
    node *node1=new node(1);
    insertionAthead(node1,5);
    printing(node1);
    return 0;
}
