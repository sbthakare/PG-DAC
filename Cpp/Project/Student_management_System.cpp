#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
private:
    static const int MAX_STUDENTS = 100;  // Maximum number of students
    static int student_count;              // Count of current students
    
    struct Record {
        string name;                       
        int roll_no;                       
        int age;                           
    } students[MAX_STUDENTS];              // Array of student records

public:
    void addRecord();                      
    void listRecords();                    
    void modifyRecord();                   
    void deleteRecord();                   
    void saveToFile();                     
    void loadFromFile();                   
};

// Initialize static variable
     int Student::student_count = 0;

// Function to add a student record
	void Student::addRecord()
	 {
  	  if (student_count >= MAX_STUDENTS) {
       	 cout << "Maximum student limit reached.\n";
       	 return;
    	}

    cout << "Enter Name: ";
    cin >> students[student_count].name;
    cout << "Enter Roll Number: ";
    cin >> students[student_count].roll_no;
    cout << "Enter Age: ";
    cin >> students[student_count].age;

    student_count++;
    
    saveToFile();  // Save records to file
    cout << student_count<<" Students record added successfully!\n";
}

// Function to list all student records
	void Student::listRecords() {
   		 if (student_count == 0) {
       		 cout << "No records found.\n";
        	return;
    }

   
    cout << "\n\t----------------------------------------\n";
    for (int i = 0; i < student_count; i++)
	 {
        cout << "\n\t Name:" << students[i].name 
             << "\t Roll_no:"<< students[i].roll_no 
             << "\t Age::"<<students[i].age << endl;
    }
    cout << "\n\t----------------------------------------\n";
}

// Function to modify a student record
	void Student::modifyRecord() 
	{
  	 	 int roll_no;
   		 cout << "Enter Roll Number of the student to modify: ";
    		cin >> roll_no;

    for (int i = 0; i < student_count; i++)
	 {
        if (students[i].roll_no == roll_no) 
		{
            cout << "Enter new Name: ";
            cin >> students[i].name;
            cout << "Enter new Age: ";
            cin >> students[i].age;
            saveToFile();  // Save updated records to file
            cout << "Record modified successfully!\n";
            return;
        }
    }
    cout << "Record not found.\n";
}

			// Function to delete a student record
		void Student::deleteRecord() 
		{
    		int roll_no;
   			 cout << "Enter Roll Number of the student to delete: ";
   			 cin >> roll_no;

    for (int i = 0; i < student_count; i++) {
        if (students[i].roll_no == roll_no) {
            for (int j = i; j < student_count - 1; j++) {
                students[j] = students[j + 1];  // Shift records to fill the gap
            }
            student_count--;
            saveToFile();  // Save changes to file
            cout << "Record deleted successfully!\n";
            return;
        }
    }
    cout << "Record not found.\n";
}

// Write in File
void Student::saveToFile() 
{
    ofstream outFile("students.txt");
    for (int i = 0; i < student_count; i++) {
        outFile << students[i].name << " "
                << students[i].roll_no << " "
                << students[i].age << endl;
    }
}

// read from file
void Student::loadFromFile() 
{
    ifstream inFile("students.txt");
    if (inFile) {
        while (inFile >> students[student_count].name 
                     >> students[student_count].roll_no 
                     >> students[student_count].age) {
            student_count++;
        }
    }
}


int main() {
    Student studentDB;
    
    studentDB.loadFromFile();  // Load existing file

    int choice;
    do {
        cout << "\nStudent Database Management System Menu:";
        cout << "\n1. Add Records";
        cout << "\n2. List Records";
        cout << "\n3. Modify Records";
        cout << "\n4. Delete Records";
        cout << "\n0. Exit";
        
        cout << "\nChoose a choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                studentDB.addRecord();
                break;
            case 2:
                studentDB.listRecords();
                break;
            case 3:
                studentDB.modifyRecord();
                break;
            case 4:
                studentDB.deleteRecord();
                break;
            case 0:
                cout << "Exiting the system. Thank you!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 0);
    
    

    return 0;
}
