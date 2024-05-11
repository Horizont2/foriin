#include <iostream>
using namespace std;

int main() {
    int num, newNum = 0;
    cout << "Введіть ціле число: ";
    cin >> num;
    for (int divisor = 10; num > 0; num /= 10) {
        int digit = num % 10;
        if (digit != 3 && digit != 6) {
            newNum = newNum * 10 + digit;
        }
    }
    cout << "Число після видалення цифр 3 і 6: " << newNum << endl;
    return 0;
}
