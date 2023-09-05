#include<iostream>
using namespace std;


int sumDigits(int n){

if(n==0){
    return 1;
}

 int lastDigit = n % 10;  // Extract the last digit
    int remainingDigits = n / 10; // Remove the last digit
    return lastDigit + sumDigits(remainingDigits); // Recursive call
}




int main(){

    int data =1347;



    int datas = sumDigits(data);
    cout<<datas;
}