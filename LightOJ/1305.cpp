#include <bits/stdc++.h>
using namespace std;

double t, ax, ay, bx, by, cx, cy, dx, dy, ac, bd, area;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> ax >> ay >> bx >> by >> cx >> cy;
        
        dx = ax + cx - bx;
        dy = ay + cy - by;

        ac = sqrt((ax - cx) * (ax - cx) + (ay - cy) * (ay - cy));
        //bd = sqrt((bx - dx) * (bx - dx) + (by - dy) * (by - dy));

        area = .5 * ac * bd;
        printf("Case %d: %lf %lf % lf\n", i, dx, dy, area);
    }
}