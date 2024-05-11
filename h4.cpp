#include <iostream>
using namespace std;

int main() {
    int A;
    cout << "Введіть ціле число A: ";
    cin >> A;
    for (int B = 100; B <= 999; B++) {
        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
            cout << B << " ";
        }
    }
    cout << endl;
    return 0;
}