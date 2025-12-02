#include <iostream>
#include <set>

using namespace std;

int main() {
    long long n = 0;
    set<long long> s;
    cin >> n;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0 && i * i != n) {
            s.insert(i);
            s.insert(n / i);
        } else if (n % i == 0 && i * i == n) {
            s.insert(i);
        }
    }
    for (auto it : s) {
        cout << it << " ";
    }
    return 0;
}