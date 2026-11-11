#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string S1, S2;

    cout << "Введіть рядок S1: ";
    getline(cin, S1);

    cout << "Введіть рядок S2: ";
    getline(cin, S2);

    for (size_t i = 0; i < S1.size(); ++i) {
        for (size_t j = 0; j + 1 < S1.size() - i; ++j) {
            if (S1[j] > S1[j + 1]) {
                char temp = S1[j];
                S1[j] = S1[j + 1];
                S1[j + 1] = temp;
            }
        }
    }

    for (size_t i = 0; i < S2.size(); ++i) {
        for (size_t j = 0; j + 1 < S2.size() - i; ++j) {
            if (S2[j] < S2[j + 1]) {
                char temp = S2[j];
                S2[j] = S2[j + 1];
                S2[j + 1] = temp;
            }
        }
    }

    cout << "Відсортований S1: " << S1 << endl;
    cout << "Відсортований S2: " << S2 << endl;

    return 0;
}  
