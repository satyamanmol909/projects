//mutiple inheritance
#include<iostream>
using namespace std;
class father
{
    protected:
    string fname;
    int age;
    double p_no;
};
class mother
{
    protected:
    string mname;
    int p2_age;

};

class child:public father,mother
{
    protected:
    string c1_name;
    int c1_age;
    string email;
    public:
    void getdata()
    {
        cout<<"Enter father name: ";
        cin>>fname;
        cout<<"Enter father age: ";
        cin>>age;
        cout<<"Enter father phone number: ";
        cin>>p_no;
        cout<<"Enter mother name: ";
        cin>>mname;
        cout<<"Enter mother age: ";
        cin>>p2_age;
        cout<<"Enter child name: ";
        cin>>c1_name;
        cout<<"Enter child age: ";
        cin>>c1_age;
        cout<<"enter the child email: ";
        cin>>email; 
        
    }
    void display()
    {
        cout<<"Father name: "<<fname<<endl;
        cout<<"Father age: "<<age<<endl;
        cout<<"Father phone number: "<<p_no<<endl;
        cout<<"Mother name: "<<mname<<endl;
        cout<<"Mother age: "<<p2_age<<endl;
        cout<<"Child name: "<<c1_name<<endl;
        cout<<"Child age: "<<c1_age<<endl;
        cout<<"child email id : "<<email<<endl;
    }

};
int main()
{
    child c;
    c.getdata();
    cout<<system("cls");
    c.display();
    return 0;
}
