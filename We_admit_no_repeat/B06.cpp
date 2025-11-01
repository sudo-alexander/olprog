#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n = 0;
    cin >> n;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    if (v.back() != v.front())
    cout << v.back() - v.front() << " " << count(v.begin(), v.end(), v.front()) * count(v.begin(), v.end(), v.back()) << endl;
    else
    cout << 0 << " " << (n * n - n) / 2 << endl;
    return 0;
}