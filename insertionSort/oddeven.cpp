#include <iostream>
#include <algorithm>

void odeeve(int arr[], int n) {
    int evenIndex = 0;
    int oddIndex = n - 1;

    while (evenIndex < oddIndex) {
        while (arr[evenIndex] % 2 == 0 && evenIndex < oddIndex) {
            evenIndex++;
        }

        while (arr[oddIndex] % 2 != 0 && evenIndex < oddIndex) {
            oddIndex--;
        }

        if (evenIndex < oddIndex) {
            std::swap(arr[evenIndex], arr[oddIndex]);
        }
    }
}

int main() {
    int arr[] = {3, 6, 9, 8, 4, 21};
    int size = sizeof(arr) / sizeof(arr[0]);

    odeeve(arr, size);

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
