#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) {
        name = n;
        age = a;
    }    
    void displayPersonInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person {
private:
    int roll_no;
    string course;
public:
    Student(string n, int a, int r, string c) : Person(n, a) {
        roll_no = r;
        course = c;
    }
    void displayStudentInfo() {
        displayPersonInfo(); 
        cout << "Roll No: " << roll_no << endl;
        cout << "Course: " << course << endl;
    }
};
int main() {
    Student student1("John Doe", 20, 101, "Computer Science");
    student1.displayStudentInfo();
    return 0;
}
