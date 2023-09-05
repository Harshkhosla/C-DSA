#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};



// Inserting the node from the end 

Node* Insert(Node* head, int value) {
    Node* newnode = new Node;
    newnode->data = value;
    newnode->next = nullptr;

    if (head == nullptr) {
        head = newnode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newnode;
    }
    return head;
}


void display(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
};




// Deleting the Data from the list

void deleteIt(Node*& head, int value){
    Node* current =head;
    Node* prev = nullptr;
    // cout<<current;

    if(current->next!=nullptr&&current->data==value){
        head=current->next;
        delete current;
        return;
    }
    while(current->next!=nullptr && current->data!=value ){
        prev= current;
        current=current->next;
    }

    if(current->next=nullptr){
        return;
    }

    prev->next=current->next;
    return;



}


bool Search(Node* head ,int value){

    Node* current=head;
    while(current!=nullptr){
        if(current->data==value){
            return true;
        }
        current=current->next;
    }
    return false;
 

}




Node* reverse(Node* head){
    Node* previous=nullptr;
    Node* current=head;
    Node* next = nullptr;

    while(current!=nullptr){
        
    }


}
int main (){

Node* head =nullptr;

// Inseartat(head,89);
head =Insert(head,1);
head =Insert(head,2);
head =Insert(head,3);
head =Insert(head,4);
int data = Search(head,2);
cout<<data;

reverse(head);

// deleteIt(head,1);
    display(head);
return 0;

}


