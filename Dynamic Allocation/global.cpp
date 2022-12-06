#include<bits/stdc++.h>
using namespace std;

int a;

void g(){
}

void f(){
    cout<<a<<endl;
    a++;
}

int main(){
    a=10;
    f();
    cout<<a<<endl;
}

// the problem with global varibale is that any function can change the value and are very risky.
// so we can pass by reference in the arguments to pass the variable in functions.