#include<iostream>
using namespace std;


int main(){

    int* dynamic = new int;
    int** dynamic1 = new int*;

    *dynamic=34;

    *dynamic1=dynamic;


 delete dynamic;
    delete dynamic1;

    return 0;

}