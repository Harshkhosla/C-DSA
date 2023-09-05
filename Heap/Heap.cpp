#include<iostream>
using namespace std;


class Heap{
public :
int arr[100];
int size;

Heap(){
     arr[0]=-1;
    size=0;
}

void insert(int data){

    size= size+1;
    int index = size;
    arr[index]=data;
    while(index>1){
int parent = index/2;
    if(arr[index]>arr[parent]){
        swap(arr[index],arr[parent]);
        index=parent;

    }else{
        return;
    }
    }
}
void printHeap() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void heapify(int arr[],int size,int rootindex){
        int largest = rootindex;
        int leftroot = 2*rootindex+1;
        int rightroot = 2*rootindex+2;

        if(leftroot<size&&arr[leftroot]>arr[rootindex]){
            largest =leftroot;
            cout<<largest;
        }

        if(rightroot<size&&arr[rightroot]>arr[rootindex]){
            largest =rightroot;
              cout<<largest;
        }

        if(largest!=rootindex){
            swap(arr[largest],arr[rootindex]);

            heapify(arr,size,largest);
        }
    }

void deleteRoot(){
    if(size==0){
      cout << "Heap is empty\n";
      return;
    }
    //1st step
    arr[1]=arr[size];
    //2nd step
    size--;
    //3rd step
    int i=1;
    while(i<size){
      int leftInd=2*i;
      int rightInd=2*i+1;
     /* Modification - 1 */
      if(leftInd<=size && arr[i]<arr[leftInd] && arr[leftInd]>arr[rightInd]){
        swap(arr[i], arr[leftInd]);
        i=leftInd;
      }
      /* Modification - 2 */
      else if(rightInd<=size && arr[i]<arr[rightInd] && arr[rightInd]>arr[leftInd]){
        swap(arr[i], arr[rightInd]);
        i=rightInd;
      }else{
        return;
      }
    };
}

int sortheap(){
    if(size==0){
        cout<<"emplty";
        return -1;
    }

    int maxelement =arr[1];
    arr[1]=arr[size];
    size =size-1;
    heapify(arr,size,1);
    return maxelement;

}



};

int main(){

 int elements[] = {50, 90, 70, 30, 10, 20, 60, 80, 40};
    int n = sizeof(elements) / sizeof(elements[0]);

    Heap maxHeap;

    for (int i = 0; i < n; i++) {
        maxHeap.insert(elements[i]);
    }

    cout << "Max Heap: ";
    maxHeap.printHeap();

    return 0;
}