#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool sort_m2(vector<int> v1, vector<int> v2){
    return v1[1] < v2[1];
}

int main(){
    int N = 0;
    cin >> N;
    vector<vector<int>> v(N, {0, 0});
    for (int i = 0; i < N; i++){
        v[i][0] = i + 1;
        cin >> v[i][1];
    }
    sort(v.begin(), v.end(), sort_m2);
    for (int i = 0; i < N; i++){
        cout << v[i][0] << " ";
    }
    return 0;
}