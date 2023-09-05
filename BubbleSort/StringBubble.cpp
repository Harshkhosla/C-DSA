#include <iostream>
#include <string>
using namespace std;

void bubbleSortStrings(string arr[], int n) {
    // TODO: Implement bubble sort algorithm for strings
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j].length()>arr[j+1].length()){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    string arr[] = {"apple", "banana", "cherry", "date", "elderberry"};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSortStrings(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
