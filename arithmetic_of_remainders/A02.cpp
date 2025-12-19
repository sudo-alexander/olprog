#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        a = a % b;
        swap(a, b);
    }
    return a;
}

int main() {
    long long n1 = 0, n2 = 0;
    cin >> n1 >> n2;
    cout << gcd(n1, n2) << endl;
    return 0;
}