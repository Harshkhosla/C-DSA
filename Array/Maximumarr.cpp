#include<iostream>
using namespace std;


int Maximum(int arr[], int start, int size) {
    // int max = arr[0];

    if(start==size-1){
        return arr[start];
    }

    int max = Maximum(arr, start + 1, size);

    if(arr[start]>max){
        return arr[start];
    }
    return max;
}

int main(){


    int arr[5]={10, 15, 20, 25, 30};
    int size=sizeof(arr)/sizeof(arr[0]);

   int data = Maximum(arr, 0,size);


cout <<data;

}



// int Maximum(int arr[] ,int start , int size ){
// int max=arr[0] ;

// for(int i =0;i<size;i++){
//     if(arr[i]>max){
//         max=arr[i];
//     }
// }

// return max;

// }