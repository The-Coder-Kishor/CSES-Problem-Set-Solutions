#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long n, x, sum;
    cin>>n;
    sum = (n*(n+1))/2;
    for (long i = 1; i < n; i++)
    {
        cin>>x;
        sum = sum - x;
    }
    cout<<sum;
}
