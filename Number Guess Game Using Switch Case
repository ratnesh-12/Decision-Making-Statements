#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 10 + 1; 
    int guess;
    int attempts = 0;

    cout << "Number Guessing Game\n";
    cout << "Guess the number (1 to 10) and you've 3 chances\n\n";

    while (attempts < 3) {
        cout << "Enter guess #" << (attempts + 1) << ": ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "You guessed it right!\n";
            break;
        } else {
            switch (attempts) {
                case 0:
                    cout << "Nope, Hint: It's " 
                         << (guess < secretNumber ? "higher" : "lower") << " than " << guess << ".\n";
                    break;
                case 1:
                    cout << "Try again\n";
                    break;
                case 2:
                    cout << "Game over, the number was " << secretNumber << ".\n";
                    break;
            }
        }
        attempts++;
    }

    cout << "\nThanks for playing\n";
    return 0;
}

OUTPUT:
Number Guessing Game
Guess the number (1 to 10) and you've 3 chances

Enter guess #1: 2
Nope, Hint: It's higher than 2.
Enter guess #2: 5
Try again
Enter guess #3: 8
Game over, the number was 9.

Thanks for playing

=== Code Execution Successful ===
