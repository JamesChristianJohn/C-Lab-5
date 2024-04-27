
#include <iostream>
using namespace std;

int main() {
	int inputValue;

	while (true) {
		cout << "Enter an integer value between 5 and 10: ";
		cin >> inputValue;

		if (cin.fail()) {
			cout << "Sorry, you entered an invalid number, please try again." << endl;
			cin.clear();
			cin.ignore(10000, '\n');
		} else if (inputValue < 5 || inputValue > 10) {
			std::cout << "You entered " << inputValue << ". Please enter a number between 5 and 10." << endl;
		} else {
			break;
		}
	}

	cout << "You input value (" << inputValue << ") has been accepted." << endl;

	return 0;
}