#include<iostream>
#include <queue>
#include <stack>
using namespace std;


void reverseQueue(queue<int>& q){

stack<int>s;
while(!q.empty()){
    s.push(q.front());
    q.pop();

}
while(!s.empty()){
q.push(s.top());
s.pop();
}
};
int main(){
    

queue<int> q;
q.push(10);
q.push(30);
q.push(50);
q.push(70);
reverseQueue(q);

while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }

    return 0;
}