#include<iostream>
using namespace std;

int  insertionSort(int arr[], int n){

    int insertion =0;
for(int i=1;i<n;i++){
    for(int j=i-1;arr[j]>=0 && arr[j]>arr[j+1];j--){
cout<<arr[j]<<arr[j+1];


        swap(arr[j],arr[j+1]);
insertion++;
    }
}

return insertion;
}


int main(){
    int arr[]={2,9,5,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);


    int result =insertionSort(arr, size);
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Number of inversions: " << result << endl;

    return 0;
}