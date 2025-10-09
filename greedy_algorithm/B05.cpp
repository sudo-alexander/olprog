#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool f(vector<int> v, int num){
    int cnt = 0;
    for (int i = 0; i < v.size(); i++){
        if (v[i] == num){
            return true;
        }
    }
    return false;
}

int main(){
    int n = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++){
        if (!f(v, i + 1)){
            res += 1;
        }
    }
    cout << res << endl;
    return 0;
}