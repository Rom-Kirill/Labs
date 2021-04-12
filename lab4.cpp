#include <iostream>
#include <cmath>
using namespace std;

double CorrectNumber(string x) {
    double n = 0;
    while (true)
    {
        cout << x;
        cin >> n;
        if (!cin || n >= 1 || n <= -1)
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
    double x, s = 0;
    const int n = 10;
    x = CorrectNumber("Выберите значение x (-1<x<1): ");
    for (int i = 0; i < n; i++)
    {
        s = (pow(-1, i) * pow(x, 2*i + 1)) / (2*i + 1);
    }
    cout << ": " << s;

    return 0;
}