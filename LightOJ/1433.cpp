#include <bits/stdc++.h>
using namespace std;

double t, ox, oy, ax, ay, bx, by, r, o, theta, res;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> ox >> oy >> ax >> ay >> bx >> by;

        r = sqrt((ox - ax) * (ox - ax) + (oy - ay) * (oy - ay));
        o = sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by));
        theta = acos(1 - (o * o) / (2 * r * r));

        res = r * theta;
        printf("Case %d: %.8lf\n", i, res);
    }
}