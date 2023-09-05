#include <iostream>
// didnt understand this SHit 
// 9, 4, 2, 7, 1, 5, 6, 3, 8
void twisted_selection_sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int min_idx = i;

        // Sort even-indexed elements in ascending order
        if (i % 2 == 0) {
            for (int j = i + 2; j < n; j += 2) {
                if (arr[j] < arr[min_idx]) {
                    min_idx = j;
                }
            }
        }
        // Sort odd-indexed elements in ascending order
        else {
            for (int j = i + 2; j < n; j += 2) {
                if (arr[j] < arr[min_idx]) {
                    min_idx = j;
                }
            }
        }

        std::swap(arr[i], arr[min_idx]);
    }
}

int main() {
    int arr[] = {9, 4, 2, 7, 1, 5, 6, 3, 8,82};
    int n = sizeof(arr) / sizeof(arr[0]);

    twisted_selection_sort(arr, n);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
