#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool f(int a, int b){
    return a > b;
}

int main(){
    int n = 0, m = 0;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end(), f);
    v.push_back(0);
    int su = 0;
    for (int i = 0; i < v.size(); i++){
        su += v[i];
        if (su >= m){
            cout << i + 1 * (m != 0) << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}