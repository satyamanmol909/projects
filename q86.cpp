#include<iostream>
using namespace std;

class Parent {
    private:
        double salary;
        string mail;

    public:    
        friend void getdata(Parent& p);  
};
void getdata(Parent& p) {
    cout << "Enter salary: ";
    cin >> p.salary; 
    cout << "Enter mail: ";
    cin >> p.mail;    
}
int main() {
    Parent p1;  
    getdata(p1);  
    return 0;
}
