#include <iostream>
#include <cmath>
using namespace std;

double CorrectNumber(string x) {
    double n = 0;
    while (true)
    {
        cout << x;
        cin >> n;
        if (!cin)
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

double fact(int N)
{
    if (N < 0)
        return 0;
    if (N == 0)
        return 1;
    else 
        return N * fact(N - 1); 
}

int main()
{
    setlocale(LC_ALL, "Russian");
    double x, s=0;
    const int n = 10;
    x = CorrectNumber("Выберите значение X: ");
    for (int i = 0; i < n; i++)
    {
        s+= (pow(-1, i) * pow(x, 2 * i)) / fact(2 * i + 1);

    }
    cout << ": " << s;

    return 0;
}