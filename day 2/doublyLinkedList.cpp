#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    struct node        
    {
    int data;
    node* next;
    node* previous;
    };

    node* head;
    node* tail;
    node* n;

    n = new node;
    n->data=1;
    n->previous=NULL;
    head=n;
    tail=n;

    n = new node;
    n->data=2;
    n->previous=tail;
    tail->next=n;
    tail = n;

    n = new node;
    n->data=3;
    n->previous=tail;
    tail->next=n;
    tail = n;

    n = new node;
    n->data=4;
    n->previous=tail;
    tail->next=n;
    tail = n;

    n = new node;
    n->data=5;
    n->previous=tail;
    tail->next=n;
    tail = n;

    n = new node;
    n->data=5;
    n->previous=tail;
    tail->next=n;
    tail = n;

    tail->next=NULL;
    
}

