#include <iostream>
using namespace std;

int main() {
    int A;
    cout << "Введіть ціле число A: ";
    cin >> A;
    int sum = 0;
    for (int num = A; num > 0; num /= 10) {
        sum += num % 10;
    }
    if (sum * sum * sum == A * A) {
        cout << "Куб суми цифр числа " << A << " дорівнює " << A * A << endl;
    } else {
        cout << "Куб суми цифр числа " << A << " не дорівнює " << A * A << endl;
    }
    return 0;
}
