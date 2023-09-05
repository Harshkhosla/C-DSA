#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s = "harsh";
    unordered_map<char, int> charIndexMap;

    for (int end = 0; end < s.size(); end++) {
        if (charIndexMap.find(s[end]) != charIndexMap.end()) {
            int previousIndex = charIndexMap[s[end]];
            cout << "Character '" << s[end] << "' repeated at index " << end << ", previous index: " << previousIndex << endl;
        }

        charIndexMap[s[end]] = end;
    }

    // Print the contents of the map
    cout << "Contents of charIndexMap:" << endl;
    for (auto it = charIndexMap.begin(); it != charIndexMap.end(); ++it) {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
    }

    return 0;
}
