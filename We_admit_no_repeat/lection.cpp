#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

#define ex1
#define ex2

using namespace std;

/*void f(int *p){
    *p += 2;
}
int main(){
    int N = 0;
    cin >> N;
    int x;
    int a[N];
    x = 2;
    int * p;
    p = &x;
    cout << int(p);
    *p = 5;
    cout << x;
    cout << *p;

    int a[10];
    cout << a[12];
    return 0;
}
*/

#ifdef ex1

int main(){
    vector<int> a;
    int n = 0;
    cin >> n;
    // vector<int> b(a);
    vector<int> b(n, 5);
    vector<int> b = {2, 3, 4, 8};
    int m = b.size();
    for (int i = 0; i < n; i++){
        int t = 0;
        cin >> t;
        a.push_back(t);
    }
    a.pop_back(); // Удаляет элемент из конца вектора
    sort(a.begin(), a.end());
    a.clear(); // Удаляет все элементы из вектора (его размер равнг нулю)


    vector<int> d;
    d.resize(n);
    int k = b.back(); // возвращает последний элемент вектора == b[-1]
    int kk = b.front(); // b[0]
}

#endif


#ifdef ex2

int main(){
    int n = 0, x = 0, o = 0, c = 0, y = 0;
    vector<int> v;
    int a[100];
    cin >> n >> x >> o >> c >> y;
    find(a, a + n, x); // o(n)
    min_element(a, a + n); // o(n)
    max_element(a, a + n); // o(n)
    count(a, a + n, x); // o(n)
    accumulate(a, a + n, o);
    binary_search(a, a + n, x); // массив должен быть отсортирован
    lower_bound(a, a + n, x); // o(m(m)), возвращает первое вхождение элемента, не меньшего х
    upper_bound(a, a + n, x); // o(m(m)), возвращает первое вхождение элемента, большего х
    sort(a, a + n); // o(n * log(n))
    nth_element(a, a + c, a + n); // возвращаетс массив, где элементы справа больше заданного а, а слева меньше o(n)
    reverse(a, a + n); // o(n)
    replace(a, a + n, x, y); // o(n)
    unique(a, a + n); // o(n) возвращает итератор на новый конец массива, удаляя из него повторяющиеся элементы
    partial_sum(a, a + n, x);
    adjacent_difference(a, a + n, v);
    next_permutation(a, a + n); // пересталвяет элементы в векторе в лексикографическом порядке, возвращает тру и фолс
    prev_permutation(a, a + n); // пересталвяет элементы в векторе в обратном лексикографическом порядке, возвращает тру и фолс
    random_shuffle(a, a + n); // случайная перестановка
    return 0;
}

#endif