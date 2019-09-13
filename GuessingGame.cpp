#include <iostream>
#include <stdlib.h> // srand, rand
#include <time.h> // NULL
#include <stdio.h> // time
using namespace std;

/* 9/13/19 Author: Maggie Bao. Description: The computer will pick a random number between 0 and 100, then ask the user to guess the number. The computer will give out hints, such as "too high" or "too low", and once the user guesses the number correctly it will tell you the number of tries it took to get to that number, and ask if the user wants to play again. If the user types out "y", GuessingGame will restart and the user will have to guess a different random number, and if the user types "n" GuessingGame will end. */

int main()
{
  srand(time(NULL)); //initialize random seed
  bool stillPlaying = true;  
  while (stillPlaying == true){
    int guess = 0;
    int counter = 0;
    char ans = ' ';
    int randomNum = rand() % 101; //generate random number between 1 and 100
    cout << "Guess the random number between 1 and 100: " << endl; // print out a line
    while (guess != randomNum){ //while user does not guess number, try again until correct
      cin >> guess; // allow user input
      if (guess > randomNum){
	cout << "The number is too high. Try again!" << endl;
	counter = counter + 1; // adds to counter for # of guesses
      }
      else if (guess < randomNum){
	cout << "The number is too low. Try again!" << endl;
	counter = counter + 1;
      }
    }
      counter = counter + 1;
      cout << "You guessed the correct number! Good Job!" << endl;
      cout << "It took you " << counter << " tries." << endl; 
      cout << "Play Again? (y/n)" << endl;
      cin >> ans;
      if (ans == 'n' || ans == 'N'){ // if user inputs "n", GuessingGame will stop
	cout << "Have a nice day!" << endl;
	stillPlaying = false;
	break;
      }	
      // else GuessingGame will play another round
  }
}
