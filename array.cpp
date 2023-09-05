#include<iostream>
using namespace std;

int Max_No(int arr[],int n){
    int maxam =INT_MIN;
    for(int i=1;i<n;i++){
        maxam =__max(maxam,arr[i]);
    }
 return maxam;
}
int Max_No(int arr[],int n){
    int maxam =INT_MIN;
    for(int i=1;i<n;i++){
        maxam =__min(maxam,arr[i]);
    }
 return maxam;
}
int main (){
    int size;
    cin>> size;
    int num[100];
    for (int i =0;i<size;i++){
    cin>>num[i];
    }
}
