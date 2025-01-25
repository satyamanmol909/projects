#include <iostream>
#include<string>
using namespace std;

class Student {
    private:
        string name;
        int rollNumber;
        float marks;
        char grade;
        
    public:
        void inputDetails() {
            cout << "Enter student name: ";
            getline(cin, name);
            cout << "Enter roll number: ";
            cin >> rollNumber;
            cout << "Enter marks: ";
            cin >> marks;
        }
        void displayDetails() {
            cout << "Student Name: " << name << endl;
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Marks: " << marks << endl;   
            if (marks >= 90) {
                grade = 'A';
            } else if (marks >= 80) {
                grade = 'B';
            } else if (marks >= 70) {
                grade = 'C';
            } else if (marks >= 60) {
                grade = 'D';
            } else {
                grade = 'F';
            }
            cout << "Grade: " << grade << endl;
        }
};

int main() {
    Student student;
    student.inputDetails();
    cout << "\nStudent Details:\n";
    student.displayDetails();
    
    return 0;
}
