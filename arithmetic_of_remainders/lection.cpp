#include <iostream>
#include <vector>
// #define B05
#define TASK_1
#define N 100
using namespace std;

#ifdef B05

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
    return b ? gcd(b, a % b) : a;
}

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

bool is_on[N];
vector<int> d(N, 0);
int last[N];

void on(int x) {
    if (is_on[x]) {
        cout << "is on";
    }
    for (int y : d) {
        if (x % y == 0 && last[y] != 0) {
            cout << "conflict with" << last[y];
            return;
        }
    }
    for (int y : d)
        if (x % y == 0) {
            last[y] = x;
            cout << "succes";
        }
}

int main() {
    int n = 1000;

    return 0;
}

#endif

#ifdef TASK_1

long long m = 1e9 + 7; // #define B05
#define TASK_1

long long st(long long x, long long p) {
    if (p == 0)
        return 1 % m; // делаем так, чтобы случайно не возвратить 0
    int ans = st(x, p / x);
    ans = (ans * ans) / m;
    if (p % 2 == 1) {
        ans = (ans * x) % m;
    }
    return ans;
}

long long st(long long x, long long p) {
    long long ans = 1 % m;
    while (p > 0) {
        if (p % 2) {
            ans = (ans * x) % m;
        }
        x = x * x % m;
        p /= 2;
    }
    return ans;
}

#endif
