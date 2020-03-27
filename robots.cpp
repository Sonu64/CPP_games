#include <iostream>
#include "functions.hpp"
#include <cstdlib>
#include <stdlib.h>
#include <time.h> 
using namespace std;
int main() {

bool to_be_continued = true;

while(to_be_continued) {
	//the colors
	string colors[] = {"Red", "Blue", "Yellow"};
	string noses[] = {"Sharp", "Bold", "Noseless"};
	string bodies[] = {"Iron", "Silver", "Gold"};
	string guessed_nose, guessed_color, guessed_body;

	srand(time(NULL));
	string color = colors[createNumber(0,2)];
	string nose = noses[createNumber(0,2)];
	string body = bodies[createNumber(0,2)];

	 

	Robot myRobot(color, nose, body);
	cout << "\nHello, My Robot is created !\n";
	cout << "You can guess a color out of Red, Blue and Yellow\n";
	cout << "You can guess a nose out of Sharp, Bold and Noseless\n";
	cout << "You can guess a body out of Iron, Silver and Gold\n";
	cout << "Guess the Color: ";
	cin >> guessed_color;
	cout << "Guess the Nose: ";
	cin >> guessed_nose;
	cout << "Guess the Body: ";
	cin >> guessed_body;

	doProcess(myRobot.getColor(), guessed_color, myRobot.getNose(), guessed_nose, myRobot.getBody(), guessed_body);

	cout << "\nDo you want to play again ? [Enter 1 for YES and 0 for NO] : \n";
	to_be_continued = getChoice(0,1);
  }
}
