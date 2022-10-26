#include <iostream>

using namespace std;

int main() {

    int amountOfSymbols;
    int lineOfSymbols;
    char typeOfSymbol;
    int a = 2;
    cout << "Выберите количество символов" << endl;

    cin >> amountOfSymbols;

    cout << "Введите тип символа" << endl;

    cin >> typeOfSymbol;

    cout << "Выберите положение линии" << endl <<
         "1. Горизонтальная" << endl <<
         "2. Вертикальная" << endl;

    cin >> lineOfSymbols;

    for (int i = 0; i < amountOfSymbols; ++i) {
        switch (lineOfSymbols) {
            case 1: {
                cout << typeOfSymbol;
                break;
            }
            case 2: {
                cout << typeOfSymbol;
                cout << "\n";
                break;
            }
            default: {
                cout << "Неправильный тип данных!" << endl;
                return 0;
            }
        }
    }

    return 0;
}