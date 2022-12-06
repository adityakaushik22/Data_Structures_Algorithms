#include<bits/stdc++.h>
using namespace std;

int main(){
    // dynamic allocation on the heap memory
    int* p=new int;
    *p=10;
    cout<<*p<<endl;


    double* d=new double;
    char* c=new char;


    int* arr=new int[50];

    // dynamic array
    int n;
    cin>>n;
    int* arr2=new int[n];

    arr2[0]=10; // arr2[0] --> (*arr2+0)
    

}