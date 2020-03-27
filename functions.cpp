#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include "functions.hpp"
using namespace std;
int createNumber(int upper) {
	/*creates a random number between 1 and upper, inclusive*/
	int lower = 1;
	return (rand() % (upper - lower + 1)) + lower; 
}

/* @Overload */
int createNumber(int lower, int upper) {
	/*creates a random number between lower and upper, inclusive*/
	return (rand() % (upper - lower + 1)) + lower; 
}

int getChoice(int min, int max) {
	int choice;
	cout << "Enter choice: ";
	cin >> choice;
	// cout << "\n";
	while(choice < min || choice > max) {
		cout << "Invalid Choice !\n";
		cout << "Enter choice again: ";
		cin >> choice;
	}
	return choice;
}

int getNumber() {
	int n;
	cout << "\nEnter guess: ";
	cin >> n;
	return n;
}


void displayMenu() {
	cout << "\n-----------GUESS MY NUMBER GAME-----------\n";
	cout << "1 -> Game 1-10\n";
	cout << "2 -> Game 1-100\n";
	cout << "3 -> Game 1-1000\n";
	cout << "\n";
}


void doProcess(int answer, int guess) {
	/* Do the process with the guess, if it's lower or higher display
	appropiate messages */
	int tries = 1; //already 1 try when guessing for the first time
	while (answer != guess) {
		if (guess < answer) {
			cout << "You guessed LOW !!";
		}
		else {
			cout << "You guessed HIGH !!";
		}
		guess = getNumber();
		tries += 1;
	}
	cout << "\nCongrats !!, you guessed my number in " << tries << " tries !\n";
}

Robot::Robot(string newColor, string newNose, string newBody) {
	color = newColor;
	nose = newNose;
	body = newBody;
}
string Robot::getColor() {
	return color;
}
void Robot::setColor(string newColor) {
	color = newColor;
}
string Robot::getNose() {
	return nose;
}
void Robot::setNose(string newNose) {
	nose = newNose;
}
string Robot::getBody() {
	return body;
}
void Robot::setBody(string newBody) {
	body = newBody;
}

void doProcess(string color, string guessed_color, string nose, string guessed_nose, string body, string guessed_body) {
	int points = 0;
	if(color == guessed_color)
		points += 1;
	if(nose == guessed_nose)
		points += 1;
	if(body == guessed_body)
		points += 1;
	if(points == 0)
		cout << "LOSER ! You couldn't even guess a single feature correctly ! :( \n";
	else
		cout << "\nOh Yeah...You guessed " << points << " features of my robot correctly !\n";

	if(nose == "Noseless")
		cout << "My Robot had a color of " << color << ", was " << nose << " and had a " << body << " body !\n";
	else
		cout << "My Robot had a color of " << color << ", a " << nose << " nose and had a " << body << " body !\n";
	cout << "You got " << points << " points !\n"; 
}
