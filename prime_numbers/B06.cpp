#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void f(vector<int>& v){
    v[0] = v[1] = 0;
    for (int i = 2; i < v.size(); i++){
        for (int j = i * i; j < v.size(); j += i){
            v[j] = 0;
        }
    }
}

int main(){
    int n = 0, m = 0, max_n = 0;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int> (m, 0));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> v[i][j];
            max_n = max(max_n, v[i][j]);
        }
    }
    vector<int> v1(max_n + 1000, 1);
    f(v1);
    vector<int> prime;
    for (int i = 0; i < v1.size(); i++){
        if (v1[i]) prime.push_back(i);
    }
    int min_su1 = __INT_MAX__;
    for (int i = 0; i < n; i++){
        int su = 0;
        for (int j = 0; j < m; j++){
            su += *lower_bound(prime.begin(), prime.end(), v[i][j]) - v[i][j];
        }
        if (su < min_su1){
            min_su1 = su;
        }
    }
    int min_su2 = __INT_MAX__;
    for (int j = 0; j < m; j++){
        int su = 0;
        for (int i = 0; i < n; i++){
            su += *lower_bound(prime.begin(), prime.end(), v[i][j]) - v[i][j];
        }
        if (su < min_su2){
            min_su2 = su;
        }
    }
    cout << min(min_su1, min_su2) << endl;
    return 0;
}