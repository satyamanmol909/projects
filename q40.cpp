#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        int roll;
    
    public:

        Student(string n,int r) {
            name =n;
            roll = r; 
            
            cout << "Name: " << name << endl << "Roll: " << roll << endl;
        }
};
int main() {
    
    Student st("satyam",6);
    
    return 0;
}