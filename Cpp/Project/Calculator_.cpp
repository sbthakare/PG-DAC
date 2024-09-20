#include <iostream>
using namespace std;



double add(double a, double b) 
{
    return a + b;
}

double subtract(double a, double b)
 {
    return a - b;
}

double multiply(double a, double b)
 {
    return a * b;
}

double divide(double a, double b)
 {
    if (b != 0) 
	{
        return a / b;
    } 
	else
	 {
        cout << "Error: Division by zero is not allowed.\n";
        return 0;
    }
}

int main() {
    double num1, num2;
    int choice;

    do {
            
           	cout << "\n \t Simple Calculator Menu: ";
            
        cout << "\n\t| ----------------|";   
        cout << "\n\t| 1. Add          |";
        cout << "\n\t| 2. Subtract     |";
        cout << "\n\t| 3. Multiply     |";
        cout << "\n\t| 4. Divide       |";
        cout << "\n\t| 0. Exit         |";
        cout << "\n\t| ----------------|";
    			    
   				    
        cout<<"\n Enter Your Choice:-";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            case 0:
                cout << "Exiting the calculator. Thank you!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
