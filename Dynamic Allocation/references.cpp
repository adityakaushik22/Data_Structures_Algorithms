#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=10;
    int j=i;
    i++;
    cout<<j<<endl;

    // reference variable

    int a=10;
    int& b=a;
    a++; 
    cout<<b<<endl; //11

    int k=100;
    b=k;
    cout<<a<<endl; //100 now reference variable makes the variable reflecting to same memory location so it will chnage the value of a also as b is now 100.



}