#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N = 0;
    cin >> N;
    vector<int> v;
    int x = 0, max_x = 0, res = 0;
    for (int i = 0; i < N; i++){
        cin >> x;
        v.push_back(x);
        max_x = max(x, max_x);
    }
    for (int i = 0; i < N; i++){
        res += v[i] == max_x;
    }
    cout << max_x << " " << res;
    return 0;
}