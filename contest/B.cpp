#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
int max_h(vector<int> v, int x){
    int res = v[0];
    for (int i = 0; i < v.size(); i++){
        if (v[i] != x) res = max(res, v[i]);
    }
    return res;
}
*/
int sum_w(vector<int> v){
    int res = 0;
    for (int i = 0; i < v.size(); i++){
        res += v[i];
    }
    return res;
}


int main(){
    int n = 0;
    cin >> n;
    vector<int> h(n);
    vector<int> w(n);
    vector<int> h_sort;
    for (int i = 0; i < n; i++){
        cin >> w[i] >> h[i];
    }
    h_sort = h;
    sort(h_sort.begin(), h_sort.end());
    //int max_height = max_h(h);
    int sum_wide = sum_w(w);
    for (int i = 0; i < n; i++){
        if (h[i] != h_sort[h_sort.size() - 1]) 
            cout << (sum_wide - w[i]) * h_sort[h_sort.size() - 1] << " "; 
        else{
            /*
            for(int j = h_sort.size() - 1; j > -1; j--){
                if (h_sort[j] <= h_sort[j]){
                    cout << (sum_wide - w[i]) * h_sort[j] << " "; 
                    break;
                }
            }
            */
           cout << (sum_wide - w[i]) * h_sort[h_sort.size() - 2] << " ";
        }
    }
    return 0;
}