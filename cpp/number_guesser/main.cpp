#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int getUpperBound();

int main()
{
    // initialize variables
    int rangeChoice, range, target, guess, guesses;

    // introduce game
    cout << "Welcome to the Number Guesser!" << endl;

    // validate input for range selection
    // if incorrect, clear screen, add error message to cout, reprompt user
    if (rangeChoice != 1 && rangeChoice != 2 && rangeChoice != 3)
    {
        system('cls')
        cout << "Invalid selection! Please pick again." << endl;
        // getUpperBound();
    }
    else
    {
      // generateTarget(rangeChoice)
    }
    // if correct, add confirmation to cout

    // generate random number
    srand(time(0));

    switch (rangeChoice)
    {
        case 1: target = (rand()%10) + 1;
            range = 10;
            break;
        case 2: target = 1 + (rand()%50);
            range = 50;
            break;
        case 3: target = 1 + (rand()%100);
            range = 100;
            break;
    }

    // field and evaluate guesses

    // display final results

}

int getUpperBound()
{
  // prompt user to select upper bound
  cout << "Select an upper bound:" << endl;
  cout << "1) 10" << endl << "2) 50" << endl << "3) 100" << endl;
  cin >> rangeChoice;
  return rangeChoice;
}
