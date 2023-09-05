#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node*previous;
};
class Linklist{
    private:
    Node* head;
    Node* tail;

    public:
    Linklist()
    {
        head = nullptr;
        tail = nullptr;
    }

//   bool  isitCircular(Node* head){
// //     if(head==nullptr){
// //         return true;
// //     }
// //     Node* newpointer= head->next;
// //     while(newpointer!=nullptr&&newpointer!=head){
// //         newpointer=newpointer->next;
// //     }

// // if(newpointer==head){
// //     return true;
// // }
// // return false;


// if(head==nullptr){
//     return true;

// }
// Node* slow =head;
// Node* fast = head;
// while(fast!=nullptr){
//     fast=fast->next;
//     if(fast!=nullptr){
//         fast=fast->next;
//     }
//     slow=slow->next;
//     if(slow== fast){
//         return 1;
//     }
//     return false;

// }

//   }



void SortedLinkList(Node* head){
    if(head==nullptr){
        return ;
    }

Node* firstNode =head;
while(firstNode!=nullptr){
    Node* secondNode=firstNode->next;
    while(secondNode!=nullptr){
        if(secondNode->data==firstNode->data){
            Node* gottadelete = secondNode;
            // firstNode->next=secondNode->next;
            secondNode= secondNode->next;
        }else{
            secondNode=secondNode->next;
        }
            firstNode=firstNode->next;
    }
}


}


bool palindrome (Node* head){
    if(head==nullptr){
        return false;
    }
    if(head->next==nullptr){
        return true;
    }
    Node* head1 = head;
    Node* tail =nullptr;

    if(head->data==tail->data){
        head1=head1->next;
        tail=tail->previous;

    }else{
        return false;
    }
    return true;
}


};
int main(){

    Linklist cll;

    // cll.isitCircular(4);

}