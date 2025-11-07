// слишком сложный алгоритм, решение не подходит
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 0, cnt = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            for (int k = 1; k <= v[i] + v[j] + 1; k *= 2){
                if ((v[i] + v[j]) == k){
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}