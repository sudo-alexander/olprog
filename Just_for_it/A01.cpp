#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N = 0, x = 0;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; i++){
        cin >> x;
        v[i] = x;
    }
    for (int i = N - 1; i >= 0; i--){
        cout << v[i] << " ";
    }
    return 0;
}