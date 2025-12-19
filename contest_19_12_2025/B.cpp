#include <iostream>
#include <vector>

using namespace std;

long long cnt = 0;

void f(vector<long long> &v) {
    v[0] = v[1] = 0;
    for (long long i = 2; i < v.size(); i++) {
        for (long long j = i * i; j < v.size(); j += i) {
            v[j] = 0;
        }
    }
}

long long min_prime_d(long long n, vector<long long> &prime) {
    for (long long i = 0; i < prime.size(); i++) {
        if (n % prime[i] == 0) {
            n -= prime[i];
            cnt++;
            return n;
        }
    }
}

int main() {
    long long n = 0;
    cin >> n;
    vector<long long> v(n + 1, 1);
    f(v);
    vector<long long> prime;
    for (long long i = 0; i < v.size(); i++) {
        if (v[i])
            prime.push_back(i);
    }
    while (n) {
        for (int i = 0; i < n; i++) {
            while (n % prime[i] == 0 && n > 0) {
                n -= prime[i];
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}