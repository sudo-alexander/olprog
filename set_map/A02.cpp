#include <iostream>
#include <set>

using namespace std;

int main(){
    int n = 0, x = 0;
    cin >> n;
    set<int> s1;
    set<int> s2;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x % 2 == 0) s1.insert(x);
        else s2.insert(x);
    }
    for (int it : s1) cout << it << " ";
    for (int it : s2) cout << it << " ";
    return 0;
}