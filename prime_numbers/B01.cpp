#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void f(vector<int>& v){
    v[1] = 0;
    for (int i = 2; i < v.size(); i++){
        for (int j = i * i; j < v.size(); j += i){
            v[j] = 0;
        }
    }
}

int main(){
    int n = 0, k = 0;
    cin >> n >> k;
    vector<int> v(n + 1, 1);
    f(v);
    vector<int> prime;
    for (int i = 2; i < v.size(); i++){
        if (v[i]) prime.push_back(i);
    }
    int cnt = 0;
    for (int i = 1; i < prime.size(); i++){
        if (prime[i - 1] + prime[i] + 1 > n){
            break;
        }
        if (binary_search(prime.begin(), prime.end(), prime[i - 1] + prime[i] + 1)){
            cnt++;
        }
    }
    if (cnt >= k) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}