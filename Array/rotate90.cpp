// #include <iostream>
// using namespace std;

// void rotateMatrix(int arr[][4], int row, int col) {
//     // int temp[row][col];
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             temp[i][j] = arr[i][j];
//         }
//     }

//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             arr[j][row - i - 1] = temp[i][j];
//         }
//     }
// }

// int main() {
//     int arr[3][4] = {{1, 2, 3, 4},
//                      {5, 6, 7, 8},
//                      {9, 10, 11, 12}};

//     int row = 3;
//     int col = 4;

//     cout << "Original Matrix:" << endl;
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     rotateMatrix(arr, row, col);

//     cout << "Rotated Matrix:" << endl;
//     for (int i = 0; i < col; i++) {
//         for (int j = 0; j < row; j++) {
//             cout << arr[j][i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
