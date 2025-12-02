#include <iostream>

using namespace std;

int main() {
    long long n = 0;
    int res = 0;
    cin >> n;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0 && i * i != n) {
            res += 2;
        } else if (n % i == 0 && i * i == n) {
            res++;
        }
    }
    cout << res << endl;
    return 0;
}