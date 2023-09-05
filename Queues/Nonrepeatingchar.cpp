#include<iostream>
#include <unordered_map>
#include<queue>
using namespace std;


char firstNonRepeatingCharacter(string& data){
unordered_map<char,int> sample;
string list ="";
// cout<<list;

for(char ch:data){
sample[ch]++;
    cout <<sample[ch]<<endl;
};

for(char ch:data){
    if(sample[ch]==1){
        return ch;
    };


};

    return '#';


};

int main(){
string st ="harsh";

 char result = firstNonRepeatingCharacter(st);

}