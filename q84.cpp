//multilevel inheritance
#include<iostream>
using namespace std;
class grndparent
{
    protected:
    string name;
    int age;
    string adress;

};
class parent:public grndparent
{
    protected:
    string pname;
    int page;
    string paddress;
    string occupation;
};
class child:public parent
{
    protected:
    string cname,adress;
    int cage;
    long double p_no;
    public:
    void getdata()
    {
        cout<<"Enter name of grandparent: ";
        cin>>name;
        cout<<"Enter age of grandparent: ";
        cin>>age;
        cout<<"Enter address of grandparent: ";
        cin>>adress;
        cout<<"Enter name of parent: ";
        cin>>pname;
        cout<<"Enter age of parent: ";
        cin>>page;
        cout<<"Enter address of parent: ";
        cin>>paddress;
        cout<<"Enter occupation of parent: ";
        cin>>occupation;
        cout<<"Enter name of child: ";
        cin>>cname;
        cout<<"Enter age of child: ";
        cin>>cage;
        cout<<"Enter address of child: ";
        cin>>adress;
        cout<<"Enter phone number of child: ";
        cin>>p_no;

    }
    void printdata()
    {
        cout<<"Name of grandparent: "<<name<<endl;
        cout<<"Age of grandparent: "<<age<<endl;
        cout<<"adress of grandparent: "<<adress<<endl;
        cout<<"Name of parent: "<<pname<<endl;
        cout<<"age of the parent: "<<page<<endl;
        cout<<"adress of the parent: "<<paddress<<endl;
        cout<<"occupation of the parents: "<<occupation<<endl;
        cout<<"chid name : "<<cname<<endl;
        cout<<"chid age: "<<cage<<endl;
        cout<<"child adress : "<<adress<<endl;
        cout<<"child phone number: "<<p_no<<endl;
    }
};
int main()
{
    child c;
    c.getdata();
    cout<<system("cls");
    c.printdata();
    return 0;

}

