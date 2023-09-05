#include<iostream>
using namespace std;

int spiralprint(int arr[][4],int row ,int coloum){
int top =0;
int right =coloum-1;
int bottom = row-1;
int left=0;
int count =0;
int total =row*coloum;
while(count<total){
for(int i =left;i<=right;i++){
cout<<arr[top][i]<<" ";
count++;
}
top++;
cout<<top<<"jekek";
for(int j =top;j<=bottom;j++){
    cout<<arr[j][right]<<" ";
    count++;
}
right--;
for(int k=right;k>=left;k--){
    cout<<arr[bottom][k]<<" ";
    count++;
}
bottom--;
for(int l =bottom ;l>=top;l--){
    cout<<arr[l][left]<<" ";
    count++;
}
left++;
}
}
// 1,23,4,5
// 6,7,8,9
// 4,5,6,7


int main(){

    int arr[3][4]={{1,23,4,5},{6,7,8,9},{4,5,6,7}};
    spiralprint(arr,3,4);
    return 0;
}


//   arr[0][0]
// arr[3][0]
// arr[3][3]

