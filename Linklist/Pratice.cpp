#include<iostream>
using namespace std;
struct Node
{
int data;
Node* next; 
};

Node* insert(Node* head, int value ){

Node* newnode =new Node;
  newnode->data = value;
    newnode->next = nullptr;
    // head = newnode;

if(head==nullptr){
    head=newnode;
}else{
    Node* current = head;
    while(current->next!=nullptr){
        current=current->next;
    }
    current->next = newnode;
}
return head;
};



void display(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
};



int main(){
Node* head =nullptr;

// head = insertdata(head,1);



head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);

    display(head);

    return 0;


}