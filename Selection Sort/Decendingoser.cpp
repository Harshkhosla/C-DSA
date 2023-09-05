#include<iostream>
using namespace std;

//  its time complexity, which is O(n^2)

void SelectionSort(int arr[], int n){
for (int i=0; i<=n-1; i++){
int minIndex =i;
for(int j= i+1;j<n;j++){
    if(arr[minIndex]<arr[j]){
        minIndex =j;
    }
}
swap(arr[i],arr[minIndex]);

}
}


int main(){

    int arr[]={5, 2, 9, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

     SelectionSort(arr,n);
   cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}