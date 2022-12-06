#include<bits/stdc++.h>
using namespace std;

int main(){
    int const i=10;

    // int *p=&i; // we cant store address of const variable to a pointer unless the pointer promises not to change the varibale so for that we can make the pointer const.

    // right way
    int const* p=&i;


    // another example of const

    int j=12;
    int const *p2=&i;
    cout<<*p2<<endl; //12
    j++;
    cout<<*p2<<endl; //13

    // *p2++ cant be done as we made the path to i as const so only we can read and not write the value from this pointer path.
}