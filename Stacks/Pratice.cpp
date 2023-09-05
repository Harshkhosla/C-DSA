#include<iostream>
using namespace std;


class Stacks{
    private:
    int top;
    int *arr;
    int size;
    public:

    Stacks(int size){
        size= this->size;
        arr= new int [size];
        top=-1;
    };



void push(int element){
    if(size-top>=1){
        top++;
        arr[top]= element;
    }
};
void pop(){
    if(top!=-1){
        top--;
    }
};
void peek(){
    if(top!=-1){
        // top--;
        cout<<arr[top];
    }
};



};



int main(){
    Stacks s1(5);
// Stacks.s1;
s1.push(2);
s1.push(21);
s1.push(25);
s1.push(27);
s1.pop();
s1.peek();

}