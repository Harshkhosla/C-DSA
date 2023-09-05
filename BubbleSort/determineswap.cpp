#include <iostream>
using namespace std;

int bubbleSortWithSwaps(int arr[], int n) {
    int swaps = 0;
    
    
    // TODO: Implement bubble sort algorithm


    for(int i =0 ; i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaps++;
            }

        }
    }
    
    return swaps;
}

int main() {
    int arr[] = {5, 2, 8, 12, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int swapCount = bubbleSortWithSwaps(arr, size);
    
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Swaps performed: " << swapCount << endl;
    
    return 0;
}
