#include<iostream>
#include<Stack>
#include<String>
using namespace std;

string addition(string str){
    stack<char> operators;

for( int i =0 ; i<str.length();i++){
    char c = str[i];
    operators.push(c);

}
if(!operators.empty()){
    
}


}


int main(){

    string str;

    cout<<"give us the output"<<endl;
    cin>>str;

    string sample=addition(str);

    cout<<sample<<endl;

    return 0;

}
