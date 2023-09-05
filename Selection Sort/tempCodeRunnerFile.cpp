#include<iostream>
#include<math.h>
using namespace std;

// 5, 8, 2, 7, 4, 9
// # Output: [2, 5, 4, 7, 8, 9]

void twisted_selection_sort (int arr[], int n){
for (int i=0; i<=n-1; i++){
int minIndex =i;
   if (i % 2 == 0) {
            for (int j = i + 2; j < n; j += 2) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
        }
        // Sort odd-indexed elements
        else {
            for (int j = i + 2; j < n; j += 2) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
        }
swap(arr[i],arr[minIndex]);

}
}


int main(){

    int arr[]={5, 8, 2, 7, 4, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

     twisted_selection_sort (arr,n);
   cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;

}