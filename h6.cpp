#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Введіть ціле число: ";
    cin >> num;
    cout << "Число " << num <<" ділиться без залишку на: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}