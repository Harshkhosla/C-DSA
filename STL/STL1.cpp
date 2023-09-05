#include<iostream>
#include<vector>
using namespace std;


int main(){

   vector<int>numbers;

   numbers.push_back(5);
   for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    // cout<<*numbers;

}