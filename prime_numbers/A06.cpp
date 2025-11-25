#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void f(vector<long long>& v){
    v[1] = 0;
    for (int i = 2; i < v.size(); i++){
        for (int j = i * i; j < v.size(); j += i){
            v[j] = 0;
        }
    }
}

int main(){
    int n = 0;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<long long> v1(*max_element(v.begin(), v.end()) + 1, 1);
    f(v1);
    vector<long long> prime;
    for (int i = 0; i < v1.size(); i++){
        if (v1[i]) prime.push_back(i);
    }
    for (int i = 0; i < v.size(); i++){
        if (binary_search(prime.begin(), prime.end(), v[i])){
            printf("yes\n");
        }
        else printf("no\n");
    }
    return 0;
}