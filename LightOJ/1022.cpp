#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265358979323846

int t; double r;

int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> r;
        printf("Case %d: %.2lf\n", i, round((100 * (4 - PI) * (r * r) + 1e-9)) / 100.0);
    }
}