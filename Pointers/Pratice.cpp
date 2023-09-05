#include <iostream>

void updateValue(int& ref) {
    ref *= 2;
}

int main() {
    int num = 5;
    int& ref = num;

    updateValue(ref);

    std::cout << "Value: " << num << std::endl;

    return 0;
}
