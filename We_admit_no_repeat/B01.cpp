#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool f(vector<int> v1, vector<int> v2){
    return v1[0] > v2[0] || (v1[0] == v2[0] && v1[1] < v2[1]);
}

int main(){
    int n = 0, k = 0;
    cin >> n >> k;
    vector<vector<int>> v(n, {0, 0});
    for (int i = 0; i < n; i++){
        cin >> v[i][0] >> v[i][1];
    }
    sort(v.begin(), v.end(), f);
    cout << count(v.begin(), v.end(), v[k - 1]) << endl;
    return 0;
}