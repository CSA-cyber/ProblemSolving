#include <bits/stdc++.h>
using namespace std;

template <typename T>
vector<T> primeNumbers(T n) {
    vector<T> primeNumbers;
    bool is_prime[n + 1];
    fill(is_prime, is_prime + n + 1, true);

    for (T i = 3; i <= n; i++) 
        if (is_prime[i]) 
            for (T j = i * i; j <= n; j += 2 * i) 
                is_prime[j] = false;

    primeNumbers.push_back(2);
    for (T i = 3; i <= n; i += 2)
        if (is_prime[i])
            primeNumbers.push_back(i);

     return primeNumbers;
}

template <typename T>
T divisor_count(vector<pair<T, T>> factorized, T n) {
    T res = 1;
    for (pair<T, T> i : factorized)
        res *= (i.second + 1);

    return res;
}

template <typename T>
vector<pair<T, T>> prime_factorize(vector<T> primes, T n) {
    vector<pair<T, T>> factorized;
    for (long long i = 0; i < primes.size() && primes[i] <= (T) sqrt(n); i++) {
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

template <typename T>
T sigma(vector<pair<T, T>> factorized) {
    T res = 1;
    for (pair<T, T> p : factorized)
        res *= (((T) pow(p.first, p.second + 1) - 1)/(p.first - 1));

    return res;
}


template <typename T>
T mod_pow(T n, T e, const T M) {
    T x = (T) 1;
    n %= M;
    while (e > 0) {
        if (e % 2) 
            x = (x * n) % M;
        n = ((n % M) * (n % M)) % M;
        e /= 2;
    }
    
    return x;
}
int main() {
    int n, e, m;
    cin >> n >> e >> m;
    vector<int> primes = primeNumbers((int) sqrt(n));
    cout << mod_pow(n, e, m);
    
    cout << "\n";
}