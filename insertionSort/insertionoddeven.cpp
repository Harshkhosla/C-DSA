#include <iostream>
using namespace std;

int oddeve(int arr[], int n)
{
        int evenindex=0;
    for (int i = 0; i < n; i++){
        cout<<arr[i];
        cout<<evenindex;
      if(arr[i]%2==0){
        swap(arr[i],arr[evenindex]);
        evenindex++;
      }

    }
   
}

int main()
{

    int arr[] = {2, 4, 5, 7, 9, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    oddeve(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}