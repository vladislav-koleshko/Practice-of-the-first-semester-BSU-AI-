#include <iomanip> 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum Menu {
    WithConst = 1,
    WithRand,
    ByUser,
};

const int MAX_SIZE = 100;

void withConst(int arr[][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            arr[i][j] = i;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << setw(3) << arr[i][j];
        cout << endl;
    }
    cout << endl;
}

void withRand(int arr[][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 100;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << setw(3) << arr[i][j];
        cout << endl;
    }
    cout << endl;
}

void byUser(int arr[][MAX_SIZE], int n) {
    cout << "Enter your matrix " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
}

int calcColumn(int arr[][MAX_SIZE], int n, int N) {
    int minProduct = INT_MAX;

    for (int j = 0; j < n; j++) {
        int product = 1;
        bool containsElementsWithinN = true;

        for (int i = 0; i < n; i++) {
            if (abs(arr[i][j]) > N) {
                containsElementsWithinN = false;
                break;
            }
            product *= arr[i][j];
        }

        if (containsElementsWithinN && product < minProduct) {
            minProduct = product;
        }
    }

    return minProduct;
}

int calcSumOfMaxRow(int arr[][MAX_SIZE], int n) {
    int maxElement = arr[0][0];
    int maxRow = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
                maxRow = i;
            }
        }
    }

    for (int j = 0; j < n; j++) {
        sum += arr[maxRow][j];
    }

    return sum;
}

int main() {
    srand(time(NULL));
    int arr[MAX_SIZE][MAX_SIZE];
    int n, N;

    cout << "Enter the size of the matrix: ";
    cin >> n;

    cout << "Choose the way to initialize the matrix:" << endl;
    cout << WithConst << ".constants\n" << endl;
    cout << WithRand << ".random numbers\n" << endl;
    cout << ByUser << ".manual input\n" << endl;


    int ch;
    cin >> ch;

    switch (ch) {
    case WithConst:
        withConst(arr, n);
        break;
    case WithRand:
        withRand(arr, n);
        break;
    case ByUser:
        byUser(arr, n);
        break;
    default:
        cout << "Invalid choice!" << endl;
        break;
    }

    cout << "Enter the value of N: ";
    cin >> N;

    int minColumn = calcColumn(arr, n, N);
    cout << "the minimum product of a column: " << minColumn << endl;

    int sumOfMaxRowElements = calcSumOfMaxRow(arr, n);
    cout << "the sum of maximum elements in row is: " << sumOfMaxRowElements << endl;

    return 0;
}