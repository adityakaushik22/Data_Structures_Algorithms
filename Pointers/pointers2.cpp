#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=10;
    int* p=&i;
    cout<<sizeof(p); // 4

    cout<<i<<endl;
    cout<<*p<<endl;

    i++;

    cout<<i<<endl; //11
    cout<<*p<<endl; //11

    int a=i; // no change in i but a will chnage
    a++; 
    cout<<a<<endl;
    cout<<*p<<endl;

    int* q=p; // we can also store a pointer inside a pointer
    

}