#include <iostream>
using namespace std;
int main() {
    int secret = rand();
    int guess;
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess > secret)
            cout << "Too high!" << endl;
        else if (guess < secret)
            cout << "Too low!" << endl;
        else {
            cout << "Correct! You guessed the Secret Number..." << endl;
            break;
        }
    }
    return 0;
}
