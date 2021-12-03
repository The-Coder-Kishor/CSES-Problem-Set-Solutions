#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long x;
    cin>>x;
    cout<<x<<" ";
    while(x>1) {
        if(x%2==0)
            x = x/2;
        else
            x = 3 * x + 1;
        cout<<x<<" ";
    }
}
