#include<bits/stdc++.h>
using namespace std;

void print(int* p){
    cout<<*p<<endl; // function me pointer dedo vo aapko dereference karke uska value de dega
}

void incrementPointer(int* p){
    p=p+1;
}

void increment(int* p){
    (*p)++;
}

int main(){
    int i=10;
    int* p=&i;
    print(p);

    cout<<p<<endl; // address
    incrementPointer(p);
    cout<<p<<endl; // same address as above will be printed as we pass the value in function as passs by value s basically we pass a copy of that so id does not chnage the whole real value.


    cout<<*p<<endl; // value 10
    increment(p);
    cout<<*p<<endl; // will be incremented because we have chnaged the value at the address of p in the function so it will overall reflect changes.
 

}