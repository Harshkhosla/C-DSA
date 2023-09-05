#include<iostream>
using namespace std;


int binarysearch(int arr[],int start){

int sum =0;
// cout<<start;
if(start<0){
    return 0;
}


    sum=arr[start];


return sum+ binarysearch(arr,start-1);


}
int main(){



    int arr[5]={6,4,9,0,2};
    int size=sizeof(arr)/sizeof(arr[0]);

   int data= binarysearch(arr,size-1);
   cout<<data;
}

