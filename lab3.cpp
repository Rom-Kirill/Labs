#include <iostream>
#include<ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    srand(time(NULL));

    const int SIZE = 10;
    int array[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        array[i] = rand();
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i] << endl;
    }


    int maxvalue = array[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (array[i] > maxvalue)
        {
            maxvalue = array[i];
        }
    }
    cout << "max:" << maxvalue << endl;
}
