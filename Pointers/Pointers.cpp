#include <iostream>

int main() {
    int num = 42;
    int* ptr = &num;  // Pointer initialization with the address of 'num'

    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Address of num: " << &num << std::endl;
    std::cout << "Value stored in ptr: " << *ptr << std::endl;  // Dereferencing the pointer

    *ptr = 100;  // Modifying the value using the pointer

    std::cout << "New value of num: " << num << std::endl;

    int* nullPtr = nullptr;  // Null pointer initialization

    if (nullPtr == nullptr) {
        std::cout << "nullPtr is a null pointer." << std::endl;
    }


    int* dynamicPtr = new int;  // Dynamic memory allocation
    *dynamicPtr = 200;  // Assigning a value to the dynamically allocated memory

    std::cout << "Value stored in dynamicPtr: " << *dynamicPtr << std::endl;

    delete dynamicPtr;  // Deallocating the dynamically allocated memory

    int arr[5] = {1, 2, 3, 4, 5};
    int* arrPtr = arr;  // Assigning the array name as a pointer to the first element

    std::cout << "First element of arr: " << arr[0] << std::endl;
    std::cout << "First element using arrPtr: " << *arrPtr << std::endl;

    arrPtr++;  // Incrementing the pointer to the next element
    std::cout << "Second element using arrPtr: " << *arrPtr << std::endl;

    return 0;
}
