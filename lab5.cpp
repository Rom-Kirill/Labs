#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    const char alphabet_1[52] = { 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i','j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
    'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F',
    'G', 'H', 'I','J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',
    'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };



    const char alphabet_2[52] = { 'A', 'B', 'C', 'D', 'E', 'F',
    'G', 'H', 'I','J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',
    'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i','j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
    'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

    char string[50];
    string[49] = '\0';
    char encoded_string[50];
    encoded_string[49] = '\0';
    cout << "Enter the string: ";
    gets_s(string);

    const int string_length = strlen(string);
    const int alphabet_length = 52;

    for (int i = 0; i < string_length; i++)
    {
        for (int j = 0; j < alphabet_length; j++)
        {
            if (string[i] == alphabet_1[j])
            {
                encoded_string[i] = alphabet_2[j];

            }
        }
    }
    for (int i = 0; i < string_length; i++) {
        cout << encoded_string[i];
    }

    return 0;
}