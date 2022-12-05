#include<bits/stdc++.h>
using namespace std;

int sum(int* a,int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans+=a[i];
    }
    return ans;
}

int main(){
    int a[10];
    cout<<sum(a,10)<<endl;

    cout<<sum(a+3,7)<<endl; // by pointer array we can also pass part of an array herre a+3 is 3rd index and size will be 7 as total was 10.
}