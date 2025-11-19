#include <iostream>
#include <set>

using namespace std;

int sum_mset(multiset<int> s){
    int su = 0;
    for (int it : s){
        su += it;
    }
    return su;
}

int main(){
    int n = 0, x = 0;
    cin >> n;
    multiset<int> s1;
    multiset<int> s2;
    multiset<int> s3;
    for (int i = 0; i < n; i++){
        cin >> x;
        s1.insert(x);
    }
    for (int i = 0; i < n - 1; i++){
        cin >> x;
        s2.insert(x);
    }
    for (int i = 0; i < n - 2; i++){
        cin >> x;
        s3.insert(x);
    }
    cout << sum_mset(s1) - sum_mset(s2) << endl;
    cout << sum_mset(s2) - sum_mset(s3) << endl;
    return 0;
}