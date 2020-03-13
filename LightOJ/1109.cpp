#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265358979323846
#define pii pair<int, int>
#define mp make_pair
#define pb push_back

int t, n;
vector<pair<int, int>> nums;
vector<int> primes;

vector<int> primeNumbers(int n) {
    vector<int> primeNumbers;
    bool is_prime[n + 1];
    fill(is_prime, is_prime + n + 1, true);

    for (int i = 3; i <= n; i++) 
        if (is_prime[i]) 
            for (int j = i * i; j <= n; j += 2 * i) 
                is_prime[j] = false;

    primeNumbers.push_back(2);
    for (int i = 3; i <= n; i += 2)
        if (is_prime[i])
            primeNumbers.push_back(i);

     return primeNumbers;
}

int divisor_count(vector<pair<int, int>> factorized) {
    int res = 1;
    for (pair<int, int> i : factorized)
        res *= (i.second + 1);

    return res;
}

vector<pair<int, int>> prime_factorize(vector<int> primes, int n) {
    vector<pair<int, int>> factorized;
    for (int i = 0; i < primes.size() && primes[i] <= (int) sqrt(n); i++) {
        if (n % primes[i] == 0)
            factorized.push_back(make_pair(primes[i], 0));

        while (n % primes[i] == 0) {
            n /= primes[i];
            factorized.back().second++;
        }
    }

    if (n > 1)
        factorized.push_back(make_pair(n, 1));

    return factorized;
}

bool comp (pii &a, pii &b) {
    if(a.second < b.second) return true;
    else if (a.second == b.second && a > b) return true;
    else return false;
}

int main() {
    primes = primeNumbers((int) sqrt(1000));
    
    nums.pb(mp(1, 1));
    for (int i = 2; i <= 1000; i++)
        nums.pb(mp(i, divisor_count(prime_factorize(primes, i))));

    sort(nums.begin(), nums.end(), comp);

    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        printf("Case %d: %d\n", i, nums[n - 1].first);
    }
}