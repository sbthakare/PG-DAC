#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName, line;
    ofstream outputFile;

    cout << "Enter name: ";
    cin >> fileName;

    outputFile.open(fileName+".txt", ios::app); // Open in append mode

    cout << "Enter data (type 'quit' to exit): ";

    while (true) {
        getline(cin,line);

        if (line == "quit" || line=="QUIT") {
            break;
        }

        outputFile << line << endl;
    }

    outputFile.close();
    cout << "Data written to file successfully." << endl;

    return 0;
}