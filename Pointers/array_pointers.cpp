#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10];
    cout<<a<<endl;
    cout<<&a[0]<<endl;

    a[0]=5;
    a[1]=10;
    cout<<*a<<endl;

    cout<<*(a+1)<<endl;

    int* p=&a[0];

    cout<<a<<endl;
    cout<<p<<endl;

    cout<<&p<<endl; // address of p varaiable that has address of a
    cout<<&a<<endl; // will give just address of a


    cout<<sizeof(p)<<endl; // 4
    cout<<sizeof(a)<<endl; // 40

    
}