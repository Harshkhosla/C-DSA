#include<iostream>
using namespace std;


int biggest_integer(int* arrptr ,int size){
// cout <<*arrptr;
int data =0;
for(int i=0;i<size;i++){
    if(data<*arrptr){
        data=*arrptr;
    }
        arrptr++;


}
return data;
}

int main(){

    int arr[5]={1,2,3,4,5};


    int size =sizeof(arr)/sizeof(arr[0]);


    int data =biggest_integer(arr,size);
  cout<<data;
  return 0;

    

}