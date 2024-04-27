#include <iostream>
using namespace std;

int main() {
	// Declare and initialize the array
	const char* arr[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
	const int size = sizeof(arr) / sizeof(arr[0]);

	// Loop through each element of the array
	for (int i = 0; i < size; i++) {
		// Check if the element starts with the letter "B"
		if (arr[i][0] == 'B') {
			// Output the element to the console
			cout << arr[i] << endl;
		}
	}

	return 0;
}