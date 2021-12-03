#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int num, counter = 0, x;
    cin >> num;
    long long  arr[num];
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
    long long moves = 0LL;
    for (int i = 1; i <= num; i++) {
        if(arr[i] < arr[i-1]) {
            moves += (arr[i-1]-arr[i]);
            arr[i] = arr[i-1];
        }
    }
    cout << moves << "\n";
    return 0;
}
