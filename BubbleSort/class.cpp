#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) {
        name = n;
        age = a;
    }
};

void bubbleSortObjects(Person arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            // if(arr[j].age > arr[j + 1].age) {
            if(arr[j].name.length() > arr[j + 1].name.length()) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    Person arr[] = {
        Person("Alice", 25),
        Person("Bob", 18),
        Person("Charlie", 32),
        Person("David", 28),
        Person("Eve", 21)
    };
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSortObjects(arr, size);

    cout << "Sorted array by age: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "Name: " << arr[i].name << ", Age: " << arr[i].age << endl;
    }

    return 0;
}
