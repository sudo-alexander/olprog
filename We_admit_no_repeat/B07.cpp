#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    vector<int> v(n);
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    partial_sum(v.begin(), v.end(), p.begin());
    cout << lower_bound(p.begin(), p.end(), (p.back() + 1) / 2) - p.begin() + 1 << endl;
    return 0;
}