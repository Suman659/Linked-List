//Insert at the beginning//

struct node *newNode;
newNode = malloc(sizeof(struct node));
newNode->data = 4;
newNode->next = head;
head = newNode;

//Insert at the middle//

struct node *newNode;
newNode = malloc(sizeof(struct node));
newNode->data = 4;
struct node *temp = head;
for(int i=2; i < position; i++) {
  if(temp->next != NULL) {
    temp = temp->next;
  }
}
newNode->next = temp->next;
temp->next = newNode;

//Insert at the end//

struct node *newNode;
newNode = malloc(sizeof(struct node));
newNode->data = 4;
newNode->next = NULL;

struct node *temp = head;
while(temp->next != NULL){
  temp = temp->next;
}

temp->next = newNode;

//Output//

//Created Linked list is:  1 7 8 6 4


//Example//

#include <bits/stdc++.h>
using namespace std;
 

class Node
{
    public:
    int data;
    Node *next;
};
 

void push(Node** head_ref, int new_data)
{
   

    Node* new_node = new Node();
 
    new_node->data = new_data;
 
    new_node->next = (*head_ref);
 

    (*head_ref) = new_node;
}
 

void insertAfter(Node* prev_node, int new_data)
{
  
    if (prev_node == NULL)
    {
        cout<<"The given previous node cannot be NULL";
        return;
    }
 
 
    Node* new_node = new Node();
 
    new_node->data = new_data;
 

    new_node->next = prev_node->next;
 

    prev_node->next = new_node;
}

void append(Node** head_ref, int new_data)
{
    Node* new_node = new Node();

    Node *last = *head_ref;
 
 
    new_node->data = new_data;
 
    
    new_node->next = NULL;
 
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
 
    while (last->next != NULL)
    {
        last = last->next;
    }
 
    last->next = new_node;
    return;
}
 

void printList(Node *node)
{
    while (node != NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}

int main()
{
   
    
    Node* head = NULL;
     
    
    append(&head, 2);
     
   
    push(&head, 7);
     
    
    push(&head, 3);
     
    
    append(&head, 4);
     
   
    insertAfter(head->next, 6);
     
    cout<<"Created Linked list is: ";
    printList(head);
     
    return 0;
}

//Output//

//Created Linked list is:  2 7 3 4 6
