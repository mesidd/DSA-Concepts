#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
  int data;
  Node *next;
  Node(int data)
  {
    this -> data = data;
    this -> next = NULL;
  }

  ~Node () {
    int value = this -> data;
    if( this -> next != NULL){
      delete next;
      this -> next = NULL;
    }
  }
};

void insertAtHead(Node* &head, int d) {

  Node *temp = new Node(d);
  temp -> next = head;
  head = temp; 
}

void insertAtTail(Node* &tail, int d){
  Node* temp = new Node(d);
  tail -> next = temp;
  tail = temp;
}

void print(Node* &head) {
  Node *temp = head;
  while(temp != NULL) {
    cout << temp -> data << " ";
    temp = temp -> next;
  }
  cout << endl;
}

void insertAtPosition( Node* &tail,Node* &head, int position, int d ) 
{
  if ( position == 1 ){
    insertAtHead( head, d );
    return ;
  } 
  Node* temp = head;
  int cnt = 1;
  while ( cnt < position-1)
  {
    temp = temp -> next;
    cnt++;
  }
  if ( temp-> next == NULL) {
    insertAtTail(tail,d);
    return;
  }
  Node *nodeToInsert = new Node(d);
  nodeToInsert -> next = temp -> next;
  temp -> next = nodeToInsert;
}

void deleteNode (int position, Node* &head,  Node* &tail) {
  if ( position == 1) {
    Node *temp = head ;
    head = head -> next ;
    temp -> next = NULL;
    delete temp;
  }
  else {
    Node *curr = head;
    Node *prev = NULL;

    int cnt = 1;
    while(cnt < position) {
      prev = curr;
      curr = curr -> next ;
      if ( cnt == (position - 2) ) tail  = prev -> next;
      cnt++;
    }
    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;
  }
}
int main()
{
  Node* node1 = new Node(10);

  Node* head = node1;
  Node* tail = node1;

  insertAtTail(tail, 12);

  insertAtTail(tail,15);

  insertAtPosition( tail, head, 4 , 22);

  print(head);

  deleteNode(4, head, tail);
  print(head);

  cout << "head - " << head -> data << endl;
  cout << "tail - " << tail -> data << endl;

}
