﻿#include <iostream>
#include <cmath>

using namespace std;

double ActualNumber(string x) {
    int n;
    while (true)
    {
        cout << x;
        cin >> n;
        if (!cin || n<0)
        {
            cout << "Ошибка ввода!\n";
            cin.clear();
            while (cin.get() != '\n');
        }
        else {
            break;
        }
    }
    return n;
}

int main()
{

    setlocale(LC_ALL, "Russian");
    double V, U, S, T, t1, t2;

    while (true)
    {
        V = ActualNumber("Введите скорость лодки (км/ч): ");
        U = ActualNumber("Введите скорость реки (км/ч): ");
        S = ActualNumber("Введите расстояние (км): ");
        if (U > V)
        {
            cout << "Скорость реки должна быть меньше скорости лодки!\n";
            cin.clear();
            while (cin.get() != '\n');
        }
        else {
            break;
        }
    }
    t1 = S / (V + U);
    t2 = S / (V - U);
    T = t1 + t2;
    cout << "Общее время (ч): " << T;
    return 0;
}