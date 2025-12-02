#include <iostream>
#include <set>

using namespace std;

int main() {
    int n = 0, res = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        set<int> s;
        int i_copy = i;
        for (int j = 2; j * j < i; j++) {
            while (i_copy % j == 0) {
                s.insert(j);
                i_copy /= j;
            }
        }
        if (i_copy > 1) {
            s.insert(i_copy);
        }
        if (s.size() == 2) {
            res++;
        }
    }
    cout << res << endl;
    return 0;
}