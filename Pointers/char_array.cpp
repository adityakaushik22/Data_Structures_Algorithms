#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[]={1,2,3};
    char b[]="abc";

    cout<<a<<endl; // address of a
    cout<<b<<endl; // "abc" character arrays are different they will actually print the value but not the same case with arrays

    char* c=&b[0];
    cout<<c<<endl; // abc

    char c1='a';
    char* pc=&c1;

    cout<<c1<<endl;
    cout<<pc<<endl;

    char str[]="abcde";
    char* pstr="abcde"; // wrong way as we dont know the memory allocation of ptr

    char s[]= "hello";
char *p = s;
cout << s[0] << " " << p[0];

}