#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main(){
    int n = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<int> c(n);
    for (int i = 0; i < n; i++){
        int k = count(v.begin(), v.end(), v[i]) / v.size();
        c[i] = k;
    }
    auto res = c[max_element(c.begin(), c.end())];
    cout << res;
    return 0;
}