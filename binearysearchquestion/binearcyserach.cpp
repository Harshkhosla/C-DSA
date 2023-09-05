#include<iostream>
using namespace std;

int binaryrotatedSearch(int arr[], int n ,int target ){
int left =0;
int right = n-1;

while(left<=right){
int mid = left +(right-left)/2;


if(arr[mid]==target)
    return mid;

if(arr[left]<=arr[mid]){
 if(arr[left]<=target&&arr[mid]>=target){
   right = mid-1;
 }else{
    left=mid+1;
 }

}

 else{
    if(target>=arr[mid]&&target<=arr[right]){
        cout<<"hehe";
            left =mid +1;
    }else{
        right = mid -1;
    }
 }

}
return -1;
}
// 8 
// 9
int main(){
int arr[]= {64,122,533,637,2,4,6,7,9};
int n = sizeof(arr)/sizeof(arr[0]);
int target1 = 4;
int result = binaryrotatedSearch(arr,n,target1);


cout<<result<<"doneeenene";

}

