#include <iomanip>     // setw
#include <iostream>
#include <clocale>
#include <algorithm>
using namespace std;

int main()
{
    const int N = 10;
    const int M = 10;
    int a[N] = { 0 };
    int b[M] = { 0 };
    enum  enmArrayInit
    {
        WithConst = 1, WithRand, ByUser,
    };

    cout << " Enter the type of initialization:\n"
        << WithConst << ".constants\n"
        << WithRand << ".random numbers\n"
        << ByUser << ".manual input\n";
    cout << "Any other choice will terminate the programm\n Your choice: ";
    int ch = 0;    cin >> ch;
    switch (ch)
    {
    case WithConst:
        // заполнение массива значениями индексов
        for (int i = 0; i < N; i++) {
            a[i] = i;
        }
        for (int j = 0; j < M; j++)
            b[j] = j;
        for (int i = 0; i < N; i++) {
            cout << setw(3) << a[i];
        }
        cout << endl;
        for (int j = 0; j < M; j++) {
            cout << setw(3) << b[j];
        }
        cout << endl;
        break;
    case WithRand:
        // Инициализация массива случайными числами
        for (int i = 0; i < N; i++) {
            a[i] = rand() % 100;
        }
        for (int j = 0; j < M; j++) {
            b[j] = rand() % 100;
        }
        for (int i = 0; i < N; i++) {
            cout << setw(3) << a[i];
        }
        cout << endl;
        for (int j = 0; j < M; j++) {
            cout << setw(3) << b[j];
        }
        cout << endl;
        break;
    case ByUser: // ввод элементов массива с клавиатуры
        for (int i = 0; i < N; i++) {
            cin >> a[i];
        }
        for (int j = 0; j < M; j++)
            cin >> b[j];
        break;
    default:
        cout << "Programm is close" << endl;
        return 0;
    }
    // сортировка массивов
    for (int i = 0; i < N; i++) {
        sort(begin(a), end(a));
    }
    for (int j = 0; j < M; j++) {
        sort(begin(b), end(b));
    }
    // получение и сортировка массива c[k]
    const int MAX_K = 100;
    int c[MAX_K];
    int k = 0;
    for (int i = 0; i < N; i++) {
        int j = 0;
        while (j < M && b[j] < a[i]) {
            j++;
        }
        if (j == M || b[j] != a[i]) {
            c[k++] = a[i];
        }
    }
    // вывод массива c[k]
    std::cout << "Array c: " << std::endl;
    for (int i = 0; i < k; i++) {
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}