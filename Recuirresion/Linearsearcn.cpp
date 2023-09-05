#include<iostream>
using namespace std;
bool linearsearch(int arr[],int target, int size){


    if(size==0){
        return 0;
    }

    if(arr[size]==target){
        return 1;
    }
    return linearsearch(arr+1,target,size-1);

}

int main(){
    int arr[3]={3,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<size;
    int target =41;
    int data=linearsearch(arr,target,size-1);
    cout<<data;
}