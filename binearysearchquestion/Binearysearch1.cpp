#include <iostream>
using namespace std;
int binarySearch(int arr[] ,int left , int right , int target){

int mid = left +(right -left)/2;

if(arr[mid]==target){

    return target;



if(arr[mid]>target){
     right = mid -1;

}

else {

left = mid +1;
}

return -1;
}



}

int main(){
    int arr[]={2,3,4,5,6,7,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);


    int target = 4;
    int result = binarySearch(arr,1,n-1,target);

if (result == -1)
        cout << "Element not found in the array.";
    else
        cout << "Element found at index " << result << ".";

    return 0;

}