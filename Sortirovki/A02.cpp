#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N = 0, x = 0;
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++){
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N - 1; j++){
            if (v[j] > v[j + 1]){
                swap(v[j], v[j + 1]);
            }
        }
    }
    for (int i = 0; i < N; i++){
        cout << v[i] << " ";
    }
    return 0;
}