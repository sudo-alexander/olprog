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
    v.push_back(-1);
    int su = 0;
    for (int i = 0; i < v.size(); i++){
        su += v[i];
        if (su > m || v[i] == -1){
            cout << i << endl;
            return 0;
        }
    }
}