#include<iostream>
using namespace std;

const int MAX_SIZE = 100;

class Queue{
private:
int items[MAX_SIZE];
int rear ;
int front ;

public:

Queue(){
rear =-1;
front=-1;
}
 
 bool isEmpty(){
    return front==-1;
 }

 bool isFull(){
    return (rear+1)%MAX_SIZE==front;
 }

void enqueue(int item){
if(isFull()){
cout<<"Everything is full";
};

if(isEmpty()){
    front =0;
    rear=0;
}else{
    rear++;
}
items[rear]=item;
}


void deque(){
    if(isEmpty()){
        cout<<"No element to remove";
    }
    if(front==rear){
        front=-1;
        rear=-1;
    }
    else{
        front=(front+1)%MAX_SIZE;
    }
}
int peek(){
    if(isEmpty()){
        cout<<"it is empty";
    }
    return items[front];
}
};

int main(){
Queue queue;

queue.enqueue(20);
queue.enqueue(30);
queue.enqueue(60);
queue.deque();

cout<<queue.peek();
}