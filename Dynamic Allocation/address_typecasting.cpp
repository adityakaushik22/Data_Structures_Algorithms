#include<bits/stdc++.h>
using namespace std;

int main(){
    //TYPECASTING (IMPLICIT -- ISME COMPILER HI KAR DEGA)
    int i=65;
    char c=i; // A
    cout<<c<<endl;

    // EXPLICIT (ISME HAMNE APNI TARAF SE TYPECAST KARVAYA)
    int* p=&i;
    char* pc=(char*)p;

    cout<<pc<<endl;


    cout<<*pc<<endl; 
    cout<<*(pc+1)<<endl;
    cout<<*(pc+2)<<endl;
    cout<<*(pc+3)<<endl;


}