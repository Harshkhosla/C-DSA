#include <iostream>
using namespace std;

int modifiedBubbleSort(int arr[], int n) {
    int passes = 0;
    bool isSorted = false;
    
    // TODO: Implement modified bubble sort algorithm

    for (int i = 0; i < n - 1; i++) {
        isSorted = true; // Assume the array is sorted
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                isSorted = false; // Mark the array as not fully sorted
            }
        }
        passes++;
        
        if (isSorted) {
            break; // Array is already sorted, so no need for further passes
        }
    }
    
    return passes;
}

int main() {
    int arr[] = {5, 2, 8, 12, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int passCount = modifiedBubbleSort(arr, size);
    
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Passes performed: " << passCount << endl;
    
    return 0;
}
