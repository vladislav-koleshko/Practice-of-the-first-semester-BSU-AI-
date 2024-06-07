#include <iostream>
#include <stdlib.h>
using namespace std;

const int arrSize = 10;
int m[arrSize][arrSize];
int b[arrSize][arrSize];

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");

    int max_v = 0;
    for (int i1 = arrSize - 1; i1 >= 0; i1--) {
        for (int i2 = arrSize - 1; i2 >= 0; i2--) {
            m[i1][i2] = rand() % 100;
            if (m[i1][i2] > max_v)
                max_v = m[i1][i2];
            int i11 = i1 + 1;
            if (i1 != arrSize - 1 && b[i11][i2] > max_v)
                max_v = b[i1 + 1][i2];
            b[i1][i2] = max_v;
            // cout << m[i1][i2] << "   ";
        }
        max_v = m[arrSize - 1][arrSize - 1];
        //cout << endl;
    }
    cout << endl;
    if (arrSize <= 20) {
        for (int i1 = 0; i1 < arrSize; i1++) {
            for (int i2 = 0; i2 < arrSize; i2++) {
                cout << m[i1][i2] << "   ";
            }
            cout << endl;
        }
        cout << endl;
        for (int i1 = 0; i1 < arrSize; i1++) {
            for (int i2 = 0; i2 < arrSize; i2++) {
                cout << b[i1][i2] << "   ";
            }
            cout << endl;
        }
    }
    return 0;
}
