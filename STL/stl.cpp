#include<iostream>
#include<deque>
#include<stack>
#include<queue>

#include<map>
using namespace std;

int main(){

    // -----------------------------------------map---------------------------------------------------------//
    map<int,string>m;
    m[1]="harsh";
    m[2]="sample";
    m[21]="hcweci";

    for(auto i:m){
        cout<<i.first<<endl;
    }
    
    //-----------------------------------------deque---------------------------------------------------------------//
    deque<int> c;
    deque<int> a(6,9);

    deque<int> b(a);

    b.push_back(3);

    b.push_front(0);

    cout<< b.at(0)<<endl;
    cout<<b.size();
    b.erase(b.begin());

    // cout<<b.empty();

    // --------------------------------------Stack--------------------------------------------------------------//
    stack<string>z;
    z.push("harsh");
    z.push("evwvjnv");

    z.pop();
    // cout<<z.top()<<endl;
    cout<<z.size();

    //--------------------------------------------max heap-------------------------------------------------//

    priority_queue<int>maxi;

    maxi.push(1);
    maxi.push(4);
    maxi.push(9);
    maxi.push(5);
    int n = maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top();
        maxi.pop();
    }cout<<endl;


    //-------------------------------------------min heap----------------------------------------------//
    priority_queue<int,vector<int>,greater<int>>mini;


    mini.push(1);
    mini.push(4);
    mini.push(9);
    mini.push(5);
    int n = mini.size();
    for(int i=0;i<n;i++){
        cout<<mini.top();
        mini.pop();
    }cout<<endl;

}
