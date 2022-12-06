#include<bits/stdc++.h>
using namespace std;

int main(){

    // to delete the dynamic memory as it will not release automatically
    int *p=new int;
    delete p;

    // to delete array
    p=new int[100];
    delete [] p;


    // pointer delete nhi hoga vo jahan point kar rha hai us jagah ki memory clear ho jayegi

    /*
    dynamic so program will crash as dynamic memory is not released automatically
    while (true){
        int* p = new int;
    }
    while (true){
        int p = 10;
    }
    */
}