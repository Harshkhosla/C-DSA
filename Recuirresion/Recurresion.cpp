#include<iostream>
using namespace std;


int fibnachiseries(int n){

  if (n == 0 || n == 1) {
        return n;
    }

return fibnachiseries(n-2)+fibnachiseries(n-1);

}



// 0,1,1,2,3,5,8,13

int main(){


    int size=6;

    int data =fibnachiseries(size);

    cout<<data;
}