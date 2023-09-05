#include <iostream>
using namespace std;

int Binarysearch(int arr[], int start, int end, int target) {
    if (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return 1;
        } else if (arr[mid] > target) {
            return Binarysearch(arr, start, mid - 1, target);
        } else {
            return Binarysearch(arr, mid + 1, end, target);
        }
    }

    return 0;
}

int main() {
    int arr[6] = {3, 4, 1, 8, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    int data = Binarysearch(arr, 0, size - 1, target);
    cout << data;

    return 0;
}
