#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    vector<int> v(n);
    vector<int> cnt(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++){
        cnt[i] = count(v.begin(), v.end(), v[i]);
    }
    if (count(cnt.begin(), cnt.end(), 2) == cnt.size()) cout << "YES";
    else cout << "NO";
    return 0;
}