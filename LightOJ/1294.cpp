#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll t, n, m;

int main() {
    ios_base::sync_with_stdio(false);
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n >> m; 
        printf("Case %d: %ld\n", i, n * m / 2);
    }
}