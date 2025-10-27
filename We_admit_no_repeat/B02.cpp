#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int c1 = count(v.begin(), v.end(), 1);
    int c2 = count(v.begin(), v.end(), 2);
    int c3 = count(v.begin(), v.end(), 3);
    cout << n - max(c1, max(c2, c3)) << endl;
    return 0;
}