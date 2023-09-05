// sorting an arr[5]={1,5,3,7,8} form this to an increasing oder arr[5]={1,3,5,7,8}
// finding the smallest element and placing it at right position by swapping 
// selection sort is used when the length of an array is small if it is small we can give it a try

#include<iostream>
using namespace std;


int selectionSort(int arr[],int n){
for (int i =0;i<n-1;i++){
    int minIndex = i;
    for(int j = i+1;j<n;j++){
        if(arr[j]<arr[minIndex]){
            minIndex =j;
        }
        swap(arr[minIndex],arr[i]);
    }
}

}
int main (){
int arr[4]={2,4,3,1};
selectionSort(arr,4);
cout<<arr[4];
}