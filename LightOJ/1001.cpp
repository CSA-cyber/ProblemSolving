#include <bits/stdc++.h>
using namespace std;

int t, n;
unordered_map<int, int> check;

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        if (check.find(n) == check.end())
            check[n] = 0;
             
        cout << check[n] << " " << n - check[n]++ << "\n";
    }
    check.clear();
}