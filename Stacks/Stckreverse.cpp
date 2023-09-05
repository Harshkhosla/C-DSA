#include<iostream>
#include<stack>
#include<string>
using namespace std;


string reversethem(string str){
    stack <char> sample;
for(int i =0;i<str.length();i++){
    char c = str[i];
    sample.push(c);
    
}
   string reversedStr = "";
   while(!sample.empty()){
   reversedStr.push_back( sample.top());
    sample.pop();
    // reversedStr ++;

}
// return str;

 return reversedStr;


};



int main(){
    string str ;
    cout<<"Give me the input"<<endl;
    cin>> str;


    string reversedStr =reversethem(str);

    cout << "Reversed string: " << reversedStr << endl;

    return 0;



}