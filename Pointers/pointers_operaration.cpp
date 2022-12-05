#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=10;
    int* p=&i;

    cout<<p<<endl;

    p=p+1; // so basically this will work as like compiler will think that the p want to go one place aage in memory so in memory we move by 4 bytes so it will add 4 to the adress of i that is stored in the p pointer.
    cout<<p<<endl;
    p=p+2; // so it will add 8 as it wants to move 2 places in memory address.
}