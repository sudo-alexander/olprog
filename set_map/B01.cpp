#include <iostream>
#include <set>
using namespace std;

int main(){
    int n = 0, x = 0;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++){
        cin >> x;
        s.insert(x);
    }
    int cnt = 1;
    for (int it : s){
        if (it != cnt){
            cout << cnt << endl;
            return 0;
        }
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}