#include <iostream>
#include <vector>

using namespace std;

void f(vector<long long>& v){
    v[0] = 0;
    v[1] = 0;
    for (long long i = 2; i <= v.size(); i++){
        for (long long j = i * 2; j < v.size(); j += i){
            v[j] = 0;
        }
    }
}

int main(){
    long long l = 0, r = 0;
    cin >> l >> r;
    vector<long long> v(r + 1, 1);
    vector<long long> res;
    f(v);
    for (long long i = l; i < r + 1; i++){
        if (v[i]){
            res.push_back(i);
        }
    }
    cout << res.size() << endl;
    if (!res.empty()){
        for (int i = 0; i < res.size(); i++)
            printf("%d ", res[i]);
    }
    return 0;
}