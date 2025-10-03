#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N = 0, x = 0;
    cin >> N;
    vector<int> v;
    for (int i = 0; i < N; i++){
        cin >> x;
        v.push_back(x);
    }
    for (int i; i < N - 2; i++){
        if ((v[i] < v[i + 1] && v[i + 1] > v[i + 2]) || (v[i] > v[i + 1] && v[i + 1] < v[i + 2])){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}