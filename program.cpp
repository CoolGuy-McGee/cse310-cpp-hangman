#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed random

    vector<string> wordList = {
        "apple", "banana", "cherry", "dragon", "elephant",
        "forest", "guitar", "horizon", "island", "jungle",
        "kangaroo", "lemon", "mountain", "notebook", "ocean",
        "penguin", "queen", "rainbow", "sunflower", "tiger",
        "umbrella", "violin", "waterfall", "xylophone", "yogurt"
    };

    // Pick a random word from the list
    string word = wordList[rand() % wordList.size()];
    string guessed(word.size(), '_'); // initialize hidden word
    int lives = 6;
    vector<char> wrongGuesses;

    cout << "Welcome to Hangman!\n";

    while (lives > 0 && guessed != word) {
        cout << "\nWord: " << guessed << "\n";
        cout << "Lives left: " << lives << "\n";
        cout << "Wrong guesses: ";
        for (char c : wrongGuesses) cout << c << ' ';
        cout << "\nEnter a letter: ";

        char guess;
        cin >> guess;

        bool correct = false;
        for (size_t i = 0; i < word.size(); i++) {
            if (word[i] == guess) {
                guessed[i] = guess;
                correct = true;
            }
        }

        if (!correct) {
            bool alreadyGuessed = false;
            for (char c : wrongGuesses) {
                if (c == guess) {
                    alreadyGuessed = true;
                    break;
                }
            }
            if (!alreadyGuessed) {
                lives--;
                wrongGuesses.push_back(guess);
                cout << "Wrong guess!\n";
            }
            else {
                cout << "You already guessed that letter!\n";
            }
        }
    }

    if (guessed == word) {
        cout << "Congratulations! You guessed the word: " << word << "\n";
    }
    else {
        cout << "Game over! The word was: " << word << "\n";
    }

    return 0;
}
