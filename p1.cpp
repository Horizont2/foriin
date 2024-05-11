#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 500 + 1;
    int guess, attempts;

    cout << "Ласкаво просимо до гри 'Вгадай число'\n";

    for (attempts = 1; ; attempts++) {
        cout << "Введіть вашу догадку (або 0 для виходу): ";
        cin >> guess;

        if (guess == 0) {
            break;
        }

        if (guess < secretNumber) {
            cout << "Більше\n";
        } else if (guess > secretNumber) {
            cout << "Менше\n";
        } else {
            cout << "ви вгадали число " << secretNumber << " за " << attempts << " спроб\n";
            break;
        }
    }

    return 0;
}
