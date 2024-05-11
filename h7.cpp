#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Введіть перше ціле число: ";
    cin >> num1;
    cout << "Введіть друге ціле число: ";
    cin >> num2;
    cout << "Числа, на які діляться без залишку обидва введені числа: ";
    for (int i = 1; i <= min(num1, num2); i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}