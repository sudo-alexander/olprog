#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n = 0, k25 = 0, k50 = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    for (int i = 0; i < v.size(); i++){
        k25 += v[i] == 25;
        k50 += v[i] == 50;
        if (v[i] == 50){
            if (k25 > 0){
                k25--;
            }
            else{
                cout << "NO" << endl;
                return 0;
            }
        }
        else if (v[i] == 100){
            if (k50 > 0 && k25 > 0){
                k50--;
                k25--;
            }
            else if (k25 > 2){
                k25 -= 3;
            }
            else{
                cout << "NO" << endl;
                return 0;
            }
        }
        
    }
    cout << "YES" << endl;
    return 0;
}