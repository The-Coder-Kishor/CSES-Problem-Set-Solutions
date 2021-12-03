#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int n = s.length(), final = 0, current = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            final = max(final, current);
            current = 0;
        }
        current++;
    }
    final = max(final, current);
    cout << final << endl;
    return 0;
}
