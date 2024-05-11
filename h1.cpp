#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int num = 100; num <= 999; num++) {
        int digit1 = num / 100;
        int digit2 = (num / 10) % 10;
        int digit3 = num % 10;
        if (digit1 == digit2 || digit1 == digit3 || digit2 == digit3) {
            count++;
        }
    }
    cout << "Кількість чисел з двома однаковими цифрами: " << count << endl;
    return 0;
}