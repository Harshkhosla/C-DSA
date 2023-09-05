#include<iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;


int main(){
    vector<int> numbers={12,23,34,4,5};

    sort(numbers.begin(),numbers.end(),[](int a ,int b){
        return a<b;
    });


// in accumulator we take three values first is from the start value that is derived from the 3 value and second is the end till where data is process
    int data = accumulate(numbers.begin(),numbers.end(),3);

    cout <<data;



    // cout<<numbers;
     for (const auto& number : numbers) {
        cout << number << " ";
    }

    
     std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;

}