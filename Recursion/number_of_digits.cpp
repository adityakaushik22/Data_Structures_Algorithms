#include<bits/stdc++.h>
using namespace std;


int countNums(int n){
    // int count=0;
    if(n==0) return 0;

    return 1+countNums(n/10);
}


int main(){
    cout<<countNums(1564)<<endl;
}