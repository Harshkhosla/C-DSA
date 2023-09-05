#include <iostream>
 using namespace std;
 void merge(int *arr,int s,int e){
    int mid =s+(e-s)/2;
    int len1 = mid -s+1;
    int len2 = e-mid;
    int *first = new int[len1];
    int *second = new int[len2];
    int mainArrayindex = s;

    for (int i=0;i<len1;i++){
        first[i]=arr[mainArrayindex++];
    }
     mainArrayindex = e;
    for (int i=0;i<len2;i++){
        second[i]=arr[mainArrayindex++];
    }

    int index1=0 ;
    int index2 =0;
    mainArrayindex =s;
    while(index1<len1 && index2 <len2){
        if(first[index1]<second[index2]){
            arr[mainArrayindex++]=first[index1++];
        }else{ 
            arr[mainArrayindex++]=second[index2++];
        }
    }
    while(index1<len1){
         arr[mainArrayindex++]=first[index1++];
    }
    while(index2<len2){
         arr[mainArrayindex++]=second[index2++];
    }

 }
void mergSort(int *arr,int s,int e ){
    if(s>=e){
        return;
    }
    int mid = s+(e-s)/2;
    mergSort(arr,mid+1,e);
    mergSort(arr,s,mid);
    merge(arr,s,e);


}
 int main(){
    int arr [4]={3,4,5,6};
    int n=4  ;
    mergSort(arr,1,n-1);
    for (int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
 }