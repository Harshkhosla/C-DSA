#include<iostream>
using namespace std;


int addition(int arr[] ,int start , int size ){
// int data ;
if(start>=size){
return 0;
}


int  data = arr[start]+addition(arr,start+1,size);


return data;



}

int main(){


    int arr[5]={10, 15, 20, 25, 30};
    int size=sizeof(arr)/sizeof(arr[0]);
    // cout<<size;

   int data = addition(arr, 0,size);


cout <<data;

}