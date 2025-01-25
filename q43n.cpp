#include <iostream>
using namespace std;

class student {
    protected:
    string name;
    int roll;
    string address;
    string phone;
    int mark;
    string course;
    string skills;
    string awards;
    string certifications;
    

};

class TopperStudent : public student {
    public:
    void getdata() 
    {
        cout << "Name: " << endl;
       cin>>name;

        cout << "Roll: "  << endl;
        cin >> roll;

        cout << "Address: "  << endl;
        cin >> address;

        cout << "Phone: "  << endl;
        cin >> phone;

        cout << "Marks: "   << endl;
        cin >> mark;

        cout << "Course: "  << endl;
        cin >> course;

        cout << "Skills: " << endl;
        cin >> skills;

        cout << "Awards: "  << endl;
        cin >> awards;

        cout << "Certifications: "  << endl;
        cin >> certifications;        
    }

    void showdata (){
        cout<<system("cls");
        cout << "Name: " <<name<< endl;
        cout << "Roll: " <<roll<< endl;
        cout << "Address: " <<address<< endl;
        cout << "Phone: " <<phone<< endl;
        cout << "Marks: " << mark << endl;
        cout << "Courses: " << course << endl;
         cout << "Skills: "<< skills << endl;;
        cout << "Awards: "<< awards << endl;;
        cout << "Certification: "<< certifications<< endl;;
    }
};

int main() {
    TopperStudent s1;
    
    s1.getdata();
    s1.showdata();
    

   

    return 0;
}