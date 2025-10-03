#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool f(int a, int b){
    return a > b;
}

int main(){
    int n = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end(), f);
    int res = 0, sum_total = 0;
    for (int i = 0; i < v.size(); i++){
        sum_total += v[i];
    }
    int su = 0;
    for (int i = 0; i < n; i++){
        su += v[i];
        res += 1;
        if (su > sum_total / 2){
            cout << res << endl;
            return 0;
        }
    }
}