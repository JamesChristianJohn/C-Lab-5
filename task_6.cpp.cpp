
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

// Function to calculate the number of vowels
int countVowels(const string& str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

// Function to calculate the number of words
int countWords(const string& str) {
    int count = 0;
    stringstream ss(str);
    string word;
    while (ss >> word) {
        count++;
    }
    return count;
}

// Function to reverse the string
string reverse(const string& str) {
    string reversed;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

// Function to capitalize the second letter of each word
string capitalizeSecondLetter(const string& str) {
    stringstream ss(str);
    string word;
    string capitalized;
    while (ss >> word) {
        if (word.length() >= 2) {
            word[1] = toupper(word[1]);
        }
        capitalized += word + " ";
    }
    return capitalized;
}

int main() {
    // Open the text file
    ifstream file("textfile.txt");
    if (!file.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    // Read the contents of the file into a string variable
    string fileData;
    file.seekg(0, ios::end);
    fileData.reserve(file.tellg());
    file.seekg(0, ios::beg);
    file.read(&fileData[0], fileData.capacity());

    // Close the file
    file.close();

    // Calculate and output the number of vowels
    int vowelCount = countVowels(fileData);
    cout << "Number of vowels: " << vowelCount << endl;

    // Calculate and output the number of words
    int wordCount = countWords(fileData);
    cout << "Number of words: " << wordCount << endl;

    // Reverse the string and output it
    string reversed = reverse(fileData);
    cout << "Reversed string: " << reversed << endl;

    // Capitalize the second letter of each word and output it
    string capitalized = capitalizeSecondLetter(fileData);
    cout << "Capitalized string: " << capitalized << endl;

    return 0;
}