#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    int num = (rand() % 101);
    int guess;
    int attemps = 0;
    
    cout << "welcome to the number guessing game (enter a number between 1-100)\n";
    
    while (true) {
        cout << "enter a number: ";
        cin >> guess;
        
        if (guess == num) {
            attemps++;
            break;
        } else if (guess > num) {
            cout << "the number is too high, try again.\n";
            attemps++;
        }
        else if (guess < num) {
            cout << "the number is too low, try again.\n";
            attemps++;
        }
    }
    
    cout << "congrats you've guessed the number!\n";
    return 0;
}
