#include<iostream>
using namespace std;

int multiplication(int n){


if(n==0){
    return 1;
}

return n*multiplication(n-1);

}


int main(){


    int data = 5;
    int sample = multiplication(data);

    cout<<sample;
}