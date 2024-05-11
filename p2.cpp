#include <iostream>
using namespace std;

int main() {
    double amount;
    int choice;

    cout << "Вітаємо в програмі-конвертері валют!\n";
    cout << "1. Долари США\n";
    cout << "2. Фунти стерлінгів\n";
    cout << "3. Євро\n";
    cout << "Оберіть валюту для конвертації: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Введіть суму в доларах: $";
        cin >> amount;
        cout << amount << " доларів = " << amount * 0.85 << " євро\n";
        cout << amount << " доларів = " << amount * 0.75 << " фунтів стерлінгів\n";
    } else if (choice == 2) {
        cout << "Введіть суму в фунтах стерлінгів: £";
        cin >> amount;
        cout << amount << " фунтів = " << amount * 1.12 << " євро\n";
        cout << amount << " фунтів = " << amount * 1.32 << " доларів\n";
    } else if (choice == 3) {
        cout << "Введіть суму в євро: €";
        cin >> amount;
        cout << amount << " євро = " << amount * 1.18 << " доларів\n";
        cout << amount << " євро = " << amount * 0.89 << " фунтів стерлінгів\n";
    } else {
        cout << "Невірний вибір!\n";
    }
    return 0;
}