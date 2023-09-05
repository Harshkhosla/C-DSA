#include<iostream>
#include <stack>
#include <string>
using namespace std;


bool isBalanced(string str) {
    stack<char> parenthesesStack;
        for (char c : str) {
        if (c == '(') {
            parenthesesStack.push(c);
        } else if (c == ')') {
            if (parenthesesStack.empty() || parenthesesStack.top() != '(') {
                return false; // Found a closing parenthesis without a corresponding opening parenthesis
            }
            parenthesesStack.pop();
        }
    }


    return parenthesesStack.empty(); // If stack is empty, all parentheses are balanced
}


int main(){
 string str;
    cout << "Enter a string with parentheses: ";
    cin >> str;

    if (isBalanced(str)) {
        cout << "Parentheses are balanced." << endl;
    } else {
        cout << "Parentheses are not balanced." << endl;
    }

    return 0;

}