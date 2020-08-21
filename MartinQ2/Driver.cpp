// Anita Martin amartin98@cnm.edu
// Vacation Planner
// Driver.cpp

#include <iostream>
#include <string>
#include "Driver.h"

using namespace std;

int main() {
	int numOfDays{ 0 };
	int temperature{ 0 };
	int weatherCondition{ 0 };
	const int SUNNY{ 1 };
	const int CLOUDY{ 2 };
	const int RAINY{ 3 };
	const int ONE{ 1 };
	const int TWO{ 2 };
	const int THREE{ 3 };
	const int FOUR{ 4 };
	const int FIVE{ 5 };
	char goAgain{ 'y' };


	cout << "\n\t\t\t\tAnita's Vacation Planner App";
	cout << endl;
	cout << endl;
	cout << "\n\t\tHello, and welcome to the the simple and easy to use planner app.\n"
		<< "\tWe will help you in determining what area you should visit according to the weather condition.";
	cout << endl;
	cout << endl;

	do {

		while (numOfDays < 1 || numOfDays > 6) {
			cout << "How many days you will you be gone for?\n"
				<< "Please enter a whole number between 1- 5 or choose 6 to quit.\n";
			cout << "\t (1) One" << endl;
			cout << "\t (2) Two" << endl;
			cout << "\t (3) Three" << endl;
			cout << "\t (4) Four" << endl;
			cout << "\t (5) Five" << endl;
			cout << "\t (6) Quit" << endl;
			cin >> numOfDays;
			if (numOfDays < 1 || numOfDays > 6)
				cout << "\nThat is not a valid choice, please try again." << endl;
		}
		cout << endl;
		cout << endl;
		if (numOfDays != 6) {
			while (temperature < 20 || temperature > 105) {
				cout << "What will be the weather tempature be for this day:\n"
					<< "Enter a whole number betweem 20 degrees to 105 degrees\n";
				cout << numOfDays << endl;
				cin >> temperature;
				if (temperature < 20 || temperature > 105)
					cout << "\nThat is not a valid choice, please try again." << endl;
			}
		cout << endl;
		cout << endl;

			while (weatherCondition < 1 || weatherCondition > 3) {
				cout << "What will be the weather like for this day:\n";
				cout << numOfDays << endl;
				cout << "\t1. Sunny\n"
					<< "\t2. Cloudy\n"
					<< "\t3. Rainy\n";
				cin >> weatherCondition;
				if (weatherCondition < 1 || weatherCondition > 3)
					cout << "\nThat is not a valid choice, please try again." << endl;
			}
		cout << endl;
		cout << endl;


			if ((temperature > 75) && (weatherCondition == SUNNY)) {
				cout << "\nOn this day, it will be cloudy, but still beach weather!" << endl;
			}
			else if ((temperature < 70) && (weatherCondition == CLOUDY)) {
				cout << "\nOn this day, it should be a perfect day at the beach, but take a big beach umbrella!" << endl;
			}
			else if ((temperature > 0) && (weatherCondition == RAINY)) {
				cout << "\nOn day this day, it will be a great day to visit the local museum!" << endl;
			}
			else {
				cout << "\nIt might be a bit cool for the beach. Bring a sweater!" << endl;
			}

			cout << "\nWould you like to go again? y/n\n";
			cin >> goAgain;
			numOfDays = temperature = weatherCondition = 0;
		}

	} while (goAgain == 'y' && numOfDays != 6);

	// Say goodbye
	cout << "\nThank you for using our app, good-bye.\n";

	cout << endl << endl;




	return 0;
}