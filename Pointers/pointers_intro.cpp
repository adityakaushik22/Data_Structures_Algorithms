#include<bits/stdc++.h>
using namespace std;

int main(){
    // address of a varible in memory
    int i=10;
    cout<<&i<<endl;

    // making a pointer to store the address of a variable
    int *p=&i;
    cout<<p<<endl;

    // to get the value from this pointer variable
    cout<<*p<<endl; //10


}