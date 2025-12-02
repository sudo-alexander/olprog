#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n = 0;
    cin >> n;
    vector<long long> v;
    cout << n;
    for (long long i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            v.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        v.push_back(n);
    }
    if (!v.empty()) {
        cout << "=" << v[0];
        for (long long i = 1; i < v.size(); i++) {
            cout << "*" << v[i];
        }
    } else {
        cout << "=" << n;
    }
    return 0;
}