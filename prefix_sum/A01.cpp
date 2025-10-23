#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long n = 0, x = 0;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++){
        cin >> x;
        if (i > 0) v[i] = v[i - 1] + x;
        else v[i] += x;
    }
    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    return 0;
    
}