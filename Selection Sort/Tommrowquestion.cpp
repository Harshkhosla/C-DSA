#include<iostream>
using namespace std;

void partitioned_selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;

        // Find the index of the smallest even number or largest odd number
        for (int j = i + 1; j < n; j++) {
            if (arr[j] % 2 == 0) {
                if (arr[min_idx] % 2 == 0) {
                    if (arr[j] < arr[min_idx]) {
                        min_idx = j;
                    }
                }
            } else {
                if (arr[min_idx] % 2 != 0) {
                    if (arr[j] > arr[min_idx]) {
                        min_idx = j;
                    }
                } else {
                    min_idx = j;
                }
            }
        }

        // Swap the current element with the found smallest even or largest odd number
        if (min_idx != i) {
            swap(arr[i], arr[min_idx]);
        }
    }
}

int main() {
    int arr[] = {2, 3, 5, 7, 8, 1, 3,6,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    partitioned_selection_sort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
