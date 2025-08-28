#include <iostream>
using namespace std;

int main() {
    srand(time(0)); // Initialize random number generator 
    
    int num = (rand() % 101), attemps = 0, guess; // Declare vars
    
    cout << "Welcome to the Gumber Game!" << endl; // Switched from using '\n' to endl
    
    while (true) {
        cout << "Please enter a number: ";
        cin >> guess;
        
        if (attemps > 10) {
            cout << "Sorry, but you lost, due to too many attempts!"; // This doesn't need an 'endl', because it's the last string being printed in the program.
            break;
        }
        
        if (guess == num) {
            attemps++;
            cout << "Congrats! You've guessed the number in " << attemps << " attemps!"; // This doesn't need an 'endl', because it's the last string being printed in the program.
            break;
        } else if (guess > num) {
            cout << "Too high, try again." << endl; // Switched from using '\n' to endl
            attemps++;
        } else if (guess < num) {
            cout << "Too low, try again." << endl; // Switched from using '\n' to endl
            attemps++;
        }
    }

    return 0;
}
