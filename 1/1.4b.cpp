#include <iostream>
#include <Windows.h>
#include <cmath>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int ferzX, ferzY, peshkaX, peshkaY;
    std::cin >> ferzX >> ferzY >> peshkaX >> peshkaY;
    if (ferzX <= 0 || ferzY <= 0 || peshkaX <= 0 || peshkaY <= 0 || ferzX > 8 || ferzY > 8 || peshkaX > 8 || peshkaY > 8) {
        std::cout << "Введены некорректные данные!";
        return -1;
    }
    if ((ferzX - peshkaX == 1 || peshkaX - ferzX == 1) && peshkaY - ferzY == 1) {
        std::cout << "Существует угроза со стороны пешки\n";
    }
    else if (ferzY == peshkaY && abs(ferzX - peshkaX == 1))
        std::cout << "Существует угроза со стороны ферзя\n";
    else
        std::cout << "Угроза отсутствует\n";
    // проверка на ход
    int move_peshkaX = peshkaX, move_peshkaY = peshkaY - 1;
    std::cout << "Ход пешки: " << move_peshkaX << " " << move_peshkaY << std::endl;
    if ((ferzX == move_peshkaX + 1 && ferzY == move_peshkaY - 2) || (ferzX == move_peshkaX + 1 && ferzY == move_peshkaY + 2)) {
        std::cout << "Существует ход пешки, после которого она будет угрожать ферзю\n";
    }
    else {
        std::cout << "Не существует хода пешки, после которого она будет угрожать ферзю\n";
    }
    if (ferzY == move_peshkaY && abs(ferzX - move_peshkaX == 1)) {
        std::cout << "Существует ход ферзя, после которого он будет угрожать пешке";
    }
    return 0;
}