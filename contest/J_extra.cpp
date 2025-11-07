#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    vector<int> prfx(n);
    for (int i = 0; i < n; i++) cin >> prfx[i];
    for (int i = 1; i < prfx.size(); i++) prfx[i] += prfx[i - 1];
    int res = 0;
    for (int i = 0; i < n - 1; i++) if (prfx[prfx.size() - 1] - prfx[i] == prfx[i]) res++;
    cout << res << endl;
    return 0;
}