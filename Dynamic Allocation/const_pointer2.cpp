#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=10;
    int j=20;

    // variable hamesha hume peech se padna chhaiye. like p is a * pointer which is pointing to const int variable.
    // translation of pointer (int const * p)--> p is a pointer to a constant int variable so here p is pointer and &i is in tvariable so we can reassign it and also use addition on pointer here so compiler will not give error.
    int const * p=&i; // p is a pointer to a constant variable,, yahan hamara pointer jo humne banaya hai p vo constant nhi hai balki vo jise point kar raha in our case i, vo use constant manega so hum use chnage nhi kar sakte lekin p ko to reassign kar sakte hai kyunki vo constant nhi hai. 
    *p++;
     p=&j;

    // now if we want to make the pointer constant we can do this.
    // (int * const p2)-->yahan p2 is const pointer int  
    int * const p2=&i; // p2 is a const pointer pointing to a int variable so int variable can be changes so we add/subtrat to pointer but not reassign the p2 pointer as it is a constant

    //p2=&j; so constant pointer we cant reassign to something else.


    int const * const p3=&i; // now here p3 is a const pointer pointing to const variable so here we cant reassign and do additions on the pointers as its a const int.
}