#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    int n = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int nod = v[0];
    for (int i = 1; i < n; i++) {
        nod = gcd(nod, v[i]);
    }
    for (int i = 0; i < n; i++) {
        if (v[i] == nod) {
            cout << nod << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}