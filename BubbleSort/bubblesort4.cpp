// in bubble sort we take rounds to swap the no like 4,6,7,3,1 so now 4,6,3,7,1 now 4,6,3,1,7 
// like this we go round by round and place the largest no at its position first
#include<iostream>
using namespace std;
int bubbleSort(int arr[],int n){
    for (int i = 0; i<n-1;i++){
        // for round o to n -1
        for (int j =0 ;j=n-i;j++ ){
            // swapping again and again
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
int arr[4]={4,5,3,2};
bubbleSort(arr,4);
}
