#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j--) {
            swap(arr[j], arr[j + 1]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 4, 5, 3, 9, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    InsertionSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
