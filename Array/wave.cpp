#include<iostream>
using namespace std;

void coloumSum(int arr[][4], int row, int coloum) {
        // int largest = 0;
    // int sample=0;
    for (int j = 0; j < coloum; j++) {
        // int sum = 0;
        if(j==0){
        for (int i = 0; i < row; i++) {
           cout<<arr[i][j]<<" ";
        }
        //    sum++;
        }else{
            for(int i = row-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
                // sum++;
            }
        }
        cout<<endl;

        }
        
}

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {12, 34, 43, 0},
        {2, 3, 1, 8}
    };

    coloumSum(arr, 3, 4);

    return 0;
}
