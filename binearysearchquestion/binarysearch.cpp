#include<iostream>
using namespace std;

int search(int arr[],int n ,int key){
    int start=0;
    int end=n-1;
    int mid=start + (end-start)/2;
    while (start <= end){
        if (arr[mid]==key){
            return mid;
        }
        if (arr[mid]<=key){
            start=mid +1;
        }
        if (arr[mid]>=key){
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return -1;
}


int main (){
    int even[4]={2,4,5,6};

    int odd[5]={3,4,5,6,7}; 

    int printeven = search(even,4,6);
    
    cout<< printeven <<endl;
}