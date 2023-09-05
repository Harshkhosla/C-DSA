
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str, int start, int end) {
    // Base case: when the start index crosses or equals the end index
    if (start >= end) {
        return true;
    }

    // Recursive case: check if the characters at start and end indices are equal
    if (str[start] != str[end]) {
        return false;
    }

    // Recursively check the remaining substring
    return isPalindrome(str, start + 1, end - 1);
};
bool palindrome(string str) {
    int length = str.length();
    return isPalindrome(str, 0, length - 1);
};

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    bool isPalindrome = palindrome(str);

    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
//  this aproch uses big o n^2 this is bad






#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool palindrome(string str){
    stack<char> s1;

    for(int i =0 ;i<str.length();i++){
        char data = str[i];
        s1.push(data); 
    }

string sample ="";
    while(!s1.empty()){
        int data = s1.top();
        sample.push_back(data);
        s1.pop();
    }

    if(str==sample){
        return true;
    }
    return false;

}

int main(){
 string str;
cout<<"give us the output"<<endl;
 cin>>str;

 int  data =palindrome(str);

 cout<<data;
 return 0;

}

