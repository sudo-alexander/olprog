#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N = 0;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int res = 1;
    for (int i = 0; i < N - 1; i++){
        res += v[i] != v[i + 1];
    }
    cout << res;
    return 0;
}