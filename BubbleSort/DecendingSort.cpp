#include <iostream>
using namespace std;

void modifiedBubbleSortDescending(int arr[], int n) {
    // TODO: Implement modified bubble sort algorithm for descending order

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 12, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    modifiedBubbleSortDescending(arr, size);

    cout << "Sorted array (descending order): ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
