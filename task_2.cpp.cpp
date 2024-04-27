#include <iostream>
#include <random>
using namespace std;

int main() {
	// Generate a random integer between 0 and 11
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(0, 11);
	int daysUntilExpiration = dis(gen);

	// Output message based on conditions
	switch (daysUntilExpiration) {
		case 0:
			cout << "Your subscription has expired." << endl;
			break;
		case 1:
			cout << "Your subscription expires within a day! Renew now and save 20%!" << endl;
			break;
		default:
			if (daysUntilExpiration <= 5) {
				cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew now and save 10%!" << endl;
			} else if (daysUntilExpiration <= 10) {
			    cout << "Your subscription will expire soon. Renew now!" << endl;
			} else {
				cout << "You have an active subscription." << endl;
			}
			break;
	}

	return 0;
}