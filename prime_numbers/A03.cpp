#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void f(vector<int>& v){
    v[1] = 0;
    for (long long i = 2; i < v.size(); ++i){
        for (long long j = i * 2; j < v.size(); j += i){
            v[j] = 0;
        }
    }
    return;
}

int main(){
    long long n = 0;
    cin >> n;
    vector<int> v(n + 1, 1);
    f(v);
    for (long long i = 1; i < v.size(); i++){
        printf("%d ", v[i]);
    }
    return 0;
}