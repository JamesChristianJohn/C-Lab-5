#include <iostream>
using namespace std;

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
	return 0.5 * base * height;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
	return length * width;
}

// Function to calculate the area of a square
double calculateSquareArea(double side) {
	return side * side;
}

int main() {
	int selection;
	double area;

	while (true) {
		cout << "Please select the area of the shape to calculate:" << endl;
		cout << "1. Square" << endl;
		cout << "2. Rectangle" << endl;
		cout << "3. Triangle" << endl;
		cout << "4. Quit program" << endl;
		cout << "Enter selection: ";
		cin >> selection;

		if (selection < 1 || selection > 4) {
			cout << "Your input was: " << selection << " which is an invalid input. Please enter a valid input!!" << endl;
			continue;
		}

		switch (selection) {
			case 1:
				double side;
				cout << "Enter the side of the square: ";
				cin >> side;
				area = calculateSquareArea(side);
				cout << "The area of the square is: " << area << endl;
				break;
			case 2:
				double length, width;
				cout << "Enter the length and width of the rectangle: ";
				cin >> length >> width;
				area = calculateRectangleArea(length, width);
				cout << "The area of the rectangle is: " << area << endl;
				break;
			case 3:
				double base, height;
				cout << "Enter the base and height of the triangle: ";
				cin >> base >> height;
				area = calculateTriangleArea(base, height);
				cout << "The area of the triangle is: " << area << endl;
				break;
			case 4:
				return 0;
		}
	}

	return 0;
}