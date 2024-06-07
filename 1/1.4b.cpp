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
        std::cout << "������� ������������ ������!";
        return -1;
    }
    if ((ferzX - peshkaX == 1 || peshkaX - ferzX == 1) && peshkaY - ferzY == 1) {
        std::cout << "���������� ������ �� ������� �����\n";
    }
    else if (ferzY == peshkaY && abs(ferzX - peshkaX == 1))
        std::cout << "���������� ������ �� ������� �����\n";
    else
        std::cout << "������ �����������\n";
    // �������� �� ���
    int move_peshkaX = peshkaX, move_peshkaY = peshkaY - 1;
    std::cout << "��� �����: " << move_peshkaX << " " << move_peshkaY << std::endl;
    if ((ferzX == move_peshkaX + 1 && ferzY == move_peshkaY - 2) || (ferzX == move_peshkaX + 1 && ferzY == move_peshkaY + 2)) {
        std::cout << "���������� ��� �����, ����� �������� ��� ����� �������� �����\n";
    }
    else {
        std::cout << "�� ���������� ���� �����, ����� �������� ��� ����� �������� �����\n";
    }
    if (ferzY == move_peshkaY && abs(ferzX - move_peshkaX == 1)) {
        std::cout << "���������� ��� �����, ����� �������� �� ����� �������� �����";
    }
    return 0;
}