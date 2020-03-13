#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265358979323846

double t, R, n , r;

int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> R >> n;
        r = R / (1 + 1 / sin(PI/n));
        printf("Case %d: %.10lf\n", i , r);
    }
}