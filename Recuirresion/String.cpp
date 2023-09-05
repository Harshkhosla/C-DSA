#include<iostream>
using namespace std;

bool stringData(const string str , int start , int end){
    
// cout << str;
if(start>=end){
    return true;
}

if(str[start]!=str[end]){
    return false;
}


return stringData(str,start+1,end-1);
}

int main(){


    const string sample ="helleh";
    

      bool result = stringData(sample,0,sample.length()-1);

      cout<< result;



}