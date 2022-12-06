#include<bits/stdc++.h>
using namespace std;

int main(){
    int**p=new int*[10];
    for(int i=0;i<10;i++){
        p[i]=new int[20];

        // input
        for(int j=0;j<20;j++){
            cin>>p[i][j];
        }
    }

    // pehle andar ka array clear karna hai phir uske baad hum usko point karne wali memory wale pointer ko delete karenge
    for(int i=0;i<10;i++){
        delete [] p[i];
    }
    delete [] p;
}