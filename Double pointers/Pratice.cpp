#include <iostream>
using namespace std;

int main() {
    int num = 42;
    int* ptr = &num;
    int** doublePtr = &ptr;

    cout<<&ptr;

    // Accessing the value using double pointer
    cout << "Value using double pointer: " << **doublePtr << endl;

    // Modifying the value using double pointer
    **doublePtr = 100;
    cout << "Modified value using double pointer: " << **doublePtr << endl;

    // Modifying the value using single pointer
    *ptr = 200;
    cout << "Modified value using single pointer: " << *ptr << endl;
    
    return 0;
}
