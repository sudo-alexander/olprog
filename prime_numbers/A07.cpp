#include <iostream>
#include <vector>

using namespace std;

string is_prime(long long n){
    if (n == 1) return "no";
    if (n == 2) return "yes";
    for (long long i = 2; i * i <= n; i++){
        if (n % i == 0) return "no";
    }
    return "yes";
}

int main(){
    int n = 0;
    long long x = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        cout << is_prime(x) << endl;
    }
    return 0;
}