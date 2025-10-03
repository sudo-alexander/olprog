#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct person {
    string name;
    int height;
};

bool f(person a, person b){
    if (a.height == b.height){
        return a.name < b.name;
    }
    return a.height > b.height;
}

int main(){
    int n = 0;
    cin >> n;
    vector<person> p(n);
    for (int i = 0; i < n; i++){
        cin >> p[i].name >> p[i].height;
    }
    sort(p.begin(), p.end(), f);
    for (int i = 0; i < n; i++){
        cout << p[i].name << " ";
    }
    return 0;
}