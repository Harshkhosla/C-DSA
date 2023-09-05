#include<iostream>
using namespace std;


int partition(int *arr, int start , int end){
int povit = arr[end];
int i = start;

for(int j =start ;j<end;j++){
    if(arr[j]<=povit){
        swap(arr[j],arr[i]);
        i++;
    }
}

swap(arr[i],arr[end]);
return i;




}


int QuickSort(int *arr, int start,int end){


if(start<end){
    int sample = partition(arr, start , end);

    QuickSort(arr,start,sample-1);
    QuickSort(arr,sample+1,end);
}
}


int main(){


    int arr [5]={2,6,9,4,3};
    int size= sizeof(arr)/sizeof(arr[0]);


    QuickSort(arr,0,size-1);


for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}