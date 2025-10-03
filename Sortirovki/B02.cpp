#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct cont {
    int box;
    int sp;
};

bool f(cont a, cont b){
    return a.sp > b.sp;
}
int main(){
    int n = 0, m = 0;
    cin >> n >> m;
    vector<cont> c(m);
    for (int i = 0; i < m; i++){
        cin >> c[i].box >> c[i].sp;
    }
    sort(c.begin(), c.end(), f);
    int temp = 0, res = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < c[i].box; j++){
            res += c[i].sp;
            temp += 1;
            if (temp == n){
                cout << res;
                return 0;
            }
        }
    }
    cout << res << endl;
    return 0;
}