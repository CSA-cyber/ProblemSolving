#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define mp make_pair
#define pb push_back
#define M 1000000007

int t, n, m;

int mod_pow(int n, int e, int m) {
    int x = 1;
    n %= M;
    while (e > 0) {
        if (e % 2) 
            x = (x * n) % M;
        n = ((n % M) * (n % M)) % M;
        e /= 2;
    }
    
    return x;
}

vector<pii> prime_factorize(int n) {
    vector<pii> factorized;
    if (n % 2 == 0) {
        factorized.pb(mp(2, 0));
        while (n % 2 == 0) {
            n /= 2;
            factorized.back().second++;
        }
    }
    
    for (int i = 3; i<= (int) sqrt(n); i += 2) {
        if (n % i == 0)
            factorized.pb(mp(i, 0));

        while (n % i == 0) {
            n /= i;
            factorized.back().second++;
        }
    }

    if (n > 1)
        factorized.pb(mp(n, 1));

    return factorized;
}

int divisor_sum(vector<pii> factorized) {
    int res = 1;
    for (pii p : factorized) {
        int sum = 0;
        for (int i = 0; i <= p.second; i++) {
            sum += (mod_pow(p.first, i, M));
            sum %= M;
        }
        res *= sum;
        res %= M;
    }

    return res % M;
}

int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n >> m;
        vector<pii> factorized = prime_factorize(n);
        for (int i = 0; i < factorized.size(); i++)
            factorized[i].second*= m;
        
        printf("Case %d: %d\n", i, divisor_sum(factorized));
        factorized.clear();
    }
}