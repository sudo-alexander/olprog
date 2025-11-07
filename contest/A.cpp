#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int l = 0, r = v.size() - 1, Sergei = 0, Dima = 0;
    while (r != l - 1){
        if (v[l] > v[r]){
            Sergei += v[l];
            l++;
        }
        else{
            Sergei += v[r];
            r--;
        }
        if (r == l - 1) break;
        if (v[l] > v[r]){
            Dima += v[l];
            l++;
        }
        else{
            Dima += v[r];
            r--;
        }
    }
    cout << Sergei << " " << Dima << endl;
    return 0;
}