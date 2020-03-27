#include <iostream>
#include "functions.hpp"
using namespace std;
int main()
{
	int choice, guess, answer;
	bool to_be_continued = true;
	while(to_be_continued) {
		displayMenu();
		choice = getChoice(1, 3);
		switch(choice) {
			case 1:
				cout << "\nThe number is between 1 to 10.. guess it !\n";
				answer = createNumber(10);
				break;
			case 2:
				cout << "\nThe number is between 1 to 100.. guess it !\n";
				answer = createNumber(100);
				break;
			case 3:
			    cout << "\nThe number is between 1 to 1000.. guess it !\n";
				answer = createNumber(1000);
				break;
			default:
				cout << "Something went wrong !";
		} 
		guess = getNumber();
		doProcess(answer, guess);
		cout << "Do you want to play again ? [Enter 1 for YES and 0 for NO] : \n";
		to_be_continued = getChoice(0,1);
	}
}