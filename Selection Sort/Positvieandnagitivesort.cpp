#include<iostream>
using namespace std;


void selectionsort(int arr[] , int n){
    for(int i=0; i<n-1; i++){
        int minval =i;
        for(int j=i+1;j<n;j++){
            // arr[j] < 0 && (arr[j] * -1) < (arr[minIndex] * -1)
            if(arr[j]<arr[minval]){
                minval =j;
            }
        }
        swap(arr[i],arr[minval]);
    }

}

int main(){
int arr[]={3,4,2,21,95,100,-1,-90,-900};
int n = sizeof(arr)/sizeof(arr[0]);


selectionsort(arr,n);

 cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}