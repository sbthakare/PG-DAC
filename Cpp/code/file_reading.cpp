#include<iostream>
#include<fstream>
//read a file and produce summary
//number of line
//number of words
//number of alphabets
//number of digits
//number of symbols

using namespace std;

int main() {
    ifstream inputFile("source.txt"); // Replace "your_file.txt" with the actual file name

   
    int lines = 0, words = 0, alphabets = 0, digits = 0, symbols = 0;
    char c;

    while (inputFile.get(c)) {
        // Count lines
        if (c == '\n') {
            lines++;
            words++; // Consider a newline as ending a word
        }

        // Count words (assuming a word is separated by whitespace)
        if (c==' ') {
            words++;
        }

        // Count alphabets (without using ctype)
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            alphabets++;
        }

        // Count digits (without using ctype)
        if (c >= '0' && c <= '9') {
            digits++;
        }

        // Count symbols (assuming symbols are non-alphanumeric characters)
        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || isspace(c))) {
            symbols++;
        }
    }

    // Count the last word if it doesn't end with a newline
    if (!isspace(c)) {
        words++;
    }

    cout << "Number of lines: " << lines << endl;
    cout << "Number of words: " << words << endl;
    cout << "Number of alphabets: " << alphabets << endl;
    cout << "Number of digits: " << digits << endl;
    cout << "Number of symbols: " << symbols << endl;

    inputFile.close();
    return 0;
}