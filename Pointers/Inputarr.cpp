#include<iostream>
using namespace std;

int addingthe2arr(int* arr, int*arrr,int size){
    int* array=new int[size] ;
    for(int i=0;i<size;i++){
        array[i]=*arr+*arrr;

    arr++;
    arrr++;
    }
    cout<<*array<<"kooomkl";
    return *array;

}


int main(){
    int arr[5]={};
    int arrr[5]={};
    cout<<"give us the input for 1 arr";
    for(int i =0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"give us the input for 2 arr";
    for(int i =0;i<5;i++){
        cin>>arrr[i];
    }


  int sample= addingthe2arr(arr,arrr,5);


// cout<<*sample<<"heeheheh";

    // for(int i =0;i<5;i++){
    //     cout<<arr[i];
    // }
    // for(int i =0;i<5;i++){
    //     cout<<arrr[i];
    // }



 return 0;
}