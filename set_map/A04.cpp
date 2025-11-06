#include <iostream>
#include <set>
using namespace std;

int main(){
    int n1 = 0, x = 0;
    cin >> n1;
    set<int> s1;
    for (int i = 0; i < n1; i++){
        cin >> x;
        s1.insert(x);
    }
    int n2 = 0;
    cin >> n2;
    set<int> s2;
    for (int i = 0; i < n2; i++){
        cin >> x;
        s2.insert(x);
    }
    set<int> res;
    for (int it : s1){
        if (s1.count(it) && s2.count(it)){
            res.insert(it);

        } 
    }
    cout << res.size() << endl;
    for (int it : res){
        cout << it << " ";
    }
    return 0;
}