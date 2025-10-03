#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N = 0;
    cin >> N;
    int x = 0, max_x = 0;
    vector<int> v(N);
    for (int i = 0; i < N; i++){
        cin >> x;
        max_x = max(x, max_x);
        v[i] = x;
    }
    for (int i = 0; i < N; i++){
        if (v[i] == max_x){
            v[i] = -1;
        }
    }
    int res = -1;
    for (int i = 0; i < N; i++){
        res = max(res, v[i]);
    }
    cout << res << endl;
    return 0;
}