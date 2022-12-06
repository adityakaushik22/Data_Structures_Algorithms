#include<bits/stdc++.h>
using namespace std;

int main(){
    const int i=10;
    // i=12; will give error as we cannot reassign the const varaiale 

    int j=12;
    const int&k=j;
    //k++; // here the storage doesnt become constant but the path even the j and k were connected as a reference but the path from k cannot be done as its const but we can do with the j.
    j++;


    int const j3=10;
    // int& k=j3; // cant be made,, jab j3 const hai yaani uske paas bhi cchange hone ka access nhi hai to hum &k ke bhi change nhi kar payega usko bhale hi vo reference ho uska
} 