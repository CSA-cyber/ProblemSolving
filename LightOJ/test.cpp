#include <bits/stdc++.h>
using namespace std;
#define RAD 180 / 3.14169265358979323846;

double a, b, c, r, t, area_abc, area_ade, A, B, C;

double area(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double angle(double a, double b, double c) {
    return acos((a * a + b * b - c * c) / (2 * a * b));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> c >> b >> a >> r;
        area_abc = area(a, b, c);
        cout << "Area =  "<< area_abc << "\n";
        area_ade = area_abc / (1 + 1 / r);

        A = angle(b, c, a);
        cout << "A = " << A << "\n";
        B = angle(a, c, b);
        cout << "B = " << B << "\n";
        C = angle(a, b, c);
        cout << "C = " << C << "\n";
        cout << "ADE "<<area_ade;
        
    }
}