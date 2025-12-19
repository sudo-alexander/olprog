#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int x = v[v.size() - 1];
    vector<int> del;
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            del.push_back(i);
            if (i != x / i)
                del.push_back(x / i);
        }
    }
    for (int d = 0; d < del.size(); d++) {
        int value = del[d];
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == value) {
                v.erase(v.begin() + i);
                break;
            }
        }
    }
    int y = v[v.size() - 1];
    cout << x << " " << y << endl;
    return 0;
}
