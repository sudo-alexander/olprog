#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N = 0, x = 0;
    cin >> N;
    vector<int> chet;
    vector<int> nechet;
    for (int i = 0; i < N; i++){
        cin >> x;
        if (x % 2 == 0){
            chet.push_back(x);
        }
        else{
            nechet.push_back(x);
        }
    }
    sort(begin(chet), end(chet));
    sort(begin(nechet), end(nechet));
    for (int i = 0; i < chet.size(); i++){
        cout << chet[i] << " ";
    }
    for (int i = 0; i < nechet.size(); i++){
        cout << nechet[i] << " ";
    }
    return 0;
}