#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n = 0, m = 0, x = 0;
    cin >> n >> m;
    vector<long long> v(n);
    vector<long long> s(n);
    for (int i = 0; i < n; i++){
        scanf("%lld", &x);
        v[i] = x;
    }
    s[0] = v[0];
    for (int i = 1; i < n; i++){
        s[i] = s[i - 1] + v[i];
    }
    int l = 0, r = 0;
    for (int i = 0; i < m; i++){
        scanf("%lld%lld", &l, &r);
        if (l == 1) printf("%lld\n", s[r - 1]);
        else printf("%lld\n", s[r - 1] - s[l - 2]);
    }
    return 0;
}