#include<iostream>
#include<queue>
using namespace std;

void reverseQueue(queue<int>& q){

if(q.empty()){
    return ;
}

int front_element = q.front();
q.pop();
reverseQueue(q);
q.push(front_element);

}

int main(){

    queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);
    reverseQueue(q);
  std::cout << "\nReversed Queue: ";
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }

    return 0;
}







