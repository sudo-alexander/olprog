#include <iostream>
#include <vector>

using namespace std;

bool f(int num, vector<int>& v){
    if (v.empty()){
        return false;
    }
    int l = 0, r = v.size() - 1;
    while (l <= r){
        int c = (l + r) / 2;
        if (v[c] == num) return true;
        if (v[c] >= num) r = c  - 1;
        else l = c + 1;
    }
    return false;
}

int main(){
    int m = 0, n = 0;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int num = 0;
    for (int i = 0; i < m; i++){
        cin >> num;
        if (f(num, v)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}