//задача 4
//Для числового массива размером N, в который пользователь вводит элементы
//найти массив, в котором на каждом индексе будет присутствовать элемент, 
//являющийся перемножением чисел на данном индексе и на том же с конца. 
//К примеру, для массива {1, 2, 3, 4, 5} будет результат {1 * 5, 2 * 4, 3 * 3, 4 * 2, 5 * 1} = {5, 8, 9, 8, 5}.
#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cout << "введите 4 числа массива: "; cin >> a; cin >> b; cin >> c; cin >> d;
    int n[4] = {a, b, c, d};
    int n1, n2, n3, n4;
    for (int i = 0; i < 4; i++){
        n1 = n[0] * n[3];
        n2 = n[1] * n[2];
        n3 = n[2] * n[1];
        n4 = n[3] * n[0];
    }
    int nn[4] = {n1, n2, n3, n4};
    for (int i = 0; i < 4; i++){
        cout << nn[i] << '\n';
    }
    return 0;
}