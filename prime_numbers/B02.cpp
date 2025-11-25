#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void f(vector<int>& v){
    v[0] = 1;
    for (int i = 2; i < v.size(); i++){
        for (int j = i * i; j < v.size(); j += i){
            v[j] = 0;
        }
    }
}
int main(){
    int n = 0;
    cin >> n;
    vector<int> v(n + 1, 1);
    f(v);
    vector<int> c;
    for (int i = 4; i < v.size(); i++){
        if (!v[i]) c.push_back(i);
    }
    for (int i = 0; i < c.size(); i++){
        if (binary_search(c.begin(), c.end(), n - c[i])){
            cout << c[i] << " " << n - c[i] << endl;
            break;
        }
    }
    return 0;
}