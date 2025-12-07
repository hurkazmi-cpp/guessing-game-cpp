#include<iostream>
#include<cstdlib> // for srand and rand
#include<ctime> // for time

using namespace std;

int main()
{
    // first we generate a random number

    srand(time(0));  // seed random number with current time
    int secret = rand() % 100 + 1;  // Random numbers between 1 and 100

    int guess;
    cout << "Welcome to the guessing game !!" << endl << "I have guessed a number for you" << endl << " Can you guess it?" << endl;

    do
    {
        cout << "Enter your guess:";
        cin >> guess;

        if(guess > secret)
        {
            cout << " Too High Try Again !!" << endl ;
        }
        else if(guess < secret)
        {
            cout << " Too Low Try Again!!" << endl;
        }
        else
        {
            cout << "Congratulations !! You guessed it" << endl;
        }

    } while (guess != secret);
    

    return 0;
}   
