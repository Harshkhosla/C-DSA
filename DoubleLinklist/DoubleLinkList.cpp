#include<iostream>
using namespace std;


struct Node{
int data;
Node* next;
Node* prev;
}; 



class DoubleLinklist{
    private:
    Node* head ;
    Node* tail ;

    public:
    DoubleLinklist(){
        head = nullptr;
        tail = nullptr;
    }


 void insertAtEnd(int value){
    Node* newNode = new Node;
    newNode->data=value;
    newNode->next=nullptr;
    newNode->prev=tail;


    if(tail!=nullptr){
        tail->next=newNode;
    }else{
        head=newNode;
    }
    tail =newNode;
 }




void insertAtBeginning(int value){
Node* newNode =new Node;
newNode->data=value;
newNode->prev=nullptr;
newNode->next=head;
if(head!=nullptr){
    head->prev=newNode;

}else{
    tail =newNode;
}
head =newNode;

};

};


int main(){

DoubleLinklist dll ;


 dll.insertAtEnd(1);
    dll.insertAtEnd(2);

    dll.insertAtBeginning(5);

}