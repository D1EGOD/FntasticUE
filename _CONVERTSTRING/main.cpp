#include <iostream>
#include <string>
#include <map>
#include <Windows.h>

using namespace std;

string convertString(string input_string) {
    map<char, int> char_count;
    for (char ch : input_string) char_count[tolower(ch)]++;

    string output_string = "";
    for (char ch : input_string) output_string += (char_count[tolower(ch)] == 1) ? '(' : ')';

    return output_string;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    while (true) {
        cout << "Введите строку: ";
        string input;
        getline(cin, input);
        cout << "Конвертированная строка: " << convertString(input) << endl << endl;
    }

    return 0;
}