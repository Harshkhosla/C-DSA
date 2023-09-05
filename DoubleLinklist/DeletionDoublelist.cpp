// #include<iostream>
// using namespace std;

// struct Node {
// int data;
// Node* next;
// Node* prev;
// };


// class DoulbeLinklist{
//     private:
//     Node* head;
//     Node* tail;



//     public:
//     DoulbeLinklist(){
//         head= nullptr;
//         tail= nullptr;
//     }



// // void insertAfter(Node* prevNode , int value){
// // if(prevNode==nullptr){
// //     return;
// // }
// // Node* newNode =new Node;
// // newNode->data=value;
// // newNode->prev=prevNode;
// // newNode->next=prevNode->next;
// // if(prevNode->next!= nullptr){
// //     prevNode->next->prev=newNode;
// // }else{
// //     tail = newNode;
// // }
// // prevNode->next=newNode;
// // }
// // };



// void DeleteNode(Node* node){
//     if(node==nullptr){
//         return;
//     }
//     if(node->prev!=nullptr){
//         node->prev->next=node->next;
//     }else{
//         head=node->next;
//     }

//     if(node->next!=nullptr){
//         node->next->prev=node->prev;
//     }else{
//         tail=node->next;
//     }
//     delete node;
// }


// int main(){
// //  DoulbeLinklist dll;


// //  dll.insertAfter(prevNode,7)
// }