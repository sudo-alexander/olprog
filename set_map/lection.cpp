/*
темв: set, map
добавить элемент - o(1)
удалить - o(n) в худшем случае
найти элемент - o(n)
обратиться по индексу [] - o(1)

set - множество
*/

#include <iostream>
#include <set>

#define TASK_1
#define TASK_2

using namespace std;

#ifdef TASK_1

set<bool (*)(int, int)> s;

int main(){
    set<int> s;
    int x = 0;
    cin >> x;
    s.find(x); // находит х, если не находит, то возвращает последний элемент
    s.insert(x); // добавляет х, сохраняя порядок сортировки
    s.erase(x); // удаляет х
    s.count(x); // принимает 0 или 1
    s.lower_bound(x); // 
    s.upper_bound(x); // 

    multiset<int> s;
    return 0;
}

#endif

//#ifdef TASK_2

//#endif