#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

// Inserting the node form the front 
// Node* Insert(Node* head,int value){
//     Node* newnode = new Node;
//     newnode->data =value;
//     newnode->next=head;
//     head=newnode;
//     return head;
// };



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


// Inserting the node from any position

// void Inseartat(Node* PreviousNode,int value){
//     if(PreviousNode->next==nullptr){
//         return;
//     }
//     Node* newNode=new Node;
//     newNode->data=value;
//     newNode->next=PreviousNode->next;
//     PreviousNode->next=newNode;
// }



// Deleting the Data from the list

Void deleteIt(Node* head, int value){
    cout<<head;
    Node* current =head;
    Node* prev = nullptr;

    if(current->next=nullptr){
        return;
    }
    if(current->next!=nullptr && current->data!=value ){
        prev= current;
        current=current->next;
    }
    if(current->next!=nullptr&&current->data==value){
        head=current-next;
        delete current;
        return;
    }


    prev->next=current->next;
    return;



}
int main (){

Node* head =nullptr;

// Inseartat(head,89);
head =Insert(head,1);
head =Insert(head,2);
deleteIt(head,1);
    display(head);
return 0;

}