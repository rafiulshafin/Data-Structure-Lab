#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
    Node* prev;
};

class LinkedList {
  public:
    Node* head;
  public:
    
    LinkedList(){
      head = NULL;
    }

    
    void PrintList() {
      Node* temp = head;
      if(temp != NULL) {
        cout<<"Linked list is: ";
        while(true) {
          cout<<temp->data<<" ";
          temp = temp->next;
          if(temp == head) 
            break;
        }
        cout<<endl;
      } else {
        cout<<"The list is empty.";
        cout<<endl;
      }
    }     
};


int main() {

  LinkedList MyList;


  Node* first = new Node();
  first->data = 10;
  first->next = NULL;
  first->prev = NULL;

  MyList.head = first;

  first->next = MyList.head;

  MyList.head->prev = first;        


  Node* second = new Node();
  second->data = 20;
  second->next = NULL;

  second->prev = first;  
  first->next = second;

  second->next = MyList.head;

  MyList.head->prev = second;   


  Node* third = new Node();
  third->data = 30;
  third->next = NULL;

  third->prev = second;
  second->next = third;

  third->next = MyList.head; 

  MyList.head->prev = third; 


  MyList.PrintList();
  return 0; 
}