#include <bits/stdc++.h>
using namespace std;
#define ul unsigned long long int

ul t, w, m;

int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> w;
        m = 1;
        while (w % 2 == 0) {
            w /= 2;
            m *= 2;
        }
        
        if (m % 2)
            printf("Case %d: %s\n", i, "Impossible");
        else
            cout << "Case " << i << ": " << w << " " << m << "\n";
    }
}