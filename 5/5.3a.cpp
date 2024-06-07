#include <iomanip>     // setw
#include <iostream>
#include <clocale>
#include <algorithm>
using namespace std;

const int N = 10;
const int M = 10;

void withConst(int array[], int size);
void withRand(int array[], int size);
void byUser(int array[], int size);


int main()
{
    srand(time(NULL));
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
        withConst(a, N);
        withConst(b, M);
        break;
    case WithRand:
        // Инициализация массива случайными числами
        withRand(a, N);
        withRand(b, M);
        break;
    case ByUser: // ввод элементов массива с клавиатуры
        byUser(a, N);
        byUser(b, M);
        break;
    default:
        cout << "Invalid choice!" << endl;
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

void withConst(int arr[], int size) {
    for (int i = 0; i < N; i++) {
        arr[i] = i;
    }
    for (int i = 0; i < N; i++) {
        cout << setw(3) << arr[i];
    }
    cout << endl;
}

void withRand(int arr[], int size) {
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100;
    }
    for (int i = 0; i < N; i++) {
        cout << setw(3) << arr[i];
    }
    cout << endl;
}

void byUser(int arr[], int size) {
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
}