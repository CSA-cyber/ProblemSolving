#include <bits/stdc++.h>
using namespace std;

double a, b, c, r, t, area_abc, area_ade, A, B, C;

double area(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double angle(double a, double b, double c) {
    return acos((a * a + b * b - c * c) / (2 * a * b));
}

int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        area_abc = area_ade = 0;
        cin >> c >> b >> a >> r;
        area_abc = area(a, b, c);
        area_ade = area_abc / (1 + (1 / r));

        A = angle(b, c, a);
        B = angle(a, c, b);
        C = angle(a, b, c);

        double res = (2 * area_ade * sin(C)) / (sin(A) * sin(B));

        printf("Case %d: %lf\n", i, sqrt(res));
    }
}