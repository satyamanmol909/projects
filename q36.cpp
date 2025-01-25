#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        int roll;
    public:
       Student() {
            name = "";
            roll = 0;
        }
        

    
       


        void in() {
            cout << "Enter the name of the student: ";
            cin >> name;
            cout << "Enter the roll number of the student: ";
            cin >> roll;
        }


        void out()  {
            cout << "Name: " << name << endl << "Roll: " << roll << endl;
        }
};

int main() {
   
    Student st;
    
    
    st.in();
    
    
    st.out();
    
    
    return 0;
}
