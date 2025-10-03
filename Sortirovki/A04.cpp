#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool string_sort(string s1, string s2){
    if (s1.size() != s2.size()){
        return s1.size() < s2.size();
    }
    return s1 < s2;
}

int main(){
    string s = "";
    int N = 0;
    cin >> N;
    vector<string> v(N);
    for (int i = 0; i < N; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end(), string_sort);
    for (int i = 0; i < N; i++){
        cout << v[i] << " ";
    }
    return 0;
}