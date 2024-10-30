#include <iostream>

struct Node
{
    int data;       //this is where the actual data for each node is stored
    Node *next;     //this is where we instantiate the pointer for each node.
};
Node* n;        //this is what we use for each new pointer
Node* t;        //this is a temporary node pointer
Node* h;        //this is out head pointer

//I could have used typdef to make this cleaner but I feel like this shows the concept better.

int Main()
{
    n= new Node;        //we create a new node
    n->data = 1;        //we stick 1 in for the data portion of this node.
    t = n;      //for now, we set our tempory pointer to point to this node, but it will move.
    h = n;      //we also set our head pointer to point to this node, but this one stays put.
    
    n= new Node;        //we make a second node
    n->data = 2;        //put two in for the data
    t->next = n;        //temp pointer now points to this node
    t=t->next;          //we connect this node to the other node

    n = new Node;       //same idea here
    n->data = 3;
    t->next = n;
    t=t->next;

    n->next = NULL;     //to finish off, we set the next new pointer to NULL to let it terminate.
}
