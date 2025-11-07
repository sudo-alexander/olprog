#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n = 0, k = 0, res = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    for (int i = 0; i < v.size(); i++){
        if (v[i] >= v[k - 1] && v[i] > 0){
            res++;
        }
    }
    cout << res << endl;
    return 0;
}