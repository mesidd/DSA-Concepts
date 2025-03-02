#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node *prev;
  Node *next;

  Node ( int d ) {
    this -> data = d;
    this -> prev = NULL;
    this -> next = NULL;
  }

  ~Node(){
    // int val = this -> data;
    if ( next != NULL){
      delete next;
      next = NULL;
    }
  }
};

void print(Node * &head){
  Node *temp  = head;
  while(temp != NULL)
  {
    cout << temp -> data << " ";
    temp = temp -> next;
  }
  cout << endl;
}

int getLength(Node * & head) {
  Node *temp = head;
  int len = 0;
  while ( temp != NULL){
    len++;
    temp = temp -> next;
  }
  return len;
}

void insertAtHead(Node* &head, Node* &tail, int d){
  if ( head == NULL)
  {
    Node* temp = new Node(d);
    head = temp;
    tail = temp;
  }
  else {
    Node *temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
  }
  
}

void insertAtTail(Node* &tail, Node* &head, int d){
  if ( tail == NULL)
  {
    Node *temp = new Node(d);
    tail = temp;
    head = temp;
  }
  else {
    Node *temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
  }
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d)
{
  if ( position == 1) {
    insertAtHead(head,tail,d);
    return;
  }

  Node *temp = head;

  int cnt = 2;
  while ( cnt < position ) {
    temp = temp -> next;
    cnt++;
  }
  if ( temp -> next == NULL) {
    insertAtTail(tail, head,d);
    return;
  }
  Node *nodeToInsert = new Node(d);
  nodeToInsert -> next = temp -> next ;
  temp -> next -> prev = nodeToInsert;
  temp -> next = nodeToInsert;
  nodeToInsert -> prev = temp ;
}

void deleteNode(int position, Node* &head, Node* &tail) {
  if ( position == 1) {
    Node* temp = head;
    temp -> next -> prev = NULL;
    head = temp -> next;
    temp -> next = NULL;
    delete temp;
  }

  else {
    Node* curr = head;
    Node *prev = NULL;

    int cnt = 1;
    while(cnt < position)
    {
      prev = curr;
      curr = curr -> next;
      cnt++;
    }

    if ( position <= 6)
    {

    curr -> prev = NULL;
    prev -> next = curr -> next;
    curr -> next -> prev = prev -> next;
    curr -> next = NULL;
    delete curr;  
   }

  else{
    prev -> next = NULL;
    curr -> prev = NULL;
    tail = prev;
    delete curr;
  }
}
}

int main()
{
  // Node* node1 = new Node(10);
  // Node *head = node1;
  // Node *tail = node1;
  
  // cout << getLength(head);
  Node* head = NULL;
  Node* tail = NULL;

  insertAtHead(head,tail, 20);
  insertAtHead(head,tail, 32);
  insertAtHead(head,tail, 23);
  insertAtHead(head,tail, 54);
  insertAtTail(tail,head,43);

  insertAtPosition(head, tail, 6, 40);
  insertAtPosition(head, tail, 6 , 11); 
  print(head);    

  deleteNode(4,head,tail);
  print(head);

  cout << head -> data << " "<< tail -> data <<endl;


  return 0;
}
