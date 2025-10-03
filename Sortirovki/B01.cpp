#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n = 0, m = 0;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int su = 0;
    for (int i = 0; i < m; i++){
        if (v[i] < 0){
            su += v[i];
        }
    }
    cout << su * (-1) << endl;
    return 0;
}