#include <bits/stdc++.h>
#include <stdio.h>

#define ll long long
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void addNode(Node *head, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
    }
    Node *newNode = new Node(data);
    Node *temp = head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next = newNode;
}

void display(Node* head){
    Node* temp = head;
    if(head==NULL){
        return;
    }
    while(temp!= NULL){
        cout<<temp->data<<" "<<endl;
        temp=temp->next;
    }
    
}

int main()
{
    Node *head = new Node(0);
    addNode(head,10);
    addNode(head,20);
    display(head);
    return 0;
}