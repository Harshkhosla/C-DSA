#include <iostream>
using namespace std;


void swap(int* samp, int* samp1 ){
// cout<<samp;
int harsh = *samp;
 *samp= *samp1;
*samp1= harsh;
// return 0;
}

int main(){

    int num1 =8;
    int num2 =18;
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    // cout<<*ptr;
    swap(ptr1,ptr2);

     std::cout << "After swapping:" << std::endl;
    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;

    return 0;
}