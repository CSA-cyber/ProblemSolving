#include <bits/stdc++.h>
using namespace std;

int t, x, y, x2, y2, nc, cx, cy;

int main() {
    ios_base::sync_with_stdio(false);
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> x >> y >> x2 >> y2 >> nc;
        printf("Case %d:\n", i);
        while(nc--) {
            cin >> cx >> cy;
            if ((cx > x) && (cy > y) && (cx < x2) && (cy < y2))
                puts("Yes");
            else 
                puts("No");
        }
    }
}