#include <bits/stdc++.h>
using namespace std;

double a, b, c, r, t;

int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> c >> b >> a >> r;
        printf("Case %d: %lf\n", i, c * sqrt(r / (1 + r)));
    }
}