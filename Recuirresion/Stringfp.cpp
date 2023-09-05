#include <iostream>
using namespace std;

void reverse(string& data, int start, int end) {
    if (start >= end) {
        return;
    }
    swap(data[start], data[end]);
    reverse(data, start + 1, end - 1);
}

int main() {
    string data = "harsh";
    reverse(data, 0, data.length() - 1);
    // cout << data << endl;
    return 0;
}
