#include <iostream>
#include <vector>

using namespace std;

/*
void f(vector<long long> &v) {
    v[0] = v[1] = 0;
    for (long long i = 2; i < v.size(); i++) {
        for (long long j = i * i; j < v.size(); j += i) {
            v[j] = 0;
        }
    }
}
*/

int main() {
    int n = 0, cnt = 0;
    cin >> n;
    vector<int> v;
    while (n > 3) {
        n -= 2;
        cnt++;
        v.push_back(2);
    }
    if (n == 2) {
        cout << cnt + 1 << endl << 2 << " ";
    } else if (n == 3) {
        cout << cnt + 1 << endl << 3 << " ";
    } else {
        cout << "error";
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}