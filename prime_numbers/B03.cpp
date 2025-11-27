/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void f(vector<long long>& v){
    v[1] = v[0] = 0;
    for (long long i = 2; i < v.size(); i++){
        for (long long j = i * (i + 1); j < v.size(); j += i){
            v[j] = 0;
        }
    }
}

bool is_prime(long long n){
    if (n == 1) return false;
    if (n == 2) return true;
    for (long long i = 2; i * i <= n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    long long n = 0;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<long long> t_prime(int(sqrt(*max_element(v.begin(), v.end()))) + 1, 0);
    for (int i = 0; i < v.size(); i++){
        v[i] = i;
    }
    f(t_prime);
    for (int i = 0; i < v.size(); i++){
        if (binary_search(t_prime.begin(), t_prime.end(), v[i])){
            printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void f(vector<long long>& v){
    v[1] = v[0] = 0;
    for (long long i = 2; i < v.size(); i++){
        for (long long j = (long long)i * i; j < v.size(); j += i){
            v[j] = 0;
        }
    }
}

int main(){
    long long n = 0;
    cin >> n;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<long long> v1(1e6 + 1, 1);
    f(v1);
    vector<long long> prime;
    for (long long i = 0; i < v1.size(); i++){
        if (v1[i]) prime.push_back((long long)i * i);
    }
    for (long long i = 0; i < v.size(); i++){
        if (binary_search(prime.begin(), prime.end(), v[i])){
            printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}