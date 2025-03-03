#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node *next;

  //constructor
  Node( int d ) {
    this -> data = d;
    this -> next = NULL;
  }

  ~Node(){}
};

void insertNode(Node* &tail, int element, int d)
{

  if ( tail == NULL)
  {
    Node *newNode = new Node(d);
    tail = newNode;
    newNode -> next = tail;
  }
  else
  {
    Node *curr = tail;
    while ( curr -> data != element )
    {
      // curr -> next = tail;
      curr = curr -> next;
    }

    Node* temp = new Node(d);
    temp -> next = curr -> next;
    curr -> next = temp;

  }
}

void print(Node* tail){

Node *temp = tail;

do {
  cout << tail -> data << " ";
  tail = tail -> next;
}
while ( temp != tail);
cout << endl;
}

void deleteNode(Node* &tail, int value){
   if ( tail == NULL ){
    cout << "List is empty";
    return;
   }
   else{
    // list is non empty
    Node* prev = tail;
    Node *curr = prev -> next;
    while ( curr -> data != value){
      prev = curr;
      curr = curr -> next;
    }

    prev -> next = curr -> next;

    if ( curr == prev){
      tail = NULL;

    }
    else if ( tail == curr){
      tail = prev;
    }

    curr -> next = NULL;
    delete curr;
   }
}

int main()
{
  Node *tail = NULL;
  insertNode(tail,5,3);
  insertNode(tail,3,5);
  insertNode(tail,5,7);
  insertNode(tail,7,9);
  insertNode(tail,3,8);
   
  // insertNode(tail,4,8);
  print(tail);

  deleteNode(tail,3);
  print(tail);

}
