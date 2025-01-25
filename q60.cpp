#include <iostream>
using namespace std;
struct date
{
    int day;
    int month;
    int year;

};
class Student
{
public:
    int studentId;
    string name;
    int roll;
    int age;
    string gender;
    string className;
    string email;
};
class Enrollment:public Student
{
    public:
    int e_Id;
    string e_Date;
    string grade;
};
class course:public Enrollment
{
    public:
    string C_name;
    int C_id;
    struct date c;

    void in()
    {
        cout << "-----Welcome Student Management System-----" << endl;
        cout << "Enter the student id: ";
        cin >> studentId;
        cout << "Enter the name of student: ";
        cin >> name;
        cout << "Enter the roll of student: ";
        cin >> roll;
        cout << "Enter the age of the student: ";
        cin >> age;
        cout << "Enter the gender of the student: ";
        cin >> gender;
        cout << "Enter the classname of the student: ";
        cin >> className;
        cout << "ENter the email of the student: ";
        cin >> email;
        cout << "Enter the enrollment id: ";
        cin >> e_Id;
        cout << "Enter the enrollment date: ";
        cin >> e_Date;
        cout<<"enter the current date"<<endl;
        cout<<"enter the day";
        cin>>c.day;
        cout<<"enter the month";
        cin>>c.month;
        cout<<"enter the year";
        cin>>c.year;
        cout<< "Enter the grade of the student: ";
        cin >> grade;
        cout << "Enter the course name of student: ";
        cin >> C_name;
        cout << "Enter the course id of the student: ";
        cin >> C_id;
    }
    void out()
    {
        cout << system("cls");
        cout << "date "<<c.day<<":"<<c.month<<":"<<c.year<<endl;
    }
};
int main() {
    course c;
    c.in();
    c.out();
    return 0;
}