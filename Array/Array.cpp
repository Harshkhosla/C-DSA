#include<iostream>
using namespace std;

int main(){

    const int row =3;
    const int column =4;


    int arr[row][column]={
{2,3,4,5},
{2,3,4,5},
{9,7,8,9},
    };

    for(int i =0;i<row;i++){
        for(int j =0;j<column;j++){
            cout<<arr[i][j]<< " ";
        }
        std::cout << std::endl;
    }

    return 0;


}