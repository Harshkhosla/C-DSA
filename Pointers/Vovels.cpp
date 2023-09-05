#include <iostream>
#include <cstring>
using namespace std;

int countVowels(const char* sentence) {
    int count = 0;
    while (*sentence != '\0') {
        if (*sentence == 'a' || *sentence == 'e' || *sentence == 'i' || *sentence == 'o' || *sentence == 'u' ||
            *sentence == 'A' || *sentence == 'E' || *sentence == 'I' || *sentence == 'O' || *sentence == 'U') {
            count++;
        }
        sentence++;
    }
    return count;
}

int main() {
    char sentence[100];
    cout << "Enter a sentence: ";
    cin.getline(sentence, 100);

    int vowelCount = countVowels(sentence);
    cout << "Number of vowels: " << vowelCount << endl;

    return 0;
}
