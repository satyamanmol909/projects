//program to creat the library management system
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
};

class library
{
    public:
    string ename,p_no,sname,dep_name,bname,b_publi;
    int e_id,roll_no,b_no,b_qt,fb_qt;
    int password,c_password;
    string work;
    struct Date da;
    void worker()
    {

    cout<<"_______welcome to our library_______\n";
    cout<<"enter the date"<<endl;
  
			cout << "Day: ";
			cin >> da.day;
			cout << "Month: ";
			cin >> da.month;
			cout << "Year: ";
			cin >> da.year;

    cout<<"enter the first name of worker in the library  :";
    cin>>ename;
    cout<<"enter your id ";
    cin>>e_id;
    cout<<"enter your password ";
    cin>>password;
    klj:
    cout<<endl;
    cout<<"enter your work: ";
    
    cin>>work;
    if(work=="librarian")
    {
        xc:
        cout<<endl;
        cout<<"enter your password ";
        cin>>c_password;
        if(c_password==password)
        {
            cout<<"thanks you have loged in \n you can work now\n";
            cout<<"please enter your phone number to contect again";
            cin>>p_no;

        }
        else
        {
            cout<<"please enter the correct password";
            goto xc;
        }
    }
        else
         {
            cout<<"you are not a librarian you can't work here";
            goto klj; 
         }
    }
    void student()
    {
        cout<<"enter the student name";
        cin>>sname;
        cout<<"enter the class roll number";
        cin>>roll_no;
        cout<<"enter the department name";
        cin>>dep_name;
        cout<<"what book do you want";
        cin>>bname;
        ghf:
        cout<<"how many books do you need";
        cin>>b_qt;
        
        
    }
    void book()
    {
        cout<<"enter the book name";
        cin>>bname;
        cout<<"enter the publication name ";
        cin>>b_publi;
        xyz:
        cout<<"how many books do you need ";
        cin>>b_qt;
        
        cout<<"enter the book quantity ";
        cin>>fb_qt;
        if(fb_qt>=b_qt)
        {
        cout<<"enter the book number";
        cin>>b_no;
        }
        else
        {
            cout<<"we have only "<<fb_qt<<" books ";
            goto xyz;
        }


    }
    void out()
    {
        cout<<system("cls");
        cout<<"_______welcome to our library_______\nworker name ="<<ename<<endl;
        cout<<endl<<"\t\t worker details"<<endl;
        cout<<"date ="<<da.day<<":"<<da.month<<":"<<da.year<<endl;
        cout<<"work ="<<work<<endl<<"id number ="<<e_id<<endl;
        cout<<"phone number ="<<p_no<<endl;
        cout<<"thanks you have loged in \n you can work now\n";
        cout<<"\t\t student details"<<endl;
        cout<<"student name ="<<sname<<endl<<"roll number ="<<roll_no<<endl<<"department name ="<<dep_name<<endl;
        cout<<"book name="<<bname<<"book quantity ="<<b_qt;
        cout<<"\t\t book details"<<endl;
        cout<<"\n book name for the library ="<<bname<<endl<<"\nbook quantity in library ="<<fb_qt<<endl;
        cout<<"book no ="<<b_no;
        ofstream out("library.txt");
        out<<"_______welcome to our library_______\nworker name ="<<ename<<endl;
        out<<endl<<"\t\t worker details"<<endl;
        out<<"date ="<<da.day<<":"<<da.month<<":"<<da.year<<endl;
        out<<"work ="<<work<<endl<<"id number ="<<e_id<<endl;
        out<<"phone number ="<<p_no<<endl;
        out<<"thanks you have loged in \n you can work now\n";
        out<<"\t\t student details"<<endl;
        out<<"student name ="<<sname<<endl<<"roll number ="<<roll_no<<endl<<"department name ="<<dep_name<<endl;
        out<<"book name="<<bname<<"book quantity ="<<b_qt;
        out<<"\t\t book details"<<endl;
        out<<"\n book name for the library ="<<bname<<endl<<"\nbook quantity in library ="<<fb_qt<<endl;
        out<<"book no ="<<b_no;
    }
};
int main()
{
    library l;
    l.worker();
    l.student();
    l.book();
    l.out();
    return 0;
}