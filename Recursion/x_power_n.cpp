#include <bits/stdc++.h>
using namespace std;

int xPowern(int x, int n)
{
    if (n == 0)
        return 1;
    // if(n==1) return n;

    return x * xPowern(x, n - 1);
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << xPowern(x, n)<<endl;
    // recursion continued
    

}