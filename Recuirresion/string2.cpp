#include <iostream>
#include <unordered_map>
#include <string>

void printMap(const std::unordered_map<char, int>& myMap) {
    for (const auto& pair : myMap) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }
}

bool areIsomorphic(const std::string &str1, const std::string &str2) {
    std::unordered_map<char, int> hm1;
    std::unordered_map<char, int> hm2;

    if (str1.size() != str2.size()) {
        return false;
    }

    int n = str1.size();

    for (int i = 0; i < n; ++i) {
        hm1[str1[i]]++;
        hm2[str2[i]]++; // Fixed: Use str2[i] to fill the hm2 map
    }

    std::cout << "Contents of Map 1:" << std::endl;
    printMap(hm1);

    std::cout << "Contents of Map 2:" << std::endl;
    printMap(hm2);

    return true; // For simplicity, returning true irrespective of the content in the maps
}

int main() {
    std::string str1 = "abb";
    std::string str2 = "zyy";

    areIsomorphic(str1, str2);

    return 0;
}
