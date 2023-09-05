#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
void printing (int arr[],int n){
    for (int i =0 ;i<=n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[6]={2,4,5,7,-7,0};
    int brr[3]={9,6,5};

    reverse(arr,6);
    reverse(brr,3);
    printing(arr,6);
    printing(brr,3);
}
